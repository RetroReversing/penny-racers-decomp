#include "common.h"

s32 __alCSeqNextDelta(s32, s32 *);
s32 alEvtqPostEvent(void *, s16 *, s32);

typedef struct {
    s16 type;
    u8 pad[0xE];
    s32 delta;
} EvtBuf;

void __CSPPostNextSeqEvent(void *arg0) {
    EvtBuf evt;
    s32 temp_a0;

    if (*(s32 *)((char *)arg0 + 0x2C) == 1) {
        temp_a0 = *(s32 *)((char *)arg0 + 0x18);
        if ((temp_a0 != 0) && ((__alCSeqNextDelta(temp_a0, &evt.delta) << 0x18) != 0)) {
            evt.type = 0;
            alEvtqPostEvent((char *)arg0 + 0x48, &evt.type, evt.delta * *(s32 *)((char *)arg0 + 0x24));
        }
    }
}
