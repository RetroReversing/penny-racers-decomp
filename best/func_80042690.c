s64 func_80042690(f64 arg0) {
    f64 d;
    u32 hi;
    u32 lo;
    u32 mh;
    u32 e;
    u32 s;
    u32 r;

    d = arg0;
    hi = ((u32 *)&d)[0];
    lo = ((u32 *)&d)[1];
    e = (hi >> 20) & 0x7FF;
    if (e >= 0x3FF) {
        e = e - 0x3FF;
        if (e < 0x40) {
            mh = (hi & 0xFFFFF) | 0x100000;
            if (e < 0x34) {
                r = 0x34 - e;
                if (r < 0x20) {
                    lo = (lo >> r) | (mh << (0x20 - r));
                    mh = mh >> r;
                } else {
                    lo = mh >> (r - 0x20);
                    mh = 0;
                }
            } else {
                s = e - 0x34;
                if (s != 0) {
                    mh = (mh << s) | (lo >> (0x20 - s));
                    lo = lo << s;
                }
            }
            if (hi & 0x80000000) {
                lo = -lo;
                mh = ~mh + (lo == 0);
            }
            return ((u64)mh << 32) | lo;
        }
        return 0x8000000000000000ULL;
    }
    return 0;
}
