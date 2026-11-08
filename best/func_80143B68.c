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

f32 func_801F99A8(s32);                             /* extern */
f32 func_801F99F0(s32);                             /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;
extern f32 D_80187BE4;

void func_80143B68(s32 arg0) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    u16 temp_a0;
    void *temp_s0;

    temp_s0 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_fv1 = D_80187BE4 + 0.5f;
    M2C_FIELD(temp_s0, f32 *, 0x44) = (f32) -(temp_fv1 * 0.00765765f * 5.0f);
    M2C_FIELD(temp_s0, f32 *, 0x4C) = (f32) -(temp_fv1 * 0.9977477f * 5.0f);
    M2C_FIELD(temp_s0, f32 *, 0x18) = (f32) ((2.0f * M2C_FIELD(temp_s0, f32 *, 0x44)) + M2C_FIELD(temp_s0, f32 *, 0x18));
    M2C_FIELD(temp_s0, f32 *, 0x20) = (f32) ((2.0f * M2C_FIELD(temp_s0, f32 *, 0x4C)) + M2C_FIELD(temp_s0, f32 *, 0x20));
    temp_a0 = M2C_FIELD(temp_s0, u16 *, 0x40) - 1;
    M2C_FIELD(temp_s0, u16 *, 0x40) = temp_a0;
    M2C_FIELD(temp_s0, f32 *, 0x1C) = (f32) (func_801F99A8((temp_a0 & 0x1F) * 8) + M2C_FIELD(temp_s0, f32 *, 0x1C));
    temp_fv1_2 = (func_801F99F0((M2C_FIELD(temp_s0, u16 *, 0x40) & 0x3F) * 4) * 127.0f) + 127.0f;
    if (temp_fv1_2 >= 2.1474836e9f) {
        M2C_FIELD(temp_s0, s8 *, 0xC) = (s8) ((s32) (temp_fv1_2 - 2.1474836e9f) | 0x80000000);
    } else {
        M2C_FIELD(temp_s0, s8 *, 0xC) = (s8) (s32) temp_fv1_2;
    }
    if (M2C_FIELD(temp_s0, f32 *, 0x20) < -4000.0f) {
        *(&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
    }
}
