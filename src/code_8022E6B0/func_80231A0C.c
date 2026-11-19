#include "common_local_source_339302417700.h"

s32 func_800DE41C();
void func_8021F5F0();
void func_8021FCA4();
extern char D_8011F2F4[];
extern char D_8011F2F8[];
extern char D_8021FE04[];
extern char D_8022026C[];
extern char D_80220454[];
extern char D_8022063C[];
extern s32 func_80139F14;

void func_80231A0C(void) {
    s32 temp_v1;

    temp_v1 = (func_800DE41C(0, 0, 3, 0, 0x20, 0xFF, 0, 0, &func_80139F14, 0, 0, 0, 0, 0, 0, 0, 0, 0) & 0xFFFF) * 0x64;
    *(u16 *)(D_8011F2F4 + temp_v1) = *(u16 *)(D_8011F2F4 + temp_v1) | 0x20;
    *(u16 *)(D_8011F2F4 + 2 + temp_v1) = *(u16 *)(D_8011F2F4 + 2 + temp_v1) | 0x20;
    *(u16 *)(D_8011F2F8 + temp_v1) = *(u16 *)(D_8011F2F8 + temp_v1) | 0x20;
    func_8021F5F0();
    func_8021FCA4();
    func_800DE41C(0, 0, 3, 0, 0x21, 0xFF, 0, 0, &D_8021FE04, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, 0, 0, &D_80220454, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x50, 0xFF, 0, 0, &D_8022026C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x70, 0xFF, 0, 0, &D_8022063C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
