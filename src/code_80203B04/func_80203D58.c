#include "common.h"

extern u16 D_80071F70[];
extern u16 D_8021B088[];
extern u16 D_8021E1A0[];
extern s16 D_8021E1A8;

void func_80203D58(void) {
    s32 i;
    for (i = 0; i < 7; i++) {
        D_8021E1A0[i] = D_8021B088[i];
    }
    D_8021E1A8 = *(u16 *)((u8 *)&D_80071F70 + 2) - 1;
}
