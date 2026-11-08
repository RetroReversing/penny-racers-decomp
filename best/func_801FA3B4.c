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

f32 func_801FA3B4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_fv1;
    f32 var_ft0;
    f32 var_fv0;
f32 __repair_var_fv0_1;

    temp_ft1 = arg6 - arg4;
    temp_ft2 = arg7 - arg5;
    if (temp_ft1 == 0.0f) {
        if (arg0 != arg2) {
            temp_fv1 = arg4 - arg0;
            if (temp_fv1 != 0.0f) {
                return temp_fv1 / (arg2 - arg0);
            }
            goto block_4;
        }
        goto block_4;
    }
    if (temp_ft2 != 0.0f) {
        temp_ft1_2 = 1.0f / temp_ft1;
        temp_ft2_2 = 1.0f / temp_ft2;
        var_ft0 = ((arg1 - arg5) * temp_ft2_2) - ((arg0 - arg4) * temp_ft1_2);
        var_fv0 = ((arg2 - arg0) * temp_ft1_2) - ((arg3 - arg1) * temp_ft2_2);
        goto block_14;
    }
    if (arg0 == arg2) {
        var_ft0 = arg5 - arg1;
        if (var_ft0 != 0.0f) {
            __repair_var_fv0_1 = arg3 - arg1;
block_14:
            return var_ft0 / __repair_var_fv0_1;
        }
    }
block_4:
    return 0.5f;
}
