f64 func_800427B0(u32 arg0, u32 arg1) {
    u32 hi;
    u32 lo;
    u32 sign;
    s32 exp;
    u32 w[2];

    hi = arg0;
    lo = arg1;
    if ((hi | lo) == 0) {
        w[0] = hi;
        w[1] = lo;
        return *(f64 *)w;
    }
    sign = 0;
    if (hi & 0x80000000u) {
        lo = -lo;
        hi = -hi - (lo != 0);
        sign = 0x80000000u;
    }
    exp = 0;
    if (hi & 0xFFE00000) {
        do {
            lo = (lo >> 1) | (hi << 31);
            hi = hi >> 1;
            exp++;
        } while (hi & 0xFFE00000);
    } else {
        while (!(hi & 0x100000)) {
            hi = (hi << 1) | (lo >> 31);
            lo = lo << 1;
            exp--;
        }
    }
    w[0] = (hi & 0xFFFFF) | sign | ((exp + 0x433) << 20);
    w[1] = lo;
    return *(f64 *)w;
}
