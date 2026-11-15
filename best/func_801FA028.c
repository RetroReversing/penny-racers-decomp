extern u16 D_801FB230;

s32 func_801FA028(f32 arg0, f32 arg1) {
    f32 a;
    f32 b;
    s32 t;
    a = arg0;
    if (!(arg0 > 0.0f)) {
        a = -arg0;
    }
    b = arg1;
    if (!(arg1 > 0.0f)) {
        b = -arg1;
    }
    if (a == 0.0f) {
        if (arg1 > 0.0f) {
            return 0x5A;
        }
        return 0x10E;
    }
    if (b == 0.0f) {
        if (arg0 > 0.0f) {
            return 0;
        }
        return 0xB4;
    }
    if (a == b) {
        if (arg0 > 0.0f) {
            if (arg1 > 0.0f) {
                return 0x2D;
            }
            return 0x13B;
        }
        if (arg1 > 0.0f) {
            return 0x87;
        }
        return 0xE1;
    }
    if (b < a) {
        t = (s32)((b * 64.0f) / a);
        t = ((u16 *)&D_801FB230)[t];
    } else {
        t = 0x5A - ((u16 *)&D_801FB230)[(s32)((a * 64.0f) / b)];
    }
    if (arg1 < 0.0f) {
        if (arg0 < 0.0f) {
            return (t + 0xB4) & 0xFFFF;
        }
        return ((0x168 - t) % 360) & 0xFFFF;
    }
    if (arg0 < 0.0f) {
        return (0xB4 - t) & 0xFFFF;
    }
    return t & 0xFFFF;
}
