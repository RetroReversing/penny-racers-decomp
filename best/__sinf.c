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

extern f64 D_8004A5F8;
extern f64 D_8004A600;
extern f64 D_8004A608;
extern f64 D_8004A610;
extern f64 D_8004A618;
extern f64 D_8004A620;
extern f64 D_8004A628;
extern f32 D_8004A630;
extern f64 D_8004A638;
extern f64 D_8004A640;
extern f32 D_8004AA00;

f32 __sinf(f32 arg0) {
    f64 temp_ft0;
    f64 temp_ft0_2;
    f64 temp_ft0_3;
    f64 temp_ft0_4;
    f64 temp_ft1;
    f64 temp_ft1_2;
    f64 temp_ft1_3;
    f64 temp_fv0;
    f64 var_fv0;
    s32 temp_fv1;
    s32 temp_v1;

    temp_v1 = (M2C_BITWISE(s32, arg0) >> 0x16) & 0x1FF;
    if (temp_v1 < 0xFF) {
        temp_ft1 = (f64) arg0;
        if (temp_v1 >= 0xE6) {
            temp_ft0 = temp_ft1 * temp_ft1;
            return (f32) (temp_ft1 + (temp_ft1 * temp_ft0 * ((((((D_8004A610 * temp_ft0) + D_8004A608) * temp_ft0) + D_8004A600) * temp_ft0) + D_8004A5F8)));
        }
        return arg0;
    }
    if (temp_v1 < 0x136) {
        temp_ft1_2 = (f64) arg0;
        temp_ft0_2 = temp_ft1_2 * D_8004A618;
        if (temp_ft0_2 >= 0.0) {
            var_fv0 = temp_ft0_2 + D_8004A638;
        } else {
            var_fv0 = temp_ft0_2 - D_8004A640;
        }
        temp_fv1 = (s32) var_fv0;
        temp_ft0_3 = (f64) temp_fv1;
        temp_ft1_3 = (temp_ft1_2 - (temp_ft0_3 * D_8004A620)) - (temp_ft0_3 * D_8004A628);
        temp_ft0_4 = temp_ft1_3 * temp_ft1_3;
        temp_fv0 = temp_ft1_3 + (temp_ft1_3 * temp_ft0_4 * ((((((D_8004A610 * temp_ft0_4) + D_8004A608) * temp_ft0_4) + D_8004A600) * temp_ft0_4) + D_8004A5F8));
        if (!(temp_fv1 & 1)) {
            return (f32) temp_fv0;
        }
        return -(f32) temp_fv0;
    }
    if (arg0 == arg0) {
        return D_8004A630;
    }
    return D_8004AA00;
}
