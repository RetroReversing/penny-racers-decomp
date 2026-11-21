f64 fixed60ToF64(u32 arg0, u32 arg1) {
    register u32 hi;
    u32 lo;
    unsigned sign;
    register s32 exp;
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
        __repair_rows: {
            lo = (lo >> 1) | (hi << 31);
            hi = hi >> 1;
            exp += 1;
        }
if (hi & 0xFFE00000) goto __repair_rows;
    } else {
        while (!(hi & 0x100000)) {
            hi = (hi << 1) | (lo >> 31);
            exp--;
            lo = lo << 1;
        }
    }
    w[0] = (hi & 0xFFFFF) | sign | ((exp + 0x433) << 20);
    w[1] = lo;
    return *(f64 *)w;
}
