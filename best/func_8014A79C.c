typedef struct {
    u32 v[8];
} Tbl;

extern Tbl D_80183718;

s32 func_8014A79C(u32 arg0) {
    Tbl buf;
    s32 i;
    u32 shift;
    u32 out;
    u32 q;

    buf = D_80183718;
    out = 0;
    if (arg0 <= 0x05F5E0FFU) {
        shift = 0x10000000;
        i = 0;
        do {
            q = arg0 / buf.v[i];
            out |= q * shift;
            arg0 = arg0 % buf.v[i];
            i += 1;
            shift = shift >> 4;
        } while (i < 8);
        return out;
    }
    return 0x01234567;
}
