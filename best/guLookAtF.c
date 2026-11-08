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

f32 func_80032310();
s32 guMtxIdentF();
extern f64 D_8004A590;
extern s32 D_8004A598;

void guLookAtF(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa1;
    f32 temp_fa1_2;
    f32 temp_fa1_3;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs2;
    f32 temp_fs2_2;
    f32 temp_fs3;
    f32 temp_fs3_2;
    f32 temp_fs4;
    f32 temp_fs4_2;
    f32 temp_fs5;
    f32 temp_fs5_2;
    f32 temp_ft0;
    f32 temp_ft2;
    f32 temp_ft4;
    f32 temp_ft4_2;
    f32 temp_ft4_3;
    f32 temp_ft5;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv1;
    s32 temp_s6;
    s32 temp_s7;

    guMtxIdentF();
    temp_fs4 = arg4 - arg1;
    temp_fs5 = arg5 - arg2;
    temp_fa1 = arg6 - arg3;
    temp_fa0 = (temp_fs4 * temp_fs4) + (temp_fs5 * temp_fs5) + (temp_fa1 * temp_fa1);
    var_fv1 = sqrtf(temp_fa0);
    if (var_fv1 != var_fv1) {
        var_fv1 = func_80032310(temp_fa0, temp_fa1);
    }
    temp_ft4 = (f32) (D_8004A590 / (f64) var_fv1);
    temp_fs4_2 = temp_fs4 * temp_ft4;
    temp_fa1_2 = temp_fa1 * temp_ft4;
    temp_fs5_2 = temp_fs5 * temp_ft4;
    temp_fs2 = (arg8 * temp_fa1_2) - (arg9 * temp_fs5_2);
    temp_fs1 = (arg9 * temp_fs4_2) - (arg7 * temp_fa1_2);
    temp_fs0 = (arg7 * temp_fs5_2) - (arg8 * temp_fs4_2);
    temp_fa0_2 = (temp_fs2 * temp_fs2) + (temp_fs1 * temp_fs1) + (temp_fs0 * temp_fs0);
    var_fv0 = sqrtf(temp_fa0_2);
    if (var_fv0 != var_fv0) {
        var_fv0 = func_80032310(temp_fa0_2, arg8);
    }
    temp_s6 = D_8004A598;
    temp_s7 = D_8004A598;
    temp_ft4_2 = (f32) (M2C_BITWISE(f64, temp_s7) / (f64) var_fv0);
    temp_fs2_2 = temp_fs2 * temp_ft4_2;
    temp_fs0_2 = temp_fs0 * temp_ft4_2;
    temp_fs1_2 = temp_fs1 * temp_ft4_2;
    temp_ft0 = (temp_fs5_2 * temp_fs0_2) - (temp_fa1_2 * temp_fs1_2);
    temp_ft2 = (temp_fa1_2 * temp_fs2_2) - (temp_fs4_2 * temp_fs0_2);
    temp_fs3 = (temp_fs4_2 * temp_fs1_2) - (temp_fs5_2 * temp_fs2_2);
    temp_fa0_3 = (temp_ft0 * temp_ft0) + (temp_ft2 * temp_ft2) + (temp_fs3 * temp_fs3);
    var_fv0_2 = sqrtf(temp_fa0_3);
    if (var_fv0_2 != var_fv0_2) {
        var_fv0_2 = func_80032310(temp_fa0_3, temp_fa1_2);
    }
    temp_ft4_3 = (f32) (M2C_BITWISE(f64, temp_s7) / (f64) var_fv0_2);
    temp_fa1_3 = temp_ft0 * temp_ft4_3;
    temp_ft5 = temp_ft2 * temp_ft4_3;
    temp_fs3_2 = temp_fs3 * temp_ft4_3;
    M2C_FIELD(arg0, f32 *, 0) = temp_fs2_2;
    M2C_FIELD(arg0, f32 *, 0x10) = temp_fs1_2;
    M2C_FIELD(arg0, f32 *, 0x20) = temp_fs0_2;
    M2C_FIELD(arg0, f32 *, 8) = temp_fs4_2;
    M2C_FIELD(arg0, f32 *, 0x18) = temp_fs5_2;
    M2C_FIELD(arg0, f32 *, 0x28) = temp_fa1_2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, f32 *, 0x24) = temp_fs3_2;
    M2C_FIELD(arg0, f32 *, 4) = temp_fa1_3;
    M2C_FIELD(arg0, f32 *, 0x14) = temp_ft5;
    M2C_FIELD(arg0, f32 *, 0x3C) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) -((arg1 * temp_fs2_2) + (arg2 * temp_fs1_2) + (arg3 * temp_fs0_2));
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) -((arg1 * temp_fs4_2) + (arg2 * temp_fs5_2) + (arg3 * temp_fa1_2));
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) -((arg1 * temp_fa1_3) + (arg2 * temp_ft5) + (arg3 * temp_fs3_2));
}
