extern u8 D_8011F2FC[];
extern u8 D_8011F340[];
extern u8 D_8011F350[];

void func_801610E0(s32 **arg0, u16 arg1) {
    s32 *temp_a1;
    u8 *temp_a0;
    s32 off = arg1 * 0x64;

    if (*(u8 *)(D_8011F2FC + off) != 0 && **(u8 **)(D_8011F340 + off) != 0) {
        temp_a0 = *(u8 **)(D_8011F350 + off);
        temp_a1 = *arg0;
        *arg0 = temp_a1 + 2;
        temp_a1[0] = 0xFA000000;
        temp_a1[1] = (temp_a0[0x17] << 24) | (temp_a0[0x18] << 16) | (temp_a0[0x19] << 8) | *(u8 *)(D_8011F2FC + off);
    }
}
