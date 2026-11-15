extern u8 D_8011F32E[];

void func_8014D11C(u32 arg0) {
    s32 i = (arg0 & 0xFFFF) * 100;
    *(u16 *)(D_8011F32E + i) = *(u16 *)(D_8011F32E + i) + 1;
    if (*(u16 *)(D_8011F32E + i) >= 0x80U) {
        *(u16 *)(D_8011F32E + i) = *(u16 *)(D_8011F32E + i) - 0x7F;
    }
}
