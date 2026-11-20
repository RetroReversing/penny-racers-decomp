#include "common.h"

s32 alEvtqPostEvent(s32, void *, s32);

typedef struct {
    s16 type;
    s16 pad;
    s16 arg;
} SeqpVolEvt;

void alSeqpSetVol(s32 arg0, s16 arg1) {
    SeqpVolEvt ev;
    s32 pad[2];

    ev.arg = arg1;
    ev.type = 0xA;
    alEvtqPostEvent(arg0 + 0x48, &ev, 0);
}
