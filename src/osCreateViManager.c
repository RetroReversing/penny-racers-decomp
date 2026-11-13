typedef s32 OSPri;
typedef s32 OSId;
typedef void *OSMesg;
typedef struct OSThread_s { struct OSThread_s *next; OSPri priority; struct OSThread_s **queue; struct OSThread_s *tlnext; u16 state; u16 flags; OSId id; int fp; void *thprof; u8 context[0x1b0 - 0x24]; } OSThread;
typedef struct OSMesgQueue_s { OSThread *mtqueue; OSThread *fullqueue; s32 validCount; s32 first; s32 msgCount; OSMesg *msg; } OSMesgQueue;
typedef struct { u16 type; u8 pri; u8 status; OSMesgQueue *retQueue; } OSIoMesgHdr;
typedef struct { OSIoMesgHdr hdr; void *dramAddr; u32 devAddr; u32 size; void *piHandle; } OSIoMesg;
typedef struct { s32 active; OSThread *thread; OSMesgQueue *cmdQueue; OSMesgQueue *evtQueue; OSMesgQueue *acsQueue; s32 (*dma)(s32, u32, void *, u32); s32 (*edma)(void *, s32, u32, void *, u32); } OSDevMgr;
extern void __osTimerServicesInit(void);
extern void osCreateMesgQueue(OSMesgQueue *, OSMesg *, s32);
extern void osSetEventMesg(u32, OSMesgQueue *, OSMesg);
extern OSPri func_8003EDA0(OSThread *);
extern void osSetThreadPri(OSThread *, OSPri);
extern u32 __osDisableInt(void);
extern void osCreateThread(OSThread *, OSId, void (*)(void *), void *, void *, OSPri);
extern void func_8003F210(void);
extern void osStartThread(OSThread *);
extern void func_8003EAE0(u32);
OSDevMgr __osViDevMgr = { 0 };
u32 __additional_scanline = 0;
static struct { OSThread thread; unsigned char gap[8]; } viThreadStorage;
static unsigned char viThreadStack[4096] __attribute__((aligned(8)));
static OSMesgQueue viEventQueue __attribute__((aligned(8)));
static OSMesg viEventBuf[5] __attribute__((aligned(8)));
static OSIoMesg viRetraceMsg __attribute__((aligned(8)));
static OSIoMesg viCounterMsg __attribute__((aligned(8)));
static void viMgrMain(void *arg);
void osCreateViManager(OSPri pri) {
    u32 savedMask;
    OSPri oldPri;
    OSPri myPri;
    if (__osViDevMgr.active) {
        return;
    }
    __osTimerServicesInit();
    osCreateMesgQueue(&viEventQueue, viEventBuf, 5);
    viRetraceMsg.hdr.type = 13;
    viRetraceMsg.hdr.pri = 0;
    viRetraceMsg.hdr.retQueue = 0;
    viCounterMsg.hdr.type = 14;
    viCounterMsg.hdr.pri = 0;
    viCounterMsg.hdr.retQueue = 0;
    osSetEventMesg(7, &viEventQueue, &viRetraceMsg);
    osSetEventMesg(3, &viEventQueue, &viCounterMsg);
    oldPri = -1;
    myPri = func_8003EDA0(0);
    if (myPri < pri) {
        oldPri = myPri;
        osSetThreadPri(0, pri);
    }
    savedMask = __osDisableInt();
    __osViDevMgr.active = 1;
    __osViDevMgr.thread = &viThreadStorage.thread;
    __osViDevMgr.cmdQueue = &viEventQueue;
    __osViDevMgr.evtQueue = &viEventQueue;
    __osViDevMgr.acsQueue = 0;
    __osViDevMgr.dma = 0;
    __osViDevMgr.edma = 0;
    osCreateThread(&viThreadStorage.thread, 0, viMgrMain, &__osViDevMgr, &viThreadStack[4096], pri);
    func_8003F210();
    osStartThread(&viThreadStorage.thread);
    func_8003EAE0(savedMask);
    if (oldPri != -1) {
        osSetThreadPri(0, oldPri);
    }
}
