extern u8 D_8011F2F0[];
extern u8 D_8011F330[];
extern u8 D_801FFD6C[];

void func_801FC9D0(u32 **arg0, s32 arg1) {
    u8 *p;
    u32 *g;
    u32 a, b, c, d, e, f, h;
    u32 idx = arg1 & 0xFFFF;
    u16 st = *(u16 *)(D_8011F330 + idx * 0x64);

    if (st == 0) {
        *(u16 *)(D_8011F330 + idx * 0x64) = 1;
        return;
    }
    if (st == 1) {
        u32 v = *(D_8011F2F0 + idx * 0x64);
        u32 q = (v / 7) & 0xFF;
        u32 r = (v - q * 7) & 0xFF;
        u32 x0 = r << 5;
        u32 x1 = x0 + 0x20;
        u32 w;
        u32 t0, t1, t2, t3;
        g = *arg0; *arg0 = g + 2; g[0] = 0xFD4800EF; g[1] = (u32)D_801FFD6C;
        g = *arg0; *arg0 = g + 2;
        w = ((((x1 - (x0 + 1) + 8) >> 3) & 0x1FF) << 9) | 0xF5480000;
        g[0] = w; g[1] = 0x07080200;
        g = *arg0; *arg0 = g + 2; g[0] = 0xE6000000; g[1] = 0;
        t0 = ((x0 * 4) & 0xFFF) << 12;
        t1 = (q << 7) & 0xFFF;
        g = *arg0; *arg0 = g + 2; g[0] = t0 | t1 | 0xF4000000;
        t2 = (((x1 - 1) * 4) & 0xFFF) << 12;
        t3 = ((q << 7) | 0x7C) & 0xFFF;
        g[1] = t2 | t3 | 0x07000000;
        g = *arg0; *arg0 = g + 2; g[0] = 0xE7000000; g[1] = 0;
        g = *arg0; *arg0 = g + 2; g[0] = w; g[1] = 0x80200;
        g = *arg0; *arg0 = g + 2; g[0] = t0 | t1 | 0xF2000000; g[1] = t2 | t3;
        g = *arg0; *arg0 = g + 2; g[0] = 0xF2000000; g[1] = 0x7C07C;
    }
}
