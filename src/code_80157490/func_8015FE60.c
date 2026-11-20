#include "common.h"

extern u8 D_8011F2FC[];

void func_8015FE60(void **arg0, s32 arg1) {
    u32 off = (arg1 & 0xFFFF) * 100;
    void *temp_v1;

    if (D_8011F2FC[off] != 0xFA) {
        temp_v1 = *arg0;
        *arg0 = (u8 *)temp_v1 + 8;
        *(s32 *)temp_v1 = 0xFA000000;
        *((s32 *)temp_v1 + 1) = (s32)D_8011F2FC[off];
    }
}
