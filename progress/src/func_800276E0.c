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

extern u32 D_80046C30;
extern u8 D_80046C3C;
extern u8 D_80046C3D;
extern void (*D_80046C40)(s32, u8);
extern Acmd *D_8005CFC0[2];
extern NUScTask D_8005CFC8[];
extern s16 *D_8005D078[3];
extern DMABuf *D_8005D7A4;
extern DMABuf *D_8005D7A8;
extern s32 D_8005DCB0;
extern s32 D_80072BCC;
extern OSMesgQueue D_800DD824;
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

void func_800276E0(void *arg)
{
    NUScClient client;
    OSMesgQueue auMsgQ;
    OSMesg msg[8];
    OSMesgQueue rtnMsgQ;
    OSMesg rtnMsg[1];
    s16 *msg_type;
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
    cmdList = D_8005CFC0[0];
    audioPtr = D_8005D078[0];
    cmdIdx = 0;
    task = &D_8005CFC8[0];
    cmdLen = 0;
    frameSize = (frameSize / 184 + 1) * 184;
    minFrameSize = frameSize - 184;

    while (1) {
        osRecvMesg(&auMsgQ, (OSMesg *)&msg_type, 1);
        switch (*msg_type) {
        case 1:
            if ((s32)func_80039640() < 0) {
                restart = 0;
                continue;
            }
            left = osAiGetLength() >> 2;
            if (cmdLen != 0 && D_80046C3C == 1) {
                ai_dma_start(audioPtr, sampleSize * 4);
                task = &D_8005CFC8[cmdIdx];
                cmdList = D_8005CFC0[cmdIdx];
                audioPtr = D_8005D078[audioIdx];
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
                osSendMesg(&D_800DD824, task, 1);
                dma = D_8005D7A4;
                while (dma != 0) {
                    next = (DMABuf *)dma->node.next;
                    if (dma->lastFrame + 2 < D_80046C30) {
                        if (D_8005D7A4 == dma) {
                            D_8005D7A4 = (DMABuf *)dma->node.next;
                        }
                        alUnlink((ALLink *)dma);
                        if (D_8005D7A8 != 0) {
                            alLink((ALLink *)dma, (ALLink *)D_8005D7A8);
                        } else {
                            D_8005D7A8 = dma;
                            dma->node.next = 0;
                            dma->node.prev = 0;
                        }
                    }
                    dma = next;
                }
                D_8005DCB0 = 0;
                D_80046C30++;
                osRecvMesg(&rtnMsgQ, 0, 1);
                cmdIdx ^= 1;
                audioIdx = (u32)(audioIdx + 1) % 3;
            }
            func_80027584();
            if (D_80046C40 != 0) {
                if (D_80046C3D != 0) {
                    D_80046C40(1, D_80046C3D);
                    D_80046C3D++;
                }
            }
            break;
        case 2:
            if (D_80046C40 != 0) {
                D_80046C40(2, D_80046C3D);
            }
            D_80046C3D++;
            break;
        }
    }
}
