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

extern f64 D_8004A538;
extern f64 D_8004A540;
extern f64 D_8004A548;
extern f64 D_8004A550;
extern f64 D_8004A558;
extern f64 D_8004A560;
extern f64 D_8004A568;
extern f32 D_8004A570;
extern f64 D_8004A578;
extern f64 D_8004A580;
extern f32 D_8004AA00;

f32 func_80032320(f32 arg0) {
    f32 var_ft0;
    f64 temp_ft0;
    f64 temp_ft0_2;
    f64 temp_ft0_3;
    f64 temp_ft1;
    f64 temp_ft1_2;
    f64 temp_fv0;
    f64 var_fv0;
    s32 temp_fv1;

    if (((M2C_BITWISE(s32, arg0) >> 0x16) & 0x1FF) < 0x136) {
        var_ft0 = arg0;
        if (!(arg0 > 0.0f)) {
            var_ft0 = -arg0;
        }
        temp_ft1 = (f64) var_ft0;
        temp_ft0 = (temp_ft1 * D_8004A558) + D_8004A578;
        if (!(temp_ft0 >= 0.0)) {
            var_fv0 = temp_ft0 - D_8004A578;
        } else {
            var_fv0 = temp_ft0 + D_8004A578;
        }
        temp_fv1 = (s32) var_fv0;
        temp_ft0_2 = (f64) temp_fv1 - D_8004A580;
        temp_ft1_2 = (temp_ft1 - (temp_ft0_2 * D_8004A560)) - (temp_ft0_2 * D_8004A568);
        temp_ft0_3 = temp_ft1_2 * temp_ft1_2;
        temp_fv0 = temp_ft1_2 + (temp_ft1_2 * temp_ft0_3 * ((((((D_8004A550 * temp_ft0_3) + D_8004A548) * temp_ft0_3) + D_8004A540) * temp_ft0_3) + D_8004A538));
        if (!(temp_fv1 & 1)) {
            return (f32) temp_fv0;
        }
        return -(f32) temp_fv0;
    }
    if (arg0 == arg0) {
        return D_8004A570;
    }
    return D_8004AA00;
}
