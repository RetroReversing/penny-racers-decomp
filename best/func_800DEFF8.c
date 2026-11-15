extern u16 func_800E1850;
extern u8 D_8011F2F0[];
extern u8 D_8011F2F2[];
extern u8 D_8011F300[];

void func_800DEFF8(void) {
    u16 var_a0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v0_2;
    s32 temp_v1;

    var_a0 = func_800E1850;
    var_v0 = var_a0 & 0xFFFF;
    if (var_v0 != 0xFFFF) {
        var_v1 = var_v0 * 2;
        do {
            temp_v1 = (((var_v1 + var_v0) * 8) + var_v0) * 4;
            var_v0_2 = var_a0 & 0xFFFF;
            if (*(u8 *)(D_8011F2F0 + temp_v1) != 0xFF) {
                *(u16 *)(D_8011F2F2 + temp_v1) = *(u16 *)(D_8011F2F2 + temp_v1) | 0x10;
                var_v0_2 = var_a0 & 0xFFFF;
            }
            var_a0 = *(u16 *)(D_8011F300 + var_v0_2 * 0x64);
            var_v0 = var_a0 & 0xFFFF;
            var_v1 = var_v0 * 2;
        } while (var_v0 != 0xFFFF);
    }
}
