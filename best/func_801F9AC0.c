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

extern f64 D_801FB2C0;
extern f64 D_801FB2C8;
extern f64 D_801FB2D0;
extern f64 D_801FB2D8;
extern f64 D_801FB2E0;

f32 func_801F9AC0(f32 arg0) {
    f32 var_fa0;
    f64 temp_fv0;
    f64 temp_fv1;
    f64 var_ft0;
    f64 var_fv0;
    s32 var_a0;
    s32 var_v1;

    var_fa0 = arg0;
    var_a0 = 1;
    if (var_fa0 > 1.0f) {
        var_fa0 = 1.0f / var_fa0;
    } else {
        var_a0 = -1;
        if (var_fa0 < -1.0f) {
            var_fa0 = 1.0f / var_fa0;
        } else {
            var_a0 = 0;
        }
    }
    var_ft0 = 0.0;
    var_v1 = 0x18;
    __repair_rows: {
        temp_fv1 = (f64) ((f32) (var_v1 * var_v1) * var_fa0 * var_fa0);
        temp_fv0 = (f64) ((var_v1 * 2) + 1) + var_ft0;
        var_v1 -= 1;
        var_ft0 = temp_fv1 / temp_fv0;
    }
if (var_v1 > 0) goto __repair_rows;
    if (var_a0 > 0) {
        var_fv0 = D_801FB2C8 - ((f64) var_fa0 / (var_ft0 + D_801FB2C0));
    } else if (var_a0 < 0) {
        var_fv0 = D_801FB2E0 - ((f64) var_fa0 / (var_ft0 + D_801FB2D8));
    } else {
        var_fv0 = (f64) var_fa0 / (var_ft0 + D_801FB2D0);
    }
    return (f32) var_fv0;
}
