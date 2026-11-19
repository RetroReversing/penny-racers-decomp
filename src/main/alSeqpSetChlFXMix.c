#include "common.h"

s32 alEvtqPostEvent(s32, s16 *, s32);

typedef struct {
    s16 a;
    s32 b;
    u8 c;
    u8 d;
    u8 e;
} Blk;

void alSeqpSetChlFXMix(s32 arg0, s32 arg1, s8 arg2) {
    Blk blk;

    blk.a = 2;
    blk.b = 0;
    blk.c = arg1 | 0xB0;
    blk.d = 0x5B;
    blk.e = arg2;
    alEvtqPostEvent(arg0 + 0x48, (s16 *)&blk, 0);
}
