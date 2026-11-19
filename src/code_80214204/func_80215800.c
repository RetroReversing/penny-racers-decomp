#include "common_local_source_339302417649.h"

extern s8 D_80190CB4;
extern u8 D_8021E19E;
s32 func_80205D48(f32, f32, s32);

void func_80215800(void) {
    u8 *p;

    p = &D_8021E19E;
    *p -= 8;
    D_80190CB4 = ~func_80205D48(100.0f, 2.0f, 1);
}
