#include "common_local_source_339302417375.h"

extern u8 D_8011F2FC[];
extern u8 D_8011F350[];

void func_8015D368(void **arg0, s32 arg1) {
    u8 *temp_a1;
    u8 *temp_v1;

    temp_v1 = *(u8 **)(D_8011F350 + ((arg1 & 0xFFFF) * 0x64));
    if (temp_v1[0x16] != 0) {
        temp_v1[0x16] = 0;
        return;
    }
    temp_a1 = *arg0;
    *arg0 = temp_a1 + 8;
    *(s32 *)temp_a1 = 0xFA000000;
    *(s32 *)(temp_a1 + 4) = (temp_v1[0x17] << 0x18) | (temp_v1[0x18] << 0x10) | (temp_v1[0x19] << 8) | D_8011F2FC[(arg1 & 0xFFFF) * 0x64];
}
