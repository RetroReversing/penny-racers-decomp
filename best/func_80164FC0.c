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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, s32, s32, s32, f32, f32, f32); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(u16);                         /* extern */
M2C_UNK func_8013E818(s32, s32, M2C_UNK, f32, f32, f32, s32); /* extern */
M2C_UNK func_801D7028(u16, M2C_UNK);                /* extern */
s32 func_801FA30C();                                /* extern */
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F350;
extern M2C_UNK D_8011F4E4;
extern f64 D_80183A10;
extern f64 D_80183A18;
extern f64 D_80183A20;
extern M2C_UNK D_802378F0;
extern M2C_UNK D_80237914;
extern M2C_UNK D_802390C8;
extern M2C_UNK func_801655A8;
extern M2C_UNK func_801657F0;

void func_80164FC0(s32 arg0) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f64 var_fv1;
    f64 var_fv1_2;
    f64 var_fv1_3;
    s16 var_v0_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_a0;
    u16 temp_s3_2;
    u16 temp_v0;
    u16 temp_v0_8;
    u16 temp_v1_2;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_s0;
    void *temp_s1;
    void *temp_s3;
    void *temp_v1;

    temp_s1 = *(&D_8011F350 + ((arg0 & 0xFFFF) * 0x64));
    temp_s0 = (M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), u16 *, 2) * 0x64) + &D_8011F4E4;
    temp_s3 = M2C_FIELD(temp_s0, void **, 0x50);
    temp_a0 = M2C_FIELD(temp_s1, u16 *, 0x14);
    var_v1 = 0;
    if (((u32) (temp_a0 & 3) >> 1) != 0) {
        var_v1 = (temp_a0 << 0x10) > 0;
    }
    switch (var_v1) {                               /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        M2C_FIELD(temp_s3, M2C_UNK **, 4) = &D_802378F0;
        break;
    case 1:                                         /* switch 1 */
        M2C_FIELD(temp_s3, M2C_UNK **, 4) = &D_80237914;
        break;
    }
    temp_v0 = M2C_FIELD(temp_s1, u16 *, 0x14) - 1;
    M2C_FIELD(temp_s1, u16 *, 0x14) = temp_v0;
    var_v0 = arg0 & 0xFFFF;
    if ((temp_v0 << 0x10) == 0) {
        temp_v1 = M2C_FIELD(temp_s1, void **, 4);
        if (M2C_FIELD(temp_v1, s16 *, 0x55E) != 0) {
            var_v1_2 = (arg0 & 0xFFFF) * 0x64;
            var_v0_2 = 3;
        } else {
            func_801D7028(M2C_FIELD(temp_v1, u16 *, 2), 0x2A);
            var_v1_2 = (arg0 & 0xFFFF) * 0x64;
            var_v0_2 = 1;
        }
        *(&D_8011F32E + var_v1_2) = var_v0_2;
        var_v0 = arg0 & 0xFFFF;
    }
    temp_v1_2 = *(&D_8011F32E + (var_v0 * 0x64));
    switch (temp_v1_2) {                            /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        temp_v0_2 = func_8013E364();
        temp_s3_2 = temp_v0_2 & 0xFFFF;
        if (temp_s3_2 != 0xFFFF) {
            temp_v0_3 = (arg0 & 0xFFFF) * 0x64;
            temp_v0_4 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xA, &D_802390C8, &func_801655A8, &func_801657F0, *(&D_8011F308 + temp_v0_3), *(&D_8011F30C + temp_v0_3), *(&D_8011F310 + temp_v0_3), 0, 0, 0, 0.01f, 0.01f, 0.01f);
            if ((u32) ((temp_v0_4 + 2) & 0xFFFF) < 2U) {
                func_8013E49C(temp_s3_2);
                return;
            }
            temp_v0_5 = func_801FA30C() & 0x1F;
            var_fv1 = (f64) temp_v0_5;
            if (temp_v0_5 < 0) {
                var_fv1 += D_80183A10;
            }
            temp_v0_6 = func_801FA30C() & 0xF;
            var_fv1_2 = (f64) temp_v0_6;
            if (temp_v0_6 < 0) {
                var_fv1_2 += D_80183A18;
            }
            temp_v0_7 = func_801FA30C() & 0x1F;
            var_fv1_3 = (f64) temp_v0_7;
            if (temp_v0_7 < 0) {
                var_fv1_3 += D_80183A20;
            }
            func_8013E818(temp_v0_2 & 0xFFFF, temp_v0_4 & 0xFFFF, 0x40, (((f32) var_fv1 - 16.0f) * 0.5f) - M2C_FIELD(temp_s1, f32 *, 8), ((f32) var_fv1_2 * 0.5f) - M2C_FIELD(temp_s1, f32 *, 0xC), (((f32) var_fv1_3 - 16.0f) * 0.5f) - M2C_FIELD(temp_s1, f32 *, 0x10), ((0xA - (s16) M2C_FIELD(temp_s1, u16 *, 0x14)) * 2) & 0xFFFF);
            M2C_FIELD(temp_s1, f32 *, 8) = (f32) (M2C_FIELD(temp_s1, f32 *, 8) * 0.9f);
            M2C_FIELD(temp_s1, f32 *, 0xC) = (f32) (M2C_FIELD(temp_s1, f32 *, 0xC) * 0.9f);
            M2C_FIELD(temp_s1, f32 *, 0x10) = (f32) (M2C_FIELD(temp_s1, f32 *, 0x10) * 0.9f);
            return;
        }
        return;
    case 1:                                         /* switch 2 */
        M2C_FIELD(temp_s3, M2C_UNK **, 4) = &D_802378F0;
        temp_fv1 = M2C_FIELD(temp_s0, f32 *, 0x34);
        M2C_FIELD(temp_s0, f32 *, 0x34) = (f32) (((3.0f - temp_fv1) * 0.4f) + temp_fv1);
        temp_fv1_2 = M2C_FIELD(temp_s0, f32 *, 0x30);
        M2C_FIELD(temp_s0, f32 *, 0x30) = (f32) (((0.3f - temp_fv1_2) * 0.4f) + temp_fv1_2);
        if (M2C_FIELD(temp_s0, f32 *, 0x34) > 2.8f) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
            return;
        }
        break;
    case 2:                                         /* switch 2 */
        M2C_FIELD(temp_s3, M2C_UNK **, 4) = &D_802378F0;
        temp_fv1_3 = M2C_FIELD(temp_s0, f32 *, 0x34);
        M2C_FIELD(temp_s0, f32 *, 0x34) = (f32) (((0.3f - temp_fv1_3) * 0.4f) + temp_fv1_3);
        temp_fv1_4 = M2C_FIELD(temp_s0, f32 *, 0x30);
        temp_fv0 = ((3.0f - temp_fv1_4) * 0.4f) + temp_fv1_4;
        M2C_FIELD(temp_s0, f32 *, 0x30) = temp_fv0;
        if (temp_fv0 > 2.8f) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
            return;
        }
        break;
    case 3:                                         /* switch 2 */
        M2C_FIELD(temp_s0, f32 *, 0x34) = 1.0f;
        M2C_FIELD(temp_s0, f32 *, 0x30) = 1.0f;
        temp_a0_2 = M2C_FIELD(temp_s1, void **, 4);
        temp_v0_8 = M2C_FIELD(temp_a0_2, u16 *, 0x560);
        M2C_FIELD(temp_a0_2, u16 *, 0x560) = (u16) (temp_v0_8 & 0xF8);
        temp_a0_3 = M2C_FIELD(temp_s1, void **, 4);
        M2C_FIELD(temp_a0_3, u16 *, 0x560) = (u16) (M2C_FIELD(temp_a0_3, u16 *, 0x560) | ((temp_v0_8 & 7) - 1));
        func_8013E49C(M2C_FIELD(temp_s1, u16 *, 0x76));
        *(&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
        if (M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), s16 *, 0x55E) == 0) {
            M2C_FIELD(temp_s3, M2C_UNK **, 4) = NULL;
        }
        break;
    }
}
