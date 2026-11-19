#include "common_local_source_339302416386.h"

extern s16 D_800E1ED0;
extern s16 D_80126FF2;
extern s16 D_800E2660;
extern s16 D_800E2662;
extern s16 D_8011ED58;

void func_800DE38C(void) {
    s32 temp_v1;
    s32 var_a0;
    u32 temp_v0;
    u32 var_v0;

    D_800E1ED0 = 0x140;
    D_80126FF2 = 0;
    *(u16 *)((u8 *)&D_800E2660 + 0) = 0xFFFF;
    *(u16 *)((u8 *)&D_800E2660 + 2) = 1;
    var_a0 = 1;
    do {
        var_v0 = var_a0 * 2;do{
        temp_v0 = (((var_v0 + var_a0) << 5) + var_a0) * 8;}while(0);
        *(u16 *)((u8 *)&D_800E2660 + temp_v0) = var_a0 - 1;
        temp_v1 = var_a0 + 1;
        *(u16 *)((u8 *)&D_800E2662 + temp_v0) = temp_v1;
        var_a0 = temp_v1;
    } while (var_a0 < 0x13F);
    *(u16 *)((u8 *)&D_8011ED58 + 0) = 0x13E;
    *(u16 *)((u8 *)&D_8011ED58 + 2) = 0xFFFF;
}
