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

extern f64 D_8004A8C8;
extern f64 D_8004A8D0;
extern f64 D_8004A8D8;

s32 func_80037F80(void *arg0, f32 arg1, s32 arg2) {
    f64 temp_fv1;
    f64 var_ft0;
    s32 var_a2;

    var_ft0 = (f64) arg2;
    if (arg2 < 0) {
        var_ft0 += D_8004A8D0;
    }
    temp_fv1 = ((f64) arg1 * D_8004A8C8 * (f64) M2C_FIELD(arg0, s16 *, 0x18)) / var_ft0;
    if (D_8004A8D8 > temp_fv1) {
        var_a2 = (s32) temp_fv1;
    } else {
        var_a2 = (s32) (temp_fv1 - D_8004A8D8) | 0x80000000;
    }
    return var_a2;
}
