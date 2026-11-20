/* adapted from similar verified C in func_80150ED4 in PENNY RACERS (matched), with its names changed by decompdecomp */
extern u8 D_8011F32E[];
extern u8 D_802E3B10[];

void func_80153F74(s32 **arg0, u16 arg1) {
    s32 *a, *b, *c, *d, *e, *f, *g, *h;
    a = *arg0; *arg0 = a + 2; a[0] = 0xFD48000F; a[1] = (s32)D_802E3B10;
    b = *arg0; *arg0 = b + 2; b[0] = 0xF5480400; b[1] = 0x07014050;
    c = *arg0; *arg0 = c + 2; c[0] = 0xE6000000; c[1] = 0;
    d = *arg0; *arg0 = d + 2; d[0] = 0xF4000000; d[1] = 0x0703E07C;
    e = *arg0; *arg0 = e + 2; e[0] = 0xE7000000; e[1] = 0;
    f = *arg0; *arg0 = f + 2; f[0] = 0xF5400400; f[1] = 0x14050;
    g = *arg0; *arg0 = g + 2; g[0] = 0xF2000000; g[1] = 0x7C07C;
    h = *arg0; *arg0 = h + 2;
    h[0] = ((*(u16 *)(D_8011F32E + arg1 * 0x64) & 0xFFF) << 0xC) | 0xF2000000;
    h[1] = 0x7C07C;
}
