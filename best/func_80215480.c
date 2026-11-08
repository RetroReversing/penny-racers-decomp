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

extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F320[];
extern char D_8011F324[];
extern f64 D_8021DE90;
extern f64 D_8021DE98;
extern f64 D_8021DEA0;
extern f64 D_8021DEA8;

void func_80215480(s32 arg0) {
    f64 temp_fv1;
    f64 temp_fv1_2;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    var_v1 = arg0 & 0xFFFF;
    temp_v0 = var_v1 * 0x64;
    *(D_8011F320 + temp_v0) = *(D_8011F320 + temp_v0) + *(D_8011F308 + temp_v0);
    *(D_8011F324 + temp_v0) = *(D_8011F324 + temp_v0) + *(D_8011F30C + temp_v0);
    temp_fv1 = (f64) *(D_8011F320 + temp_v0);
    var_v0 = var_v1 * 2;
    if ((D_8021DE90 <= temp_fv1) || (temp_fv1 <= D_8021DE98)) {
        *(D_8011F320 + (var_v1 * 0x64)) = 0;
        var_v1 = arg0 & 0xFFFF;
        var_v0 = var_v1 * 2;
    }
    temp_fv1_2 = (f64) *(D_8011F324 + ((((var_v0 + var_v1) * 8) + var_v1) * 4));
    if ((D_8021DEA0 <= temp_fv1_2) || (temp_fv1_2 <= D_8021DEA8)) {
        *(D_8011F324 + (var_v1 * 0x64)) = 0;
    }
}
