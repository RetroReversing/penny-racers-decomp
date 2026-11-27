typedef struct { void *p[6]; } OSMesgQueue;
typedef void *OSMesg;
typedef struct { u8 d[0x10]; } NUScClient;
typedef long long Acmd;
typedef struct {
    u32 type; u32 flags;
    u64 *ucode_boot; u32 ucode_boot_size;
    u64 *ucode; u32 ucode_size;
    u64 *ucode_data; u32 ucode_data_size;
    u64 *dram_stack; u32 dram_stack_size;
    u64 *output_buff; u64 *output_buff_size;
    u64 *data_ptr; u32 data_size;
    u64 *yield_data_ptr; u32 yield_data_size;
} OSTask_t;
typedef union { OSTask_t t; long long int force_structure_alignment; } OSTask;
typedef struct { void *next; u32 state; u32 flags; void *framebuffer; OSTask list; OSMesgQueue *msgQ; OSMesg msg; } NUScTask;
typedef struct ALLink_s { struct ALLink_s *next; struct ALLink_s *prev; } ALLink;
typedef struct { ALLink node; u32 startAddr; u32 lastFrame; char *ptr; } DMABuf;

extern u32 auFrameCount;
extern u8 D_80046C3C;
extern u8 D_80046C3D;
extern void (*auCallback)(s32, u8);
extern Acmd *auCmdLists[2];
extern NUScTask auTasks[];
extern s16 *auAudioBufs[3];
extern DMABuf *auDmaActive;
extern DMABuf *auDmaFree;
extern s32 D_8005DCB0;
extern s32 D_80072BCC;
extern OSMesgQueue auTaskQueue;
extern s32 D_800DDE98;

s32 osRecvMesg(OSMesgQueue *, OSMesg *, s32);
s32 osSendMesg(OSMesgQueue *, OSMesg, s32);
void osCreateMesgQueue(OSMesgQueue *, OSMesg *, s32);
void nuScAddClient(NUScClient *, OSMesgQueue *, s16);
u32 osVirtualToPhysical(void *);
Acmd *n_alAudioFrame(Acmd *, s32 *, s16 *, s32);
void ai_dma_start(void *, u32);
void alLink(ALLink *, ALLink *);
void alUnlink(ALLink *);
void func_80027584(void);
u32 osAiGetLength(void);
u32 func_80039640(void);

/* Audio thread: builds the audio command list each frame, hands it to the RSP task queue, and recycles DMA buffers. */
void auAudioThread(void *arg)
{
    NUScClient client;
    OSMesgQueue auMsgQ;
    OSMesg msg[8];
    OSMesgQueue rtnMsgQ;
    OSMesg rtnMsg[1];
    s16 *msgType;
    s32 cmdLen;
    Acmd *cmdList;
    Acmd *cmdEnd;
    NUScTask *task;
    DMABuf *dma;
    DMABuf *next;
    u32 left;
    s32 frameSize;
    s32 minFrameSize;
    s16 *audioPtr;
    s32 sampleSize;
    s32 audioIdx;
    s32 cmdIdx;
    s32 restart;

    osCreateMesgQueue(&auMsgQ, msg, 8);
    osCreateMesgQueue(&rtnMsgQ, rtnMsg, 1);
    nuScAddClient(&client, &auMsgQ, 3);
    frameSize = (u32)(D_800DDE98 * D_80072BCC + 59) / 60;
    sampleSize = 0;
    audioIdx = 0;
    cmdList = auCmdLists[0];
    audioPtr = auAudioBufs[0];
    cmdIdx = 0;
    task = &auTasks[0];
    cmdLen = 0;
    frameSize = (frameSize / 184 + 1) * 184;
    minFrameSize = frameSize - 184;

    while (1) {
        osRecvMesg(&auMsgQ, (OSMesg *)&msgType, 1);
        switch (*msgType) {
        case 1:
            if ((s32)func_80039640() < 0) {
                restart = 0;
                continue;
            }
            left = osAiGetLength() >> 2;
            if (cmdLen != 0 && D_80046C3C == 1) {
                ai_dma_start(audioPtr, sampleSize * 4);
                task = &auTasks[cmdIdx];
                cmdList = auCmdLists[cmdIdx];
                audioPtr = auAudioBufs[audioIdx];
            }
            if (((s32)left < 0x170) | (restart != 0)) {
                sampleSize = frameSize;
                restart = 0;
            } else {
                sampleSize = minFrameSize;
                restart = 1;
            }
            cmdEnd = n_alAudioFrame(cmdList, &cmdLen, (s16 *)osVirtualToPhysical(audioPtr), sampleSize);
            if (cmdLen != 0 && D_80046C3C == 1) {
                task->list.t.data_ptr = (u64 *)cmdList;
                task->list.t.data_size = (cmdEnd - cmdList) * sizeof(Acmd);
                task->msgQ = &rtnMsgQ;
                osSendMesg(&auTaskQueue, task, 1);
                dma = auDmaActive;
                while (dma != 0) {
                    next = (DMABuf *)dma->node.next;
                    if (dma->lastFrame + 2 < auFrameCount) {
                        if (auDmaActive == dma) {
                            auDmaActive = (DMABuf *)dma->node.next;
                        }
                        alUnlink((ALLink *)dma);
                        if (auDmaFree != 0) {
                            alLink((ALLink *)dma, (ALLink *)auDmaFree);
                        } else {
                            auDmaFree = dma;
                            dma->node.next = 0;
                            dma->node.prev = 0;
                        }
                    }
                    dma = next;
                }
                D_8005DCB0 = 0;
                auFrameCount++;
                osRecvMesg(&rtnMsgQ, 0, 1);
                cmdIdx ^= 1;
                audioIdx = (u32)(audioIdx + 1) % 3;
            }
            func_80027584();
            if (auCallback != 0) {
                if (D_80046C3D != 0) {
                    auCallback(1, D_80046C3D);
                    D_80046C3D++;
                }
            }
            break;
        case 2:
            if (auCallback != 0) {
                auCallback(2, D_80046C3D);
            }
            D_80046C3D++;
            break;
        }
    }
}
