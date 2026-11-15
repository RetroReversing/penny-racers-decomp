extern u16 func_800E1850;
extern u8 D_8011F2F0[];
void func_800DECCC(s32);

void func_800E1510(void) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v0;
    u8 var_v1;
    vu8 *temp_s0;

    var_v1 = 0;
    var_a0 = func_800E1850 & 0xFFFF;
    do {
        temp_s0 = (vu8 *)((var_a0 * 0x64) + D_8011F2F0);
        if (temp_s0[0xD] != 0) {
            temp_s0[0xD] = temp_s0[0xD] - 1;
            if (temp_s0[0xD] == 0) {
                func_800DECCC(var_a0);
                var_v1 = 1;
            }
        }
        if (var_v1 == 0) {
            var_a0_2 = *(u16 *)(temp_s0 + 0x10);
            var_v0 = var_a0_2 & 0xFFFF;
        } else {
            var_v1 = 0;
            var_a0_2 = func_800E1850;
            var_v0 = var_a0_2 & 0xFFFF;
        }
        var_a0 = var_a0_2 & 0xFFFF;
    } while (var_v0 != 0xFFFF);
}
