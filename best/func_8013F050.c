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
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8022A772;

s32 func_8013F050(s32 arg0, void *arg1) {
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fv1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    void *temp_v1;
    void *var_v0;

    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    temp_fs2 = *(&D_8011F308 + temp_v0);
    temp_fs1 = *(&D_8011F30C + temp_v0);
    temp_fs0 = *(&D_8011F310 + temp_v0);
    var_s0 = 0;
    var_v0 = arg1;
loop_1:
    if (M2C_FIELD(var_v0, s8 *, 0x60) != -1) {
        temp_v0_2 = *(&D_8022A772 + (var_s0 * 0x8F0)) * 0x64;
        temp_fv0 = temp_fs2 - *(&D_8011F308 + temp_v0_2);
        temp_fv1 = temp_fs1 - *(&D_8011F30C + temp_v0_2);
        temp_ft0 = temp_fs0 - *(&D_8011F310 + temp_v0_2);
        temp_fa0 = (temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1) + (temp_ft0 * temp_ft0);
        var_fv1 = sqrtf(temp_fa0);
        if (var_fv1 != var_fv1) {
            var_fv1 = func_80032310(temp_fa0);
        }
        temp_v1 = arg1 + var_s0;
        if (var_fv1 < M2C_FIELD(arg1, f32 *, 0x70)) {
            var_s0 += 1;
            if (M2C_FIELD(temp_v1, u8 *, 0x67) == 0) {
                M2C_FIELD(temp_v1, s8 *, 0x67) = 1;
                return 1;
            }
            goto block_8;
        }
        goto block_7;
    }
block_7:
    var_s0 += 1;
block_8:
    var_v0 = arg1 + var_s0;
    if (var_s0 >= 7) {
        return 0;
    }
    goto loop_1;
}
