extern u8 D_8011F2F0[];
extern u8 D_8011F2F2[];
extern u16 D_80233EC0;

void func_8013AE60(u16 arg0) {
    s32 i;
    s32 off = arg0 * 100;
    u8 *base = D_8011F2F2;
    u16 k = D_80233EC0;
    u8 *dst = base + off;
    for (i = 0; i < 4; i++) {
        u16 *src = (u16 *)(base + (k + D_8011F2F0[off]) * 100);
        if (src[i] & 8) {
            ((u16 *)dst)[i] |= 8;
        } else {
            ((u16 *)dst)[i] &= 0xFFF7;
        }
    }
}
