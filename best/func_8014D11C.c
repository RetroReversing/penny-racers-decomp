extern u8 D_8011F32E[];

void func_8014D11C(s32 arg0) {
    s32 off = (arg0 & 0xFFFF) * 100;

    *(u16 *)(D_8011F32E + off) = *(u16 *)(D_8011F32E + off) + 1;
    if (*(u16 *)(D_8011F32E + off) >= 0x80) {
        *(u16 *)(D_8011F32E + off) = *(u16 *)(D_8011F32E + off) - 0x7F;
    }
}
