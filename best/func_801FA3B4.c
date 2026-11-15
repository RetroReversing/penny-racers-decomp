f32 func_801FA3B4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    f32 dy1;
    f32 dy2;
    f32 t;
    f32 inv1;
    f32 inv2;

    dy1 = arg6 - arg4;
    dy2 = arg7 - arg5;
    if (dy1 == 0.0f) {
        if (arg0 != arg2) {
            t = arg4 - arg0;
            if (t != 0.0f) {
                return t / (arg2 - arg0);
            }
        }
        return 0.5f;
    }
    if (dy2 == 0.0f) {
        if (arg0 != arg2) {
            t = arg5 - arg1;
            if (t != 0.0f) {
                return t / (arg3 - arg1);
            }
        }
        return 0.5f;
    }
    inv1 = 1.0f / dy1;
    inv2 = 1.0f / dy2;
    return (((arg1 - arg5) * inv2) - ((arg0 - arg4) * inv1)) / (((arg2 - arg0) * inv1) - ((arg3 - arg1) * inv2));
}
