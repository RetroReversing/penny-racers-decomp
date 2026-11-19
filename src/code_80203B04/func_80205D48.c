#include "common_local_source_339302417569.h"

f32 __cosf(f32);
extern u32 D_8021B098;
extern f64 D_8021DBA0;
s32 func_80205D48(f32 arg0, f32 arg1, u8 arg2) {
    f32 half;
    f32 t;

    if (arg2 == 0) {
        D_8021B098 = 0;
    }
    half = arg0 / 2.0f;
    t = -__cosf(D_8021DBA0 / (arg1 * 30.0f) * D_8021B098) * half;
    t += half;
    half = t;
    D_8021B098++;
    return half;
}
