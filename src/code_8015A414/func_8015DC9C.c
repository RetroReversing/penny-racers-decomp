#include "common_local_source_339302417377.h"

extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
void func_8013E49C(u16);
void func_8013EC14(s32, f32, s32, f32);

void func_8015DC9C(s32 arg0) {
    s32 idx;
    u8 *obj;
    u8 *sub;
    f32 temp;

    idx = (arg0 & 0xFFFF) * 100;
    obj = &D_8011F2F0[idx];
    sub = *(u8 **)(obj + 0x60);
    obj[0xC] -= 4;
    if (obj[0xC] < 5) {
        func_8013E49C(*(u16 *)(sub + 0x76));
        D_8011F2FD[idx] = 2;
    }
    temp = *(f32 *)(sub + 0x8) * 0.7f + *(f32 *)(obj + 0x30);
    func_8013EC14(arg0 & 0xFFFF, temp, *(s32 *)(obj + 0x34), temp);
    *(f32 *)(obj + 0x28) += 5.0f;
}
