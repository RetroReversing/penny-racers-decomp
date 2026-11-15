extern u32 D_80183718[];

typedef struct { u32 v[8]; } Divs;

u32 func_8014A79C(u32 arg0) {
    Divs d;
    u32 var_a3;
    s32 i;
    u32 weight;

    d = *(Divs *)D_80183718;
    if (arg0 > 0x05F5E0FFU) {
        return 0x01234567;
    }
    var_a3 = 0;
    weight = 0x10000000;
    for (i = 0; i < 8; i++) {
        var_a3 |= (arg0 / d.v[i]) * weight;
        arg0 = arg0 % d.v[i];
        weight = weight >> 4;
    }
    return var_a3;
}
