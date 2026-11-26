extern f64 D_801FB2C0;
extern f64 D_801FB2C8;
extern f64 D_801FB2D0;
extern f64 D_801FB2D8;
extern f64 D_801FB2E0;

f32 func_801F9AC0(f32 arg0)
{
    f32 x;
    s32 sign;
    f64 r;
    s32 v;

    x = arg0;
    if (x > 1.0f) {
        sign = 1;
        x = 1.0f / x;
    } else if (x < -1.0f) {
        sign = -1;
        x = 1.0f / x;
    } else {
        sign = 0;
    }
    r = 0.0;
    for (v = 24; v > 0; v--) {
        f32 t;
        t = (f32) (v * v) * x * x;
        r = (f64) t / ((f64) (2 * v + 1) + r);
    }
    if (sign > 0) {
        return (f32) (D_801FB2C8 - ((f64) x / (r + D_801FB2C0)));
    }
    else if (sign < 0) {
        return (f32) (D_801FB2E0 - ((f64) x / (r + D_801FB2D8)));
    }
    else {
        return (f32) ((f64) x / (r + D_801FB2D0));
    }
}
