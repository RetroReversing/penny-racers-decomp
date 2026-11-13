s32 func_8014A030(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = 1;
    var_a0 = arg0;
    temp_v1 = temp_v1 << arg1;
    switch (arg2) {
    case 0:
        var_a0 &= ~temp_v1;
        break;
    case 2:
        var_a0 ^= temp_v1;
        break;
    case 1:
        var_a0 |= temp_v1;
        break;
    }
    return var_a0;
}
