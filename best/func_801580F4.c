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
s32 func_801FA38C(M2C_UNK);                         /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2F2;
extern M2C_UNK D_8011F32E;
extern f64 D_80183880;
extern u16 D_8018D660;
extern M2C_UNK D_802393D4;
extern M2C_UNK func_80157F6C;
extern M2C_UNK func_801580AC;

void func_801580F4(s32 arg0) {
    f64 temp_fs1;
    f64 var_fv1;
    f64 var_fv1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s1;
    void *temp_v0_3;
    void *temp_v0_6;

    temp_v1 = (arg0 & 0xFFFF) * 0x64;
    if (*(&D_8011F32E + temp_v1) == 0) {
        D_8018D660 = 0;
        *(&D_8011F32E + temp_v1) = 1;
    }
    D_8018D660 += 1;
    var_s1 = 0;
    if ((u16) D_8018D660 >= 0xBU) {
        temp_fs1 = D_80183880;
loop_4:
        temp_v0 = func_801FA38C(0) % 1800;
        var_fv1 = (f64) temp_v0;
        if (temp_v0 < 0) {
            var_fv1 += temp_fs1;
        }
        temp_v0_2 = func_800DE41C(0, 0x1E, 1, 0, 0x5B, 0xFF, &D_802393D4, &func_80157F6C, &func_801580AC, 1800.0f, -260.0f, (f32) var_fv1 + -1200.0f, 0, 0, 0, 0.2f, 0.2f, 0.2f);
        if ((u32) ((temp_v0_2 + 2) & 0xFFFF) >= 2U) {
            temp_v1_2 = (temp_v0_2 & 0xFFFF) * 0x64;
            temp_v0_3 = temp_v1_2 + &D_8011F2F0;
            M2C_FIELD(temp_v0_3, s16 *, 8) = 0x40;
            M2C_FIELD(temp_v0_3, s16 *, 6) = 0x40;
            M2C_FIELD(temp_v0_3, s16 *, 4) = 0x40;
            *(&D_8011F2F2 + temp_v1_2) = 0x40;
            temp_v0_4 = func_801FA38C(0) % 1800;
            var_fv1_2 = (f64) temp_v0_4;
            if (temp_v0_4 < 0) {
                var_fv1_2 += temp_fs1;
            }
            temp_v0_5 = func_800DE41C(0, 0x1E, 1, 0, 0x5B, 0xFF, &D_802393D4, &func_80157F6C, &func_801580AC, 1200.0f, -260.0f, (f32) var_fv1_2 + -1200.0f, 0, 0, 0, 0.2f, 0.2f, 0.2f);
            if ((u32) ((temp_v0_5 + 2) & 0xFFFF) >= 2U) {
                temp_v1_3 = (temp_v0_5 & 0xFFFF) * 0x64;
                temp_v0_6 = temp_v1_3 + &D_8011F2F0;
                M2C_FIELD(temp_v0_6, s16 *, 8) = 0x40;
                M2C_FIELD(temp_v0_6, s16 *, 6) = 0x40;
                M2C_FIELD(temp_v0_6, s16 *, 4) = 0x40;
                *(&D_8011F2F2 + temp_v1_3) = 0x40;
                var_s1 += 1;
                if ((u32) (var_s1 & 0xFFFF) < 2U) {
                    goto loop_4;
                }
            }
        }
        D_8018D660 = 0;
    }
}
