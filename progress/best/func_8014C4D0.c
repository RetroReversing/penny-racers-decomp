extern u8 D_8011F338[];
extern u32 D_8016B760[];
extern u32 D_8016B774[];
extern u8 D_8016B788[];

void func_8014C4D0(u32 **arg0, u32 arg1) {
    u32 *p;
    u32 i;

    p = *arg0; *arg0 = p + 2; p[0] = 0xB6000000; p[1] = 0x2000;
    p = *arg0; *arg0 = p + 2; p[0] = 0xFD100000;
    i = (u32)*(f32 *)(D_8011F338 + (arg1 & 0xFFFF) * 0x64) & 0xFFFF;
    p[1] = D_8016B774[D_8016B788[i]];
    p = *arg0; *arg0 = p + 2; p[0] = 0xE8000000; p[1] = 0;
    p = *arg0; *arg0 = p + 2; p[0] = 0xF5000100; p[1] = 0x07000000;
    p = *arg0; *arg0 = p + 2; p[0] = 0xE6000000; p[1] = 0;
    p = *arg0; *arg0 = p + 2; p[0] = 0xF0000000; p[1] = 0x073FC000;
    p = *arg0; *arg0 = p + 2; p[0] = 0xE7000000; p[1] = 0;
    p = *arg0; *arg0 = p + 2; p[0] = 0xFD500000;
    i = (u32)*(f32 *)(D_8011F338 + (arg1 & 0xFFFF) * 0x64) & 0xFFFF;
    p[1] = D_8016B760[D_8016B788[i]];
    p = *arg0; *arg0 = p + 2; p[0] = 0xF5500000; p[1] = 0x07098260;
    p = *arg0; *arg0 = p + 2; p[0] = 0xF3000000; p[1] = 0x073FF200;
    p = *arg0; *arg0 = p + 2; p[0] = 0xE6000000; p[1] = 0;
    p = *arg0; *arg0 = p + 2; p[0] = 0xE7000000; p[1] = 0;
    p = *arg0; *arg0 = p + 2; p[0] = 0xF5400800; p[1] = 0x98260;
    p = *arg0; *arg0 = p + 2; p[0] = 0xF2000000; p[1] = 0xFC0FC;
}
