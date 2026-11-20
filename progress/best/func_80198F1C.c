extern f32 D_8011F30C[];
extern s8 D_801C6BB9;
extern u8 D_801C7081[];
extern u8 D_801C7084[];
extern u8 *D_801C7AB0;
extern u8 D_801CA130;

s32 func_80198F1C(s32 arg0) {
    s32 a1 = 0;
    s32 v1;
    s32 v0;
    u32 off;

    if (D_801C7AB0[0] == 3) {
        v1 = D_801C7084[D_801CA130 * 5];
    } else {
        v1 = D_801C7084[D_801CA130 * 5] - 0x2E;
    }
    if (D_801C6BB9 != 0) {
        if (D_801CA130 != D_801C7AB0[2]) {
            off = (arg0 & 0xFFFF) * 0x64;
            if (((u8)(v1 - 0x16)) < 0x14) {
                v0 = D_801C7081[D_801CA130 * 5] + 0x3C;
            } else {
                v0 = D_801C7081[D_801CA130 * 5];
            }
            *(f32 *)((u8 *)D_8011F30C + off) = (f32) v0 * 0.5f;
        }
        a1 = 1;
    }
    return a1 & 0xFF;
}
