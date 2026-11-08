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

extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F308;
extern f64 D_8021DDD0;
extern M2C_UNK D_8021EECC;

void func_80211A84(s32 arg0) {
    f32 temp_ft3;
    f32 temp_fv0;
    f64 temp_ft0;
    f64 temp_ft1;
    s32 temp_a0;

    temp_a0 = (arg0 & 0xFFFF) * 0x64;
    temp_fv0 = ((*(&D_8011F308 + temp_a0) - M2C_FIELD(&D_8021EECC, f32 *, 0)) / 6.0f) + M2C_FIELD(&D_8021EECC, f32 *, 0);
    M2C_FIELD(&D_8021EECC, f32 *, 0) = temp_fv0;
    temp_ft3 = *(&D_8011F308 + temp_a0);
    temp_ft1 = (f64) temp_ft3;
    temp_ft0 = (f64) temp_fv0;
    if (((temp_ft1 - D_8021DDD0) < temp_ft0) && (temp_ft0 < (temp_ft1 + D_8021DDD0))) {
        M2C_FIELD(&D_8021EECC, f32 *, 0) = temp_ft3;
        M2C_FIELD(&D_8021EECC, s32 *, 0xD4) = (s32) (M2C_FIELD(&D_8021EECC, s32 *, 0xD4) & ~0x2000);
        *(&D_8011F2FD + temp_a0) = 2;
    }
}
