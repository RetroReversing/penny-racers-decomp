f64 func_800427B0(u32 hi, u32 lo, s32 arg2) {
    u32 buf[2];
    u32 sign;
    s32 exp;
    u32 vh;
    u32 vl;

    vh = hi;
    vl = lo;
    if ((vh | vl) == 0) {
        buf[0] = vh;
        buf[1] = vl;
        return *(f64 *)buf;
    }
    sign = 0;
    if (vh & 0x80000000) {
        vl = (vl ^ 0xFFFFFFFF) + 1;
        vh = (vh ^ 0xFFFFFFFF) + (vl == 0);
        sign = 0x80000000;
    }
    exp = 0;
    if (vh & 0xFFE00000) {
        do {
            vl = (vl >> 1) | (vh << 31);
            vh = vh >> 1;
            exp += 1;
        } while (vh & 0xFFE00000);
    } else {
        while (!(vh & 0x100000)) {
            vh = (vh << 1) | (vl >> 31);
            vl = vl << 1;
            exp -= 1;
        }
    }
    buf[0] = (vh & 0xFFFFF) | sign | ((exp + 0x433) << 20);
    buf[1] = vl;
    return *(f64 *)buf;
}
