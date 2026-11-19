#include "common_local_source_339302417407.h"

extern u8 D_8011F2F0;
extern u8 D_8011F2FD;

void func_80164218(s32 arg0) {
    s32 off;
    u8 *base;

    off = (arg0 & 0xFFFF) * 0x64;
    base = &D_8011F2F0 + off;
    *(f32 *)(base + 0x44) = *(f32 *)(base + 0x44) * 0.9f;
    *(f32 *)(base + 0x48) = *(f32 *)(base + 0x48) * 0.9f;
    *(f32 *)(base + 0x4C) = *(f32 *)(base + 0x4C) * 0.9f;
    *(f32 *)(base + 0x18) = *(f32 *)(base + 0x18) + *(f32 *)(base + 0x44);
    *(f32 *)(base + 0x1C) = *(f32 *)(base + 0x1C) + *(f32 *)(base + 0x48);
    *(f32 *)(base + 0x20) = *(f32 *)(base + 0x20) + *(f32 *)(base + 0x4C);
    *(f32 *)(base + 0x30) = (1.0f - *(f32 *)(base + 0x30)) * 0.1f + *(f32 *)(base + 0x30);
    *(f32 *)(base + 0x34) = (1.0f - *(f32 *)(base + 0x34)) * 0.1f + *(f32 *)(base + 0x34);
    *(f32 *)(base + 0x38) = (1.0f - *(f32 *)(base + 0x38)) * 0.1f + *(f32 *)(base + 0x38);
    base[0xC] = base[0xC] - 0xA;
    if (base[0xC] < 0xF) {
        *(&D_8011F2FD + off) = 2;
    }
}
