f32 func_801FA3B4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    f32 den;

    arg6 = arg6 - arg4;
    arg7 = arg7 - arg5;
    if (arg6 == 0.0f) {
        if (arg0 == arg2) {
        half:
            return 0.5f;
        }
        arg3 = arg4 - arg0;
        if (arg3 == 0.0f) {
            goto half;
        }
        return arg3 / (arg2 - arg0);
    }
    if (arg7 == 0.0f) {
        if (arg0 != arg2) {
            goto half;
        }
        do { arg5 = arg5 - arg1; } while (0);
        if (arg5 == 0.0f) {
            goto half;
        }
        den = arg3 - arg1;
        goto divide;
    }
    arg6 = 1.0f / arg6;
    arg7 = 1.0f / arg7;
    arg5 = (arg1 - arg5) * arg7;
    arg5 = arg5 - ((arg0 - arg4) * arg6);
    den = (arg2 - arg0) * arg6;
    do { do { do { arg3 = arg3 - arg1; } while (0); } while (0); } while (0);
    arg3 = arg3 * arg7;
    den = den - arg3;
divide:
    return arg5 / den;
}
