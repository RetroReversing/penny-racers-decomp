extern u32 D_80183718[];

u32 func_8014A79C(u32 arg0) {
    u32 var_a3;
    s32 i;
    u32 divisor;
    u32 weight;

    if (arg0 > 0x05F5E0FFU) {
        return 0x01234567;
    }
    var_a3 = 0;
    weight = 0x10000000;
    for (i = 0; i < 8; i++) {
        divisor = D_80183718[i];
        var_a3 |= (arg0 / divisor) * weight;
        arg0 = arg0 % divisor;
        weight = weight >> 4;
    }
    return var_a3;
}
