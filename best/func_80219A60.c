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

f32 __cosf(f32, s32);                               /* extern */
extern M2C_UNK D_8011F2F0;
extern f64 D_8021E0C8;
extern f64 D_8021E0D0;

void func_80219A60(s32 arg0) {
    f32 temp_fv0;
    s32 temp_a0;
    void *temp_s0;

    temp_a0 = arg0 & 0xFFFF;
    temp_s0 = (temp_a0 * 0x64) + &D_8011F2F0;
    if (M2C_FIELD(temp_s0, u16 *, 0x3E) == 0) {
        M2C_FIELD(temp_s0, f32 *, 0x48) = (f32) M2C_FIELD(temp_s0, f32 *, 0x24);
        if (M2C_FIELD(temp_s0, u8 *, 0) == 0) {
            M2C_FIELD(temp_s0, f32 *, 0x44) = 180.0f;
        }
        M2C_FIELD(temp_s0, u16 *, 0x3E) = 1U;
    }
    temp_fv0 = M2C_FIELD(temp_s0, f32 *, 0x44) + 1.0f;
    M2C_FIELD(temp_s0, f32 *, 0x44) = temp_fv0;
    if (temp_fv0 > 360.0f) {
        M2C_FIELD(temp_s0, f32 *, 0x44) = (f32) (temp_fv0 - 360.0f);
    }
    M2C_FIELD(temp_s0, f32 *, 0x2C) = (f32) (__cosf((f32) (((f64) M2C_FIELD(temp_s0, f32 *, 0x44) * D_8021E0C8) / D_8021E0D0), temp_a0) * 30.0f);
    M2C_FIELD(temp_s0, u8 *, 0) = (u8) (M2C_FIELD(temp_s0, u8 *, 0) + 1);
}
