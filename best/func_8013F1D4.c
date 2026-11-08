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
M2C_UNK func_801D7028(u16, M2C_UNK);                /* extern */
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern s16 D_8018D672;
extern M2C_UNK D_8022A770;
extern M2C_UNK D_8022A772;

s32 func_8013F1D4(s32 arg0, void *arg1) {
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs4;
    f32 temp_fs5;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_s3;
    f32 var_fv1;
    s16 var_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 temp_v1;
    void *temp_s0;
    void *temp_v0_3;
    void *var_v0;

    D_8018D672 = 0;
    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    temp_s3 = *(&D_8011F308 + temp_v0);
    temp_fs5 = *(&D_8011F30C + temp_v0);
    temp_fs4 = *(&D_8011F310 + temp_v0);
    var_s1 = 0;
    var_v0 = arg1;
loop_1:
    temp_v1 = M2C_FIELD(var_v0, s8 *, 0x60);
    if (temp_v1 != -1) {
        temp_s0 = (temp_v1 * 0x8F0) + &D_8022A770;
        temp_v0_2 = *(&D_8022A772 + (var_s1 * 0x8F0)) * 0x64;
        temp_fs1 = temp_s3 - *(&D_8011F308 + temp_v0_2);
        temp_fv1 = temp_fs5 - *(&D_8011F30C + temp_v0_2);
        temp_fs0 = temp_fs4 - *(&D_8011F310 + temp_v0_2);
        temp_fa0 = (temp_fs1 * temp_fs1) + (temp_fv1 * temp_fv1) + (temp_fs0 * temp_fs0);
        var_fv1 = sqrtf(temp_fa0);
        if (var_fv1 != var_fv1) {
            var_fv1 = func_80032310(temp_fa0);
        }
        if ((var_fv1 < M2C_FIELD(arg1, f32 *, 0x70)) && (M2C_FIELD((arg1 + var_s1), u8 *, 0x67) == 0)) {
            if (!(M2C_FIELD(temp_s0, u16 *, 0x560) & 0x20)) {
                M2C_FIELD(temp_s0, s8 *, 0x8A1) = 3;
                M2C_FIELD(temp_s0, s8 *, 0x8C8) = 0;
                M2C_FIELD(temp_s0, s8 *, 0x8C9) = 1;
                M2C_FIELD(temp_s0, f32 *, 0x8CC) = 360.0f;
                temp_fv1_2 = -temp_fs1 * 0.025f;
                M2C_FIELD(temp_s0, f32 *, 0x7B4) = temp_fv1_2;
                temp_fv0 = -temp_fs0 * 0.025f;
                M2C_FIELD(temp_s0, f32 *, 0x7BC) = temp_fv0;
                M2C_FIELD(temp_s0, f32 *, 0x7C0) = temp_fv1_2;
                M2C_FIELD(temp_s0, f32 *, 0x7C8) = temp_fv0;
                func_801D7028(M2C_FIELD(temp_s0, u16 *, 2), 0x34);
            }
            temp_v0_3 = temp_s0 + (M2C_FIELD(M2C_FIELD(arg1, void **, 4), u16 *, 4) * 8);
            temp_ft0 = M2C_FIELD(temp_v0_3, f32 *, 0x5B4);
            M2C_FIELD(temp_v0_3, f32 *, 0x5B4) = (f32) (((1.0f - temp_ft0) * M2C_FIELD(temp_s0, f32 *, 0x5A0)) + temp_ft0);
            M2C_FIELD((arg1 + var_s1), s8 *, 0x67) = 1;
            D_8018D672 = var_s1;
            return 1;
        }
        goto block_9;
    }
block_9:
    var_s1 += 1;
    var_v0 = arg1 + var_s1;
    if (var_s1 >= 7) {
        return 0;
    }
    goto loop_1;
}
