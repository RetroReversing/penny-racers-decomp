extern s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
extern void func_80129918(void *, f32, f32, f32, f32, f32, f32);
extern void func_8013E49C(u16);
extern void func_8015D410(s32, s32, void *, s32);
extern void func_801D7028(s32, s32);
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_8011F350[];
extern u8 D_8022A770[];
extern u8 D_80239818[];
extern u8 func_80141AD8[];
extern u8 func_80141BC4[];

void func_80141818(s32 arg0) {
    f32 temp_fv1;
    s32 temp_s0_2;
    s32 temp_v0_2;
    u16 temp_v0_4;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v0_3;

    temp_s0 = *(u8 **)(D_8011F350 + (arg0 & 0xFFFF) * 0x64);
    temp_s1 = D_8011F2F0 + (arg0 & 0xFFFF) * 0x64;
    temp_fv1 = *(f32 *)(temp_s0 + 0xC) + *(f32 *)(temp_s1 + 0x48);
    *(f32 *)(temp_s0 + 0xC) = temp_fv1;
    if ((temp_fv1 < 0.0f) && ((*(f32 *)(temp_s1 + 0x1C) + temp_fv1) < 0.0f)) {
        func_80129918(temp_s0 + 0x1C, *(f32 *)(temp_s1 + 0x18), *(f32 *)(temp_s1 + 0x1C), *(f32 *)(temp_s1 + 0x20), *(f32 *)(temp_s0 + 8), *(f32 *)(temp_s0 + 0xC), *(f32 *)(temp_s0 + 0x10));
        *(f32 *)(temp_s1 + 0x18) = *(f32 *)(temp_s0 + 0x24);
        *(f32 *)(temp_s1 + 0x1C) = *(f32 *)(temp_s0 + 0x28);
        *(f32 *)(temp_s1 + 0x20) = *(f32 *)(temp_s0 + 0x2C);
    } else {
        *(f32 *)(temp_s1 + 0x18) = *(f32 *)(temp_s1 + 0x18) + *(f32 *)(temp_s0 + 8);
        *(f32 *)(temp_s1 + 0x1C) = *(f32 *)(temp_s1 + 0x1C) + *(f32 *)(temp_s0 + 0xC);
        *(f32 *)(temp_s1 + 0x20) = *(f32 *)(temp_s1 + 0x20) + *(f32 *)(temp_s0 + 0x10);
    }
    if (!(*(u16 *)(temp_s0 + 0x14) & 3)) {
        temp_v0_2 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xC8, D_80239818, func_80141AD8, func_80141BC4, *(f32 *)(temp_s1 + 0x18), *(f32 *)(temp_s1 + 0x1C), *(f32 *)(temp_s1 + 0x20), 0, 0, 0, 5.0f, 5.0f, 5.0f);
        if ((u32) ((temp_v0_2 + 2) & 0xFFFF) >= 2U) {
            temp_v0_3 = D_8011F2F0 + (temp_v0_2 & 0xFFFF) * 0x64;
            *(s16 *)(temp_v0_3 + 8) = 0x40;
            *(s16 *)(temp_v0_3 + 6) = 0x40;
            *(s16 *)(temp_v0_3 + 4) = 0x40;
            *(s16 *)(temp_v0_3 + 2) = 0x40;
            *(f32 *)(temp_v0_3 + 0x44) = -*(f32 *)(temp_s0 + 8) * 0.5f;
            *(f32 *)(temp_v0_3 + 0x48) = -*(f32 *)(temp_s0 + 0xC) * 0.5f;
            *(f32 *)(temp_v0_3 + 0x4C) = -*(f32 *)(temp_s0 + 0x10) * 0.5f;
        }
    }
    temp_v0_4 = *(u16 *)(temp_s0 + 0x14) - 1;
    *(u16 *)(temp_s0 + 0x14) = temp_v0_4;
    if ((temp_v0_4 << 0x10) == 0) {
        temp_s0_2 = arg0 & 0xFFFF;
        func_8013E49C(*(u16 *)(temp_s0 + 0x76));
        D_8011F2FD[temp_s0_2 * 0x64] = 2;
        if (*(f32 *)(temp_s1 + 0x44) == 1.0f) {
            func_801D7028(temp_s0_2, 0x34);
            func_8015D410(temp_s0_2, 0x3E99999A, D_8022A770, 0);
        }
    }
}
