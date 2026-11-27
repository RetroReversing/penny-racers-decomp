typedef struct { s32 d[111]; } ALHeapPad;
typedef struct { u8 *base; u8 *cur; s32 len; s32 count; } ALHeap;
typedef struct { void *p[6]; } OSMesgQueue;
typedef void *OSMesg;
typedef struct { u8 d[0x1B0]; } OSThread;
typedef struct { s32 d[1]; } N_ALGlobals;
typedef s32 Acmd;
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
typedef struct { s32 maxVVoices; s32 maxPVoices; s32 maxUpdates; s32 maxFXbusses; void *dmaproc; ALHeap *heap; s32 outputRate; } ALSynConfig;
typedef struct { u8 d[0x17C]; s32 flags; u8 pad[4]; } SeqState;
extern void *alHeapDBAlloc(u8 *, s32, ALHeap *, s32, s32);
#define alHeapAlloc(hp, n, size) alHeapDBAlloc(0, 0, hp, n, size)
extern u8 D_80046C3C;
extern ALHeap D_8006E780;
extern Acmd *auCmdLists[2];
extern s16 *auAudioBufs[3];
extern OSMesgQueue D_8005D088;
extern OSMesg D_8005D0A0[];
extern N_ALGlobals D_80072B80;
extern NUScTask auTasks[];
extern SeqState D_8006FB38[];
extern u64 D_800437A0[];
extern u64 D_800485C0[];
extern OSThread D_8004CE10;
extern u64 D_8004EFC0[];
extern void func_800428B0(void);
extern void func_80042980(void);
extern void auAudioThread(void *);
void *auDmaNew(void **);

/* Initializes the audio manager: sets up the heap, command lists and audio buffers, fills in the
 * synth config, sets up the two audio task slots, and starts the audio thread. */
void nuAuStlMgrInit(u8 *heapBase, u32 heapSize, ALSynConfig *synConfig)
{
    u32 i;

    D_80046C3C = 1;
    alHeapInit(&D_8006E780, heapBase, heapSize);
    auCmdLists[0] = alHeapAlloc(&D_8006E780, 1, 0x2000);
    auCmdLists[1] = alHeapAlloc(&D_8006E780, 1, 0x2000);
    auAudioBufs[0] = alHeapAlloc(&D_8006E780, 1, 0x8000);
    auAudioBufs[1] = alHeapAlloc(&D_8006E780, 1, 0x8000);
    auAudioBufs[2] = alHeapAlloc(&D_8006E780, 1, 0x8000);
    osCreateMesgQueue(&D_8005D088, D_8005D0A0, 0x40);
    synConfig->dmaproc = (void *)auDmaNew;
    synConfig->heap = &D_8006E780;
    synConfig->outputRate = osAiSetFrequency(synConfig->outputRate);
    n_alInit(&D_80072B80, synConfig);
    for (i = 0; i < 2; i++) {
        auTasks[i].msg = 0;
        auTasks[i].list.t.type = 2;
        auTasks[i].list.t.ucode_boot = (u64 *)func_800428B0;
        auTasks[i].list.t.ucode_boot_size = (u32)((u8 *)func_80042980 - (u8 *)func_800428B0);
        auTasks[i].list.t.ucode = D_800437A0;
        auTasks[i].list.t.ucode_data = D_800485C0;
        auTasks[i].list.t.ucode_data_size = 0x800;
        auTasks[i].list.t.dram_stack = 0;
        auTasks[i].list.t.dram_stack_size = 0;
        auTasks[i].list.t.output_buff = 0;
        auTasks[i].list.t.output_buff_size = 0;
        auTasks[i].list.t.yield_data_ptr = 0;
        auTasks[i].list.t.yield_data_size = 0;
        D_8006FB38[i].flags = 0;
    }
    osCreateThread(&D_8004CE10, 6, auAudioThread, 0, D_8004EFC0, 0x46);
    osStartThread(&D_8004CE10);
}
