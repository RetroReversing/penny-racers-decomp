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

f32 __cosf(f32);                                    /* extern */
f32 __sinf(f32);                                    /* extern */
M2C_UNK func_8013AE60(s32);                         /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;

void func_80157F6C(s32 arg0) {
    f32 temp_fa0;
    f32 temp_fv1;
    s32 temp_s0;
    void *temp_s0_2;

    temp_s0 = arg0 & 0xFFFF;
    func_8013AE60(temp_s0);
    temp_s0_2 = (temp_s0 * 0x64) + &D_8011F2F0;
    temp_fv1 = M2C_FIELD(temp_s0_2, f32 *, 0x1C);
    if (temp_fv1 < -50.0f) {
        M2C_FIELD(temp_s0_2, f32 *, 0x1C) = (f32) (temp_fv1 + 1.4f);
        temp_fa0 = M2C_FIELD(temp_s0_2, f32 *, 0x44) + 0.05f;
        M2C_FIELD(temp_s0_2, f32 *, 0x44) = temp_fa0;
        if (arg0 & 1) {
            M2C_FIELD(temp_s0_2, f32 *, 0x18) = (f32) (__sinf(temp_fa0) + M2C_FIELD(temp_s0_2, f32 *, 0x18));
            M2C_FIELD(temp_s0_2, f32 *, 0x20) = (f32) (__cosf(M2C_FIELD(temp_s0_2, f32 *, 0x44)) + M2C_FIELD(temp_s0_2, f32 *, 0x20));
            return;
        }
        M2C_FIELD(temp_s0_2, f32 *, 0x18) = (f32) (M2C_FIELD(temp_s0_2, f32 *, 0x18) - __cosf(M2C_FIELD(temp_s0_2, f32 *, 0x44)));
        M2C_FIELD(temp_s0_2, f32 *, 0x20) = (f32) (M2C_FIELD(temp_s0_2, f32 *, 0x20) - __sinf(M2C_FIELD(temp_s0_2, f32 *, 0x44)));
        return;
    }
    *(&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
}
