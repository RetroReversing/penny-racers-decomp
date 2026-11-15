extern u8 D_80168CE4[];

u16 func_80146E4C(u16 arg0) {
    u8 r = 0;
    if ((arg0 & 0xF00) < 0x800) {
        r = D_80168CE4[(arg0 >> 8) & 7];
        r += arg0 & 0x1F;
    } else {
        switch (arg0) {
            case 0x2FFF:
            case 0x4FFF:
                r = 0xA;
                break;
            case 0x3FFF:
                r = 0x12;
                break;
        }
    }
    return r;
}
