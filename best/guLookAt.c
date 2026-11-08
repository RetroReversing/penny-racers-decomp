/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -fno-strength-reduce -g3, tried by autopilot */
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
s32 guMtxF2L();
s32 guMtxIdentF();
extern f64 D_8004A5A0;
extern s32 D_8004A5A8;

void guLookAt(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    s32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    s32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    s32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    s32 sp54;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa0_4;
    f32 temp_fa1;
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
    f32 temp_ft3;
    f32 temp_ft4;
    f32 temp_ft4_2;
    f32 temp_ft4_3;
    f32 temp_ft5;
    f32 temp_ft5_2;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv1;
    s32 temp_s6;
    s32 temp_s7;

    sp54 = arg0;
    guMtxIdentF(&sp10);
    temp_fs3 = arg4 - arg1;
    temp_fs4 = arg5 - arg2;
    temp_fs5 = arg6 - arg3;
    temp_fa0 = (temp_fs3 * temp_fs3) + (temp_fs4 * temp_fs4) + (temp_fs5 * temp_fs5);
    var_fv1 = sqrtf(temp_fa0);
    if (var_fv1 != var_fv1) {
        var_fv1 = func_80032310(temp_fa0);
    }
    temp_ft4 = (f32) (D_8004A5A0 / (f64) var_fv1);
    temp_fs3_2 = temp_fs3 * temp_ft4;
    temp_fs5_2 = temp_fs5 * temp_ft4;
    temp_fs4_2 = temp_fs4 * temp_ft4;
    temp_fs2 = (arg8 * temp_fs5_2) - (arg9 * temp_fs4_2);
    temp_fs1 = (arg9 * temp_fs3_2) - (arg7 * temp_fs5_2);
    temp_fs0 = (arg7 * temp_fs4_2) - (arg8 * temp_fs3_2);
    temp_fa0_2 = (temp_fs2 * temp_fs2) + (temp_fs1 * temp_fs1) + (temp_fs0 * temp_fs0);
    var_fv0 = sqrtf(temp_fa0_2);
    if (var_fv0 != var_fv0) {
        var_fv0 = func_80032310(temp_fa0_2, arg8);
    }
    temp_s6 = D_8004A5A8;
    temp_s7 = D_8004A5A8;
    temp_ft4_2 = (f32) (M2C_BITWISE(f64, temp_s7) / (f64) var_fv0);
    temp_fs2_2 = temp_fs2 * temp_ft4_2;
    temp_fs0_2 = temp_fs0 * temp_ft4_2;
    temp_fs1_2 = temp_fs1 * temp_ft4_2;
    temp_ft0 = (temp_fs4_2 * temp_fs0_2) - (temp_fs5_2 * temp_fs1_2);
    temp_ft2 = (temp_fs5_2 * temp_fs2_2) - (temp_fs3_2 * temp_fs0_2);
    temp_ft3 = (temp_fs3_2 * temp_fs1_2) - (temp_fs4_2 * temp_fs2_2);
    temp_fa0_3 = (temp_ft0 * temp_ft0) + (temp_ft2 * temp_ft2) + (temp_ft3 * temp_ft3);
    var_fv0_2 = sqrtf(temp_fa0_3);
    if (var_fv0_2 != var_fv0_2) {
        var_fv0_2 = func_80032310(temp_fa0_3);
    }
    temp_ft4_3 = (f32) (M2C_BITWISE(f64, temp_s7) / (f64) var_fv0_2);
    temp_ft5 = temp_ft0 * temp_ft4_3;
    temp_fa1 = temp_ft2 * temp_ft4_3;
    temp_fa0_4 = arg2 * temp_fs4_2;
    sp10 = temp_fs2_2;
    sp20 = temp_fs1_2;
    temp_ft5_2 = temp_ft3 * temp_ft4_3;
    sp30 = temp_fs0_2;
    sp18 = temp_fs3_2;
    sp28 = temp_fs4_2;
    sp38 = temp_fs5_2;
    sp1C = 0;
    sp2C = 0;
    sp3C = 0;
    sp14 = temp_ft5;
    sp24 = temp_fa1;
    sp4C = 1.0f;
    sp34 = temp_ft5_2;
    sp40 = -((arg1 * temp_fs2_2) + (arg2 * temp_fs1_2) + (arg3 * temp_fs0_2));
    sp48 = -((arg1 * temp_fs3_2) + temp_fa0_4 + (arg3 * temp_fs5_2));
    sp44 = -((arg1 * temp_ft5) + (arg2 * temp_fa1) + (arg3 * temp_ft5_2));
    guMtxF2L(temp_fa0_4, arg3, &sp10, sp54);
}
