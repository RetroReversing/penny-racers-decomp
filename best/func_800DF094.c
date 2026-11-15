extern u8 D_8011F2F2[];
extern s16 D_8011F300[];
extern s16 func_800E1850;

void func_800DF094(void) {
    s32 var_v1;
    u32 off;
    u16 temp_a0;

    var_v1 = func_800E1850 & 0xFFFF;
    if (var_v1 != 0xFFFF) {
        do {
            off = var_v1 * 0x64;
            *(u16 *)(D_8011F2F2 + off) &= 0xFFEF;
            temp_a0 = *(u16 *)((u8 *)D_8011F300 + off);
            var_v1 = temp_a0 & 0xFFFF;
        } while ((temp_a0 & 0xFFFF) != 0xFFFF);
    }
}
