extern u16 atanTable[];

s32 func_801FA028(f32 arg0, f32 arg1) {
    f32 ft0;
    f32 fv1;
    s32 v1;
    s32 d;

    if (arg0 > 0.0f) {
        ft0 = arg0;
    } else {
        ft0 = -arg0;
    }
    if (arg1 > 0.0f) {
        fv1 = arg1;
    } else {
        fv1 = -arg1;
    }
    if (ft0 == 0.0f) {
        if (arg1 > 0.0f) {
            return 0x5A;
        }
        return 0x10E;
    }
    if (fv1 == 0.0f) {
        if (arg0 > 0.0f) {
            return 0;
        }
        return 0xB4;
    }
    if (ft0 == fv1) {
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
    if (fv1 < ft0) {
        v1 = atanTable[(s32)((fv1 * 64.0f) / ft0)];
    } else {
        v1 = 0x5A - atanTable[(s32)((ft0 * 64.0f) / fv1)];
    }
    if (arg1 < 0.0f) {
        if (arg0 < 0.0f) {
            return (v1 + 0xB4) & 0xFFFF;
        }
        d = 0x168 - (v1 & 0xFFFF);
        return (d - (d / 360) * 360) & 0xFFFF;
    }
    if (arg0 < 0.0f) {
        return (0xB4 - v1) & 0xFFFF;
    }
    return v1 & 0xFFFF;
}
