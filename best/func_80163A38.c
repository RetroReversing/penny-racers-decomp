/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, s32, M2C_UNK32, s32, f32, f32, f32); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32);                         /* extern */
M2C_UNK func_8013E640(s32, s32, void *, M2C_UNK, s32, f32, s32, f32, f32, f32, s32); /* extern */
M2C_UNK func_801D7028(s32, M2C_UNK);                /* extern */
M2C_UNK guMtxXFMF(void *, M2C_UNK, M2C_UNK, f32, f32 *, f32 *, f32 *); /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2F2;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F338;
extern M2C_UNK D_8011F33C;
extern M2C_UNK D_8011F350;
extern M2C_UNK D_80168408;
extern f64 D_801839D0;
extern f64 D_801839D8;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_802378B4;
extern M2C_UNK D_802390C8;
extern M2C_UNK func_80163E5C;
extern M2C_UNK func_8016410C;
extern M2C_UNK func_80164324;

void func_80163A38(s32 arg0) {
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    s16 temp_v0_5;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_6;
    s32 var_v0;
    u16 temp_v0_4;
    void *temp_s2;
    void *temp_s3;
    void *temp_s5;
    void *temp_v1;

    temp_s2 = *(&D_8011F350 + ((arg0 & 0xFFFF) * 0x64));
    temp_v0 = M2C_FIELD(temp_s2, u16 *, 2) * 0x64;
    temp_s3 = temp_v0 + &D_8011F2F0;
    temp_s5 = M2C_FIELD((&D_8011F2F0 + temp_v0), void **, 0x244);
    temp_v0_2 = func_8013E364();
    temp_s0 = temp_v0_2 & 0xFFFF;
    if (temp_s0 != 0xFFFF) {
        temp_v0_3 = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, &D_80168408, &func_80163E5C, NULL, M2C_FIELD(temp_s3, f32 *, 0x18), M2C_FIELD(temp_s3, f32 *, 0x1C) + 15.0f, M2C_FIELD(temp_s3, f32 *, 0x20), 0, M2C_FIELD(temp_s3, M2C_UNK32 *, 0x28), 0, 2.0f * M2C_FIELD(temp_s3, f32 *, 0x30), 2.0f * M2C_FIELD(temp_s3, f32 *, 0x34), 2.0f * M2C_FIELD(temp_s3, f32 *, 0x38));
        temp_s1 = temp_v0_3 & 0xFFFF;
        if ((u32) ((temp_v0_3 + 2) & 0xFFFF) < 2U) {
            func_8013E49C(temp_s0);
            return;
        }
        temp_v0_4 = M2C_FIELD(temp_s2, u16 *, 0x560);
        M2C_FIELD(temp_s2, u16 *, 0x560) = (u16) ((temp_v0_4 & 0xF8) | ((temp_v0_4 & 7) + 1));
        func_801D7028(temp_s1, 0x30);
        guMtxXFMF(temp_s2 + 0x6D4, 0, 0x41700000, (f32) (((f64) M2C_FIELD(temp_s2, f32 *, 0x774) * D_801839D0) + D_801839D8), &sp48, &sp4C, &sp50);
        temp_s0_2 = temp_v0_2 & 0xFFFF;
        func_8013E640(temp_s0_2, temp_s1, temp_s2, 0, 0, 15.0f, 0, sp48, sp4C, sp50, 0x78);
        *(&D_8018D6C4 + (temp_s0_2 * 0x7C)) = temp_s2;
        temp_v0_5 = M2C_FIELD(temp_s2, s16 *, 0x55E);
        if (temp_v0_5 > 0) {
            M2C_FIELD(temp_s2, s16 *, 0x55E) = (s16) (temp_v0_5 - 1);
        }
        if (M2C_FIELD(temp_s2, s16 *, 0x55E) == 0) {
            M2C_FIELD(temp_s5, M2C_UNK **, 4) = &D_802378B4;
        }
        guMtxXFMF(temp_s2 + 0x6D4, 0, 0x41700000, -40.0f, &sp48, &sp4C, &sp50);
        temp_v0_6 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x9B, &D_802390C8, &func_8016410C, &func_80164324, sp48 + M2C_FIELD(temp_s3, f32 *, 0x18), sp4C + M2C_FIELD(temp_s3, f32 *, 0x1C), sp50 + M2C_FIELD(temp_s3, f32 *, 0x20), 0, 0, 0, 0.08f, 0.08f, 0.08f);
        var_v0 = arg0 & 0xFFFF;
        if ((u32) ((temp_v0_6 + 2) & 0xFFFF) >= 2U) {
            temp_a0 = (temp_v0_6 & 0xFFFF) * 0x64;
            temp_v1 = temp_a0 + &D_8011F2F0;
            M2C_FIELD(temp_v1, s16 *, 8) = 0x40;
            M2C_FIELD(temp_v1, s16 *, 6) = 0x40;
            M2C_FIELD(temp_v1, s16 *, 4) = 0x40;
            *(&D_8011F2F2 + temp_a0) = 0x40;
            *(&D_8011F334 + temp_a0) = M2C_FIELD(temp_s2, f32 *, 0x7C0);
            *(&D_8011F338 + temp_a0) = (M2C_FIELD(temp_s2, f32 *, 0x7C4) * 0.8f) + 1.0f;
            *(&D_8011F33C + temp_a0) = M2C_FIELD(temp_s2, f32 *, 0x7C8);
            var_v0 = arg0 & 0xFFFF;
        }
        *(&D_8011F2FD + (var_v0 * 0x64)) = 2;
    }
}
