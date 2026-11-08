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

extern M2C_UNK func_8011EDAC;
extern M2C_UNK func_8021C010;

void func_8021B6B0(s32 arg0) {
    f64 temp_fv1;
    f64 temp_fv1_2;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    var_v1 = arg0 & 0xFFFF;
    temp_v0 = var_v1 * 0x64;
    *(&func_8011EDAC + 0x574 + temp_v0) = *(&func_8011EDAC + 0x574 + temp_v0) + *(&func_8011EDAC + 0x55C + temp_v0);
    *(&func_8011EDAC + 0x578 + temp_v0) = *(&func_8011EDAC + 0x578 + temp_v0) + *(&func_8011EDAC + 0x560 + temp_v0);
    temp_fv1 = (f64) *(&func_8011EDAC + 0x574 + temp_v0);
    var_v0 = var_v1 * 2;
    if ((M2C_FIELD(&func_8021C010, f64 *, 0x1E80) <= temp_fv1) || (temp_fv1 <= M2C_FIELD(&func_8021C010, f64 *, 0x1E88))) {
        *(&func_8011EDAC + 0x574 + (var_v1 * 0x64)) = 0;
        var_v1 = arg0 & 0xFFFF;
        var_v0 = var_v1 * 2;
    }
    temp_fv1_2 = (f64) *(&func_8011EDAC + 0x578 + ((((var_v0 + var_v1) * 8) + var_v1) * 4));
    if ((M2C_FIELD(&func_8021C010, f64 *, 0x1E90) <= temp_fv1_2) || (temp_fv1_2 <= M2C_FIELD(&func_8021C010, f64 *, 0x1E98))) {
        *(&func_8011EDAC + 0x578 + (var_v1 * 0x64)) = 0;
    }
}
