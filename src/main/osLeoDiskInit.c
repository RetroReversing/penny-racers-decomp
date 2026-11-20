#include "common_local_source_339302416931.h"

extern u8 D_800DA1EC[];
extern s32 D_800DA1F4;
extern s32 D_800DA1F8;
extern s32 D_8006FB28;
extern s32 D_8004814C;
s32 func_8003DDC0(void *, s32);
s32 __osDisableInt(void);
void func_8003EAE0(s32);

void *osLeoDiskInit(void) {
    u8 *p = D_800DA1EC;
    s32 old;
    s32 v;

    p[0] = 2;
    D_800DA1F4 = 0xA5000000;
    p[1] = 3;
    p[4] = 6;
    p[2] = 6;
    p[5] = 1;
    p[3] = 2;
    *(volatile s32 *)0xA4600024 = 3;
    *(volatile s32 *)0xA4600028 = 6;
    *(volatile s32 *)0xA460002C = 6;
    *(volatile s32 *)0xA4600030 = 2;
    D_800DA1F8 = 0;
    func_8003DDC0(p + 0x10, 0x60);
    v = __osDisableInt();
    old = D_8004814C;
    D_8004814C = (s32)(p - 4);
    D_8006FB28 = (s32)(p - 4);
    *(s32 *)(p - 4) = old;
    func_8003EAE0(v);
    return p - 4;
}
