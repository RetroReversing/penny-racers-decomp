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
extern M2C_UNK D_8011F2FC;
extern M2C_UNK D_80221080;
extern M2C_UNK D_80221084;
extern M2C_UNK D_80221088;
extern M2C_UNK D_8022108C;
extern M2C_UNK D_80221090;
extern M2C_UNK D_80221094;

void func_80149A80(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a0;

    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    temp_a0 = temp_v0 + &D_8011F2F0;
    if (M2C_FIELD(temp_a0, u16 *, 0x3E) == 0) {
        temp_v0_2 = (*(&D_8011F2FC + temp_v0) & 0xFFFF) * 0x24;
        *(&D_8022108C + temp_v0_2) = M2C_FIELD(temp_a0, f32 *, 0x18);
        *(&D_80221090 + temp_v0_2) = M2C_FIELD(temp_a0, f32 *, 0x1C);
        *(&D_80221094 + temp_v0_2) = M2C_FIELD(temp_a0, f32 *, 0x20);
        *(&D_80221080 + temp_v0_2) = M2C_FIELD(temp_a0, f32 *, 0x24);
        *(&D_80221084 + temp_v0_2) = M2C_FIELD(temp_a0, f32 *, 0x28);
        *(&D_80221088 + temp_v0_2) = M2C_FIELD(temp_a0, f32 *, 0x2C);
        M2C_FIELD(temp_a0, u16 *, 0x3E) = 1U;
    }
}
