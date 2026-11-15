f32 __cosf(f32);
extern s32 D_8021B098;
extern f64 D_8021DBA0;
extern f64 D_8021DBA8;

s32 func_80205D48(f32 arg0, f32 arg1, u16 arg2) {
    f32 half;
    f64 d1;
    f64 q;
    f64 t;
    f32 r;

    if ((arg2 & 0xFF) == 0) {
        D_8021B098 = 0;
    }
    half = arg0 / 2.0f;
    d1 = (f64) (arg1 * 30.0f);
    q = D_8021DBA0 / d1;
    t = (f64) D_8021B098;
    if (*(volatile s32 *) &D_8021B098 < 0) {
        t += D_8021DBA8;
    }
    r = -__cosf((f32) (q * t)) * half + half;
    D_8021B098 += 1;
    return (s32) r;
}
