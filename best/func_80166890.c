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

extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;

void func_80166890(s32 arg0) {
    f32 temp_fv0;
    s32 temp_a2;
    u16 temp_v1;
    void *temp_a1;
    void *temp_v0;

    temp_a2 = (arg0 & 0xFFFF) * 0x64;
    temp_a1 = temp_a2 + &D_8011F2F0;
    temp_v0 = (M2C_FIELD(temp_a1, u8 *, 0) * 0x64) + &D_8011F2F0;
    M2C_FIELD(temp_a1, f32 *, 0x28) = (f32) (M2C_FIELD(temp_a1, f32 *, 0x28) + 20.0f);
    M2C_FIELD(temp_a1, f32 *, 0x18) = (f32) M2C_FIELD(temp_v0, f32 *, 0x18);
    M2C_FIELD(temp_a1, f32 *, 0x1C) = (f32) M2C_FIELD(temp_v0, f32 *, 0x1C);
    M2C_FIELD(temp_a1, f32 *, 0x20) = (f32) M2C_FIELD(temp_v0, f32 *, 0x20);
    M2C_FIELD(temp_a1, u8 *, 0xC) = (u8) (M2C_FIELD(temp_a1, u8 *, 0xC) - 5);
    if ((u8) M2C_FIELD(temp_a1, u8 *, 0xC) < 6U) {
        *(&D_8011F2FD + temp_a2) = 2;
    }
    temp_v1 = M2C_FIELD(temp_a1, u16 *, 0x3E);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_fv0 = M2C_FIELD(temp_a1, f32 *, 0x30) + 0.1f;
        M2C_FIELD(temp_a1, f32 *, 0x30) = temp_fv0;
        M2C_FIELD(temp_a1, f32 *, 0x38) = temp_fv0;
        if (M2C_FIELD(temp_a1, f32 *, 0x30) > 0.9f) {
            M2C_FIELD(temp_a1, u16 *, 0x3E) = 1U;
            return;
        }
        return;
    case 1:
        M2C_FIELD(temp_a1, f32 *, 0x38) = 0.21f;
        M2C_FIELD(temp_a1, f32 *, 0x30) = 0.21f;
        M2C_FIELD(temp_a1, f32 *, 0x34) = 0.6f;
        break;
    }
}
