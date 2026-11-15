extern f64 D_8004A438;
extern f64 D_8004A440;
extern f64 D_8004A448;
extern f64 D_8004A450;

s16 func_8002E9A4(f64 arg0, f64 arg1, s32 arg4, u16 *arg5)
{
    f64 scale;
    f64 d;
    f64 e;
    f64 f;
    s32 i0;
    s32 i1;
    s32 t;
    s16 ret;

    if (arg4 == 0) {
        if (arg0 <= arg1) {
            *arg5 = 0xFFFF;
            return 0x7FFF;
        }
        *arg5 = 0;
        return 0;
    }
    scale = D_8004A438 / (f64) arg4;
    if (arg1 < D_8004A438) {
        arg1 = D_8004A438;
    }
    if (arg0 <= 0.0) {
        arg0 = D_8004A438;
    }
    d = ((arg1 - arg0) * scale) * D_8004A440;
    i0 = (s32) d;
    e = (d - (f64) (s16) i0) + D_8004A438;
    i1 = (s32) e;
    f = (e - (f64) (s16) i1) * D_8004A448;
    ret = (s16) ((i0 - 1) + i1);
    if (!(D_8004A450 <= f)) {
        *arg5 = (s16) ((s32) f);
    } else {
        t = (s32) (f - D_8004A450);
        *(u32 *) arg5 = t | 0x80000000;
        *arg5 = (u16) t;
    }
    return ret;
}
