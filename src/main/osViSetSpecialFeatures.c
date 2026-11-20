#include "common.h"

/* identical to osViSetSpecialFeatures in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
typedef struct OSMesgQueue_s OSMesgQueue;
typedef void *OSMesg;

typedef struct {
    u32 ctrl;
    u32 width;
    u32 burst;
    u32 vSync;
    u32 hSync;
    u32 leap;
    u32 hStart;
    u32 xScale;
    u32 vCurrent;
} OSViCommonRegs;

typedef struct {
    u32 origin;
    u32 yScale;
    u32 vStart;
    u32 vBurst;
    u32 vIntr;
} OSViFieldRegs;

typedef struct {
    u8 type;
    OSViCommonRegs comRegs;
    OSViFieldRegs fldRegs[2];
} OSViMode;

typedef struct {
    f32 factor;
    u16 offset;
    u32 scale;
} __OSViScale;

typedef struct {
    u16 state;
    u16 retraceCount;
    void *framep;
    OSViMode *modep;
    u32 control;
    OSMesgQueue *msgq;
    OSMesg msg;
    __OSViScale x;
    __OSViScale y;
} __OSViContext;

extern __OSViContext *D_800481F4;
u32 __osDisableInt(void);
void func_8003EAE0(u32);

/* Turns VI special features on or off (bit set = on, bit clear = off) in the current
   VI context's control word, then marks the context as changed. Interrupts are
   disabled while the context is edited. */
void osViSetSpecialFeatures(u32 func) {
    register u32 saveMask;

    saveMask = __osDisableInt();

    if ((func & 0x0001) != 0) {
        D_800481F4->control |= 0x00008;
    }

    if ((func & 0x0002) != 0) {
        D_800481F4->control &= ~0x00008;
    }

    if ((func & 0x0004) != 0) {
        D_800481F4->control |= 0x00004;
    }

    if ((func & 0x0008) != 0) {
        D_800481F4->control &= ~0x00004;
    }

    if ((func & 0x0010) != 0) {
        D_800481F4->control |= 0x00010;
    }

    if ((func & 0x0020) != 0) {
        D_800481F4->control &= ~0x00010;
    }

    if ((func & 0x0040) != 0) {
        D_800481F4->control |= 0x10000;
        D_800481F4->control &= ~0x00300;
    }

    if ((func & 0x0080) != 0) {
        D_800481F4->control &= ~0x10000;
        D_800481F4->control |= D_800481F4->modep->comRegs.ctrl & 0x00300;
    }

    D_800481F4->state |= 0x08;

    func_8003EAE0(saveMask);
}
