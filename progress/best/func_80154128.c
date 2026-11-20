extern u8 D_8011F2FC[];
extern u8 D_8011F32E[];
extern u8 D_802D9CD8[];

void func_80154128(u32 **arg0, u32 arg1) {
    u32 *p;
    u32 *q;
    register int off;

    p = *arg0; *arg0 = p + 2;
    p[0] = 0xFA000000;
    off = (arg1 & 0xFFFF) * 0x64;
    (*arg0)[1] = D_8011F2FC[off] | 0xFFFFFF00;
    q = *arg0; *arg0 = q + 2;
    q[0] = 0xFD88003F; q[1] = (u32)D_802D9CD8;
    q[0] = 0xF5881000; q[1] = 0x07014060;
    q = *arg0; *arg0 = q + 2;
    q = *arg0; *arg0 = q + 2;
    q[0] = 0xE6000000; q[1] = 0;
    q = *arg0; *arg0 = q + 2;
    q[0] = 0xF4000000; q[1] = 0x070FC07C;
    q = *arg0; *arg0 = q + 2;
    q[0] = 0xE7000000; q[1] = 0;
    q = *arg0; *arg0 = q + 2;
    q[0] = 0xF5881000; q[1] = 0x14060;
    q[0] = 0xF2000000; q[1] = 0xFC07C;
    q = *arg0; *arg0 = q + 2;
    q = *arg0; *arg0 = q + 2;
    q[0] = (*(u16 *)(D_8011F32E + (s32)off) & 0xFFF) | 0xF2000000; q[1] = 0xFC07C;
}
