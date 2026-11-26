f32 func_80221230(void *arg0, s32 arg1, f32 arg2) {
    f32 *p;
    s32 base;
    s32 off;
    s32 i;
    f32 x0;
    f32 y0;
    f32 x1;
    f32 y1;
    f32 x2;
    f32 y2;
    f32 r;

    if ((u16) arg1 >= 5) {
        arg1 = 4;
    }
    if (arg2 < 10.0f) {
        arg2 = 10.0f;
    }
    i = (u16) arg1;
    arg1 = i * 6;
    off = (u16) arg1;
    base = *(s32 *) ((char *) arg0 + 0x23C);
    p = (f32 *) (off * 4 + base);
    y0 = p[1];
    y1 = p[3];
    y2 = p[5];
    x0 = p[0];
    x1 = p[2];
    x2 = p[4];
    if (arg2 < x0) {
        r = y0 / (x0 - arg2);
        if (y0 < r) {
            r = y0;
        }
    } else if (arg2 < x1) {
        r = (((y1 - y0) / (x1 - x0)) * (arg2 - x0)) + y0;
    } else if (arg2 < x2) {
        r = (((y2 - y1) / (x2 - x1)) * (arg2 - x1)) + y1;
    } else {
        r = y2;
    }
    return r;
}
