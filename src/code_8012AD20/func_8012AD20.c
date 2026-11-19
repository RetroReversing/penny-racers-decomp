#include "common_local_source_339302417137.h"

extern u8 D_8011F34C[];
extern void *D_80237F90[];

void func_8012AD20(s32 arg0, u16 *arg1, s32 arg2, s32 arg3) {
    s32 var_t0;

    *(u16 **)&D_8011F34C[(arg0 & 0xFFFF) * 0x64] = arg1;
    var_t0 = 0;
    do {
        arg1[var_t0] = ((u16 *)((void **)D_80237F90[arg2 & 0xFF])[arg3 & 0xFF])[var_t0];
        var_t0 += 1;
    } while (var_t0 < 0x10);
}
