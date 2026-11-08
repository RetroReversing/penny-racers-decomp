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

void func_801434CC(s32 arg0) {
    s32 temp_a0;
    void *temp_v1;

    temp_a0 = (arg0 & 0xFFFF) * 0x64;
    temp_v1 = temp_a0 + &D_8011F2F0;
    M2C_FIELD(temp_v1, f32 *, 0x44) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x44) * 0.95f);
    M2C_FIELD(temp_v1, f32 *, 0x48) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x48) - ((f32) M2C_FIELD(temp_v1, u16 *, 0x40) * 0.1f));
    M2C_FIELD(temp_v1, f32 *, 0x4C) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x4C) * 0.95f);
    M2C_FIELD(temp_v1, f32 *, 0x18) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x18) + M2C_FIELD(temp_v1, f32 *, 0x44));
    M2C_FIELD(temp_v1, f32 *, 0x1C) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x1C) + M2C_FIELD(temp_v1, f32 *, 0x48));
    M2C_FIELD(temp_v1, f32 *, 0x20) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x20) + M2C_FIELD(temp_v1, f32 *, 0x4C));
    M2C_FIELD(temp_v1, u8 *, 0xC) = (u8) (M2C_FIELD(temp_v1, u8 *, 0xC) - 0xA);
    if ((u8) M2C_FIELD(temp_v1, u8 *, 0xC) < 0xFU) {
        *(&D_8011F2FD + temp_a0) = 2;
    }
}
