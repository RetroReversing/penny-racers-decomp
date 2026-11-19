#include "common.h"

s32 alEvtqPostEvent(s32, void *, s32);

typedef struct {
    s16 type;
    s16 pad;
    s32 arg;
} SeqpEvt;

void alSeqpSetSeq(s32 arg0, s32 arg1) {
    SeqpEvt ev;
    s32 pad[2];

    ev.arg = arg1;
    ev.type = 0xD;
    alEvtqPostEvent(arg0 + 0x48, &ev, 0);
}
