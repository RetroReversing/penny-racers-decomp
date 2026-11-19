#include "common.h"

/* adapted from similar verified C in func_80030250 in PENNY RACERS (matched), with its names changed by decompdecomp */
void *__n_allocParam(void);
int func_8002E6E4(void *, int, void *);
extern void *D_80046DF4;

void n_alSynSetPan(void *arg0, s32 arg1) {
    void *temp_v0;
    if (*(void **)((s8 *)arg0 + 8) != NULL) {
        temp_v0 = __n_allocParam();
        if (temp_v0 != NULL) {
            s32 t = *(s32 *)((s8 *)D_80046DF4 + 0x28) + *(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 8)) + 0x88);
            *(s16 *)((s8 *)temp_v0 + 8) = 12;
            *(s32 *)((s8 *)temp_v0 + 0xC) = (s32) (arg1 & 0xFF);
            *(s32 *)((s8 *)temp_v0 + 0) = 0;
            *(s32 *)((s8 *)temp_v0 + 4) = t;
            func_8002E6E4(*(void **)((s8 *)arg0 + 8), 3, temp_v0);
        }
    }
}
