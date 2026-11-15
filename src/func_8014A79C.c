typedef struct {
    u32 v[8];
} Tbl;

extern Tbl D_80183718;

u32 func_8014A79C(u32 arg0) {
    Tbl buf;
    s32 i;
    u32 shift;
    u32 out;

    buf = D_80183718;
    out = 0;
    if (arg0 < 100000000) {
        shift = 0x10000000;
        for (i = 0; i < 8; i++) {
            out |= (arg0 / buf.v[i]) * shift;
            arg0 %= buf.v[i];
            shift >>= 4;
        }
    } else {
        out = 0x01234567;
    }
    return out;
}
