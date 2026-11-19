#include "common_local_source_339302417627.h"

extern u16 *D_802030CC[];
extern u16 D_8021F270[][14][8];
void func_80211E9C(s32 arg0) {
    s32 i;
    s32 j;
    u16 *src;
    for (i = 0; i < 14; i++) {
        src = D_802030CC[i];
        for (j = 0; j < 8; j++) {
            D_8021F270[arg0][i][j] = src[j];
        }
    }
}
