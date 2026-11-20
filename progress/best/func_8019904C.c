extern u8 *D_801C7AB0;
extern u8 D_801CA130;
extern s8 D_801C7068;
extern u8 D_801C7084[];
extern u8 D_801C7081[];
extern u8 D_8011F30C[];

s32 func_8019904C(s32 arg0) {
    s32 var_a1;
    s32 var_v1;
    s32 temp_v0;
    s32 off;

    var_a1 = 0;
    if (D_801C7AB0[0] == 3) {
        var_v1 = D_801C7084[D_801CA130 * 5];
    } else {
        var_v1 = D_801C7084[D_801CA130 * 5] - 0x2E;
    }
    if (D_801C7068 < 0x17) {
        if (D_801CA130 != D_801C7AB0[2]) {
            temp_v0 = arg0 & 0xFFFF;
            if ((u8)(var_v1 - 0x16) < 0x14) {
                off = temp_v0 * 100;
                var_v1 = (0x3C); var_v1 += (D_801C7081[D_801CA130 * 5]);
            } else {
                off = temp_v0 * 100;
                var_v1 = D_801C7081[D_801CA130 * 5];
            }
            *(f32 *)(D_8011F30C + off) = (f32)var_v1 * 0.5f;
        }
        var_a1 = 1;
    }
    return var_a1 & 0xFF;
}
