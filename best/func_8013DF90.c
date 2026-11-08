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

f32 func_80032310(f32);                             /* extern */
M2C_UNK func_8015E8E4(void *);                      /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_801687EC;
extern M2C_UNK D_8022A770;
extern M2C_UNK D_8022A772;
extern M2C_UNK D_8022A776;
extern M2C_UNK D_8022ACD0;
extern M2C_UNK D_8022AD07;

void func_8013DF90(void) {
    f32 temp_fa0;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_s3;
    s32 var_v0;
    u16 temp_a0;
    void *temp_s2;
    void *temp_s4;
    void *var_s0;

    temp_s4 = *(&D_801687EC + (M2C_FIELD(&D_8006FAF0, u16 *, 0x20) * 4));
    var_s3 = 0;
    if (temp_s4 != NULL) {
        var_v0 = 0 & 0xFFFF;
        do {
            temp_v1 = var_v0 * 0x8F0;
            temp_a0 = *(&D_8022A772 + temp_v1);
            if ((temp_a0 != 0xFFFF) && !(*(&D_8022ACD0 + temp_v1) & 0x18)) {
                temp_s2 = (temp_a0 * 0x64) + &D_8011F2F0;
                var_s0 = temp_s4;
                temp_fv0 = M2C_FIELD(var_s0, f32 *, 4);
                var_fv1 = temp_fv0;
                if (temp_fv0 != 0.0f) {
                    temp_s1 = (var_s3 & 0xFFFF) * 0x8F0;
                    __repair_rows: {
                        if (*(&D_8022AD07 + temp_s1) == M2C_FIELD(var_s0, u16 *, 0)) {
                            temp_ft1 = M2C_FIELD(temp_s2, f32 *, 0x18) - var_fv1;
                            temp_ft0 = M2C_FIELD(temp_s2, f32 *, 0x1C) - M2C_FIELD(var_s0, f32 *, 8);
                            temp_fv0_2 = M2C_FIELD(temp_s2, f32 *, 0x20) - M2C_FIELD(var_s0, f32 *, 0xC);
                            temp_fa0 = (temp_ft1 * temp_ft1) + (temp_ft0 * temp_ft0) + (temp_fv0_2 * temp_fv0_2);
                            var_fv1_2 = sqrtf(temp_fa0);
                            if (var_fv1_2 != var_fv1_2) {
                                var_fv1_2 = func_80032310(temp_fa0);
                            }
                            if (var_fv1_2 < 26.0f) {
                                func_8015E8E4(temp_s1 + &D_8022A770);
                                *(&D_8022A776 + temp_s1) = *(&D_8022A776 + temp_s1) | 4;
                            }
                        }
                        var_s0 += 0x10;
                        var_fv1 = M2C_FIELD(var_s0, f32 *, 4);
                    }
if (var_fv1 != 0.0f) goto __repair_rows;
                }
            }
            var_s3 += 1;
            var_v0 = var_s3 & 0xFFFF;
        } while ((u32) (var_s3 & 0xFFFF) < 7U);
    }
}
