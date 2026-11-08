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

f32 func_80032310(f32, f32);                        /* extern */
M2C_UNK func_801F9C8C(f32, f32);                    /* extern */

void func_801FA240(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa1;
    f32 temp_fa1_2;
    f32 temp_fa1_3;
    f32 temp_fa1_4;
    f32 temp_fv0;
    f32 var_fv1;

    temp_fa0 = arg0 - arg3;
    sp10 = temp_fa0;
    temp_fa1 = arg1 - arg4;
    sp14 = temp_fa1;
    temp_fv0 = arg2 - arg5;
    sp18 = temp_fv0;
    temp_fa1_2 = temp_fa1 * temp_fa1;
    temp_fa0_2 = (temp_fa0 * temp_fa0) + temp_fa1_2 + (temp_fv0 * temp_fv0);
    var_fv1 = sqrtf(temp_fa0_2);
    if (var_fv1 != var_fv1) {
        var_fv1 = func_80032310(temp_fa0_2, temp_fa1_2);
    }
    if (var_fv1 != 0.0f) {
        temp_fa1_3 = 1.0f / var_fv1;
        temp_fa0_3 = temp_fa1_3 * sp10;
        sp10 = temp_fa0_3;
        sp14 *= temp_fa1_3;
        temp_fa1_4 = temp_fa1_3 * sp18;
        sp18 = temp_fa1_4;
        func_801F9C8C(temp_fa0_3, temp_fa1_4);
    }
}
