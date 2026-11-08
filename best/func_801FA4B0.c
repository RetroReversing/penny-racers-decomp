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

f32 func_801FA4B0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    f32 temp_ft1;
    f32 temp_ft2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_ft1;
    f32 var_ft2;

    var_ft1 = arg6;
    var_ft2 = arg7;
    if (!(var_ft1 > 0.0f)) {
        if (-var_ft1 < 0.00001f) {
            goto block_6;
        }
    } else if (var_ft1 < 0.00001f) {
block_6:
        var_ft1 = 0.0f;
    }
    if (!(var_ft2 > 0.0f)) {
        if (-var_ft2 < 0.00001f) {
            goto block_13;
        }
    } else if (var_ft2 < 0.00001f) {
block_13:
        var_ft2 = 0.0f;
    }
    if (var_ft1 == 0.0f) {
        if (arg0 != arg2) {
            temp_fv1_2 = arg4 - arg0;
            if (temp_fv1_2 != 0.0f) {
                return temp_fv1_2 / (arg2 - arg0);
            }
            goto block_18;
        }
        goto block_18;
    }
    if (var_ft2 != 0.0f) {
        temp_ft1 = 1.0f / var_ft1;
        temp_ft2 = 1.0f / var_ft2;
        return (((arg1 - arg5) * temp_ft2) - ((arg0 - arg4) * temp_ft1)) / (((arg2 - arg0) * temp_ft1) - ((arg3 - arg1) * temp_ft2));
    }
    if (arg0 == arg2) {
        temp_fv1 = arg5 - arg1;
        if (temp_fv1 != 0.0f) {
            return temp_fv1 / (arg3 - arg1);
        }
    }
block_18:
    return 0.5f;
}
