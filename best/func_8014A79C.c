extern u32 D_80183718[8];

typedef struct { u32 v[8]; } Tbl8;

s32 func_8014A79C(u32 arg0) {
    Tbl8 t;
    u32 ret;
    u32 scale;
    u32 i;
    u32 x;

    x = arg0;
    t = *(Tbl8 *)D_80183718;
    ret = 0;
    if (x <= 0x05F5E0FF) {
        scale = 0x10000000;
        i = 0;
        do {
            ret |= (x / t.v[i]) * scale;
            x = x % t.v[i];
            i++;
            scale = scale >> 4;
        } while (i < 8);
        return ret;
    }
    return 0x01234567;
}
