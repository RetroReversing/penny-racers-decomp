#include "common.h"

extern u8 D_8011F32E[];

void func_8014D11C(s32 arg0) {
    s32 off;

    off = ((u16)arg0) * 0x64;
    *(u16 *)(D_8011F32E + off) = *(u16 *)(D_8011F32E + off) + 1;
    if (*(u16 *)(D_8011F32E + off) >= 0x80) {
        *(u16 *)(D_8011F32E + off) = *(vu16 *)(D_8011F32E + off) - 0x7F;
    }
}
