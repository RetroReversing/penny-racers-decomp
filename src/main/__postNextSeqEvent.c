#include "common.h"

typedef struct {
    u16 type;
    u8 pad[2];
    union {
        s16 h[6];
        s32 w[3];
        u8 b[12];
    } u;
} ALSeqEvt;

s32 __alSeqNextDelta(void *, s32 *);
s32 alEvtqPostEvent(void *, ALSeqEvt *, s32);
s32 func_80038124(void *);
void func_8003812C(void *, void *);

void __postNextSeqEvent(void *arg0) {
    ALSeqEvt evt;
    s32 sp20;
    void *temp_s1;
    s32 skip;

    temp_s1 = *(void **)((u8 *)arg0 + 0x18);
    skip = (*(s32 *)((u8 *)arg0 + 0x2C) != 1) | (temp_s1 == NULL);
    if (!skip && (__alSeqNextDelta(temp_s1, &sp20) << 24) != 0) {
        if (*(s32 *)((u8 *)arg0 + 0x84) != 0 && func_80038124(temp_s1) + sp20 >= *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x80) + 8)) {
            func_8003812C(temp_s1, *(void **)((u8 *)arg0 + 0x7C));
            if (*(s32 *)((u8 *)arg0 + 0x84) != -1) {
                *(s32 *)((u8 *)arg0 + 0x84) -= 1;
            }
        }
        evt.type = 0;
        alEvtqPostEvent((u8 *)arg0 + 0x48, &evt, sp20 * *(s32 *)((u8 *)arg0 + 0x24));
    }
}
