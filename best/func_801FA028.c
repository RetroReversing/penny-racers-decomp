extern u16 D_801FB230[];

s32 func_801FA028(f32 arg0, f32 arg1) {
    f32 ax;
    f32 ay;
    s32 idx;
    s32 r;

    ax = arg0;
    if (!(arg0 > 0.0f)) ax = -arg0;
    ay = arg1;
    if (!(arg1 > 0.0f)) ay = -arg1;
    if (ax == 0.0f) {
        if (arg1 > 0.0f) return 0x5A;
        return 0x10E;
    }
    if (ay == 0.0f) {
        if (arg0 > 0.0f) return 0;
        return 0xB4;
    }
    if (ax == ay) {
        if (arg0 > 0.0f) {
            if (arg1 > 0.0f) return 0x2D;
            return 0x13B;
        }
        if (arg1 > 0.0f) return 0x87;
        return 0xE1;
    }
    if (ay < ax) {
        idx = (s32)((ay * 64.0f) / ax);
        r = D_801FB230[idx];
    } else {
        idx = (s32)((ax * 64.0f) / ay);
        r = 0x5A - D_801FB230[idx];
    }
    if (arg1 < 0.0f) {
        r = r + 0xB4;
        if (!(arg0 < 0.0f)) {
            r = 0x168 - (r & 0xFFFF);
        }
    } else {
        if (arg0 < 0.0f) {
            r = 0xB4 - r;
        }
    }
    return r & 0xFFFF;
}
