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
extern M2C_UNK D_8011F2F0;
extern s32 D_8018D674;
extern M2C_UNK D_8022A770;

void func_8013F44C(s32 arg0, void *arg1) {
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 var_ft1;
    f32 var_fv0;
    f32 var_fv0_2;
    s32 var_s3;
    s8 temp_v1;
    void *temp_s0;
    void *temp_s1;
    void *temp_s4;
    void *var_v0;

    temp_s4 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    D_8018D674 = 0;
    temp_fs2 = M2C_FIELD(temp_s4, f32 *, 0x18);
    temp_fs1 = M2C_FIELD(temp_s4, f32 *, 0x1C);
    temp_fs0 = M2C_FIELD(temp_s4, f32 *, 0x20);
    var_s3 = 0;
    var_v0 = arg1;
    do {
        temp_v1 = M2C_FIELD(var_v0, s8 *, 0x60);
        if (temp_v1 != -1) {
            temp_s0 = (temp_v1 * 0x8F0) + &D_8022A770;
            temp_s1 = (M2C_FIELD(temp_s0, u16 *, 2) * 0x64) + &D_8011F2F0;
            temp_fv0 = temp_fs2 - M2C_FIELD(temp_s1, f32 *, 0x18);
            temp_fv1 = temp_fs1 - M2C_FIELD(temp_s1, f32 *, 0x1C);
            temp_ft0 = temp_fs0 - M2C_FIELD(temp_s1, f32 *, 0x20);
            temp_fa0 = (temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1) + (temp_ft0 * temp_ft0);
            temp_fv0_2 = sqrtf(temp_fa0);
            var_ft1 = temp_fv0_2;
            if (temp_fv0_2 != temp_fv0_2) {
                var_ft1 = func_80032310(temp_fa0);
            }
            temp_ft0_2 = M2C_FIELD(arg1, f32 *, 0x70);
            if (var_ft1 < temp_ft0_2) {
                if (M2C_FIELD(temp_s4, f32 *, 0x18) < M2C_FIELD(temp_s1, f32 *, 0x18)) {
                    var_fv0 = (temp_ft0_2 - var_ft1) + M2C_FIELD(temp_s0, f32 *, 0x854);
                } else {
                    var_fv0 = M2C_FIELD(temp_s0, f32 *, 0x854) - (M2C_FIELD(arg1, f32 *, 0x70) - var_ft1);
                }
                M2C_FIELD(temp_s0, f32 *, 0x854) = var_fv0;
                if (M2C_FIELD(temp_s4, f32 *, 0x20) < M2C_FIELD(temp_s1, f32 *, 0x20)) {
                    var_fv0_2 = (M2C_FIELD(arg1, f32 *, 0x70) - var_ft1) + M2C_FIELD(temp_s0, f32 *, 0x85C);
                } else {
                    var_fv0_2 = M2C_FIELD(temp_s0, f32 *, 0x85C) - (M2C_FIELD(arg1, f32 *, 0x70) - var_ft1);
                }
                M2C_FIELD(temp_s0, f32 *, 0x85C) = var_fv0_2;
                D_8018D674 = 1;
            }
        }
        var_s3 += 1;
        var_v0 = arg1 + var_s3;
    } while (var_s3 < 7);
}
