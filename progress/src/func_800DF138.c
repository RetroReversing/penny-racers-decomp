extern u8 D_8011F2F2[];

void func_800DF138(s32 arg0) {
    s32 off;

    off = (arg0 & 0xFFFF) * 100;
    *(u16 *)(D_8011F2F2 + off) = *(u16 *)(D_8011F2F2 + off) & 0xFFEF;
}
