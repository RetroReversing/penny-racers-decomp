void func_8013EA90(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s16 r;
    s16 g;
    s16 b;

    r = arg0[23] + arg1;
    g = arg0[24] + arg2;
    b = arg0[25] + arg3;
    if (r < 0) {
        r = 0;
    } else if (r >= 256) {
        r = 255;
    }
    if (g < 0) {
        g = 0;
    } else if (g >= 256) {
        g = 255;
    }
    if (b < 0) {
        b = 0;
    } else if (b >= 256) {
        b = 255;
    }
    arg0[23] = r;
    arg0[24] = g;
    arg0[25] = b;
}
