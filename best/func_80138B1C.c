extern u8 D_8006FAF0[];

void func_80138B1C(u32 **arg0) {
    u32 *g;
    u32 r, gr, b, t1, t2, t3;
    u32 w;

    switch (*(u16 *)(D_8006FAF0 + 0x20)) {
    case 0:
    case 1:
        r = 0xA; gr = 0xA; b = 0x32; t1 = t2 = t3 = 0xFF;
        break;
    case 2:
    case 3:
    case 4:
        r = 0x96; gr = 0x96; b = 0x96; t1 = 0x8C; t2 = 0x8C; t3 = 0x8C;
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        r = 0xAA; gr = 0xAA; b = 0xAA; t1 = 0xBE; t2 = 0xBE; t3 = 0xBE;
        break;
    default:
        r = 0; gr = 0; b = 0xFA; t1 = t2 = t3 = 0xFF;
        break;
    }

    g = *arg0;
    *arg0 = g + 2;
    g[0] = 0xE7000000;
    g[1] = 0;

    g = *arg0;
    *arg0 = g + 2;
    g[0] = 0xBA001402;
    g[1] = 0x00300000;

    w = ((r << 8) & 0xF800) | ((gr << 3) & 0x7C0) | ((b >> 2) & 0x3E);
    g = *arg0;
    *arg0 = g + 2;
    g[0] = 0xF7000000;
    g[1] = (((w | 1) << 16) | 1) | w;

    g = *arg0;
    *arg0 = g + 2;
    g[0] = 0xF64FC3BC;
    g[1] = 0;

    if (*(u16 *)(D_8006FAF0 + 0x20) == 2 || *(u16 *)(D_8006FAF0 + 0x20) == 7) {
        g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xF8000000;
        g[1] = (t3 << 24) | (t2 << 16) | (t1 << 8) | 0xFF;

        g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xBC000008;
        g[1] = 0x0500FC00;
    }
}
