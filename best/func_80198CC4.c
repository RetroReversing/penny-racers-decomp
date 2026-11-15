extern u8 D_8011F30C[];
extern s8 D_801C6BB9;
extern u8 D_801C7081[];
extern u8 D_801C7084[];
extern void *D_801C7AB0;
extern u8 D_801CA130;

s32 func_80198CC4(s32 arg0) {
    s32 var_a1;
s32 __repair_phase_var_a1;
    
    s32 var_v0;

    var_a1 = 0;
    if (*(u8 *)D_801C7AB0 == 3) {
        var_v0 = D_801C7084[D_801CA130 * 5];
    } else {
        var_v0 = D_801C7084[D_801CA130 * 5] - 0x2E;
    }
    if (D_801C6BB9 != 0) {
        if (D_801CA130 != *((u8 *)D_801C7AB0 + 2)) {
            __repair_phase_var_a1 = arg0 & 0xFFFF;
            if ((u32)(u8)(var_v0 - 0x16) < 0x14U) {
                var_a1 = __repair_phase_var_a1 * 0x64;
                var_v0 = D_801C7081[D_801CA130 * 5] + 0x3C;
            } else {
                var_a1 = __repair_phase_var_a1 * 0x64;
                var_v0 = D_801C7081[D_801CA130 * 5];
            }
            *(f32 *)(D_8011F30C + var_a1) = (f32)var_v0 * 0.5f;
        }
        var_a1 = 1;
    }
    return var_a1 & 0xFF;
}
