#include "common_local_source_339302417503.h"

extern u8 D_801E91D4[];
extern u8 D_801E97CA[];

void func_801E43A0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a3;

    temp_a3 = (arg0 & 0xFF) * 0x30;
    temp_a1 = arg1 & 0xFF;
    *(u16 *)(D_801E97CA + temp_a3) = (*(u16 *)(D_801E97CA + temp_a3) & ~*(u16 *)(D_801E91D4 + (temp_a1 * 2))) | ((arg2 & 0xFF) << (temp_a1 * 4));
}
