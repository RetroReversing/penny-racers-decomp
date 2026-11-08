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
extern M2C_UNK D_800DB1B8;
extern s8 D_801C6BB9;
extern M2C_UNK D_801C6BC0;
extern s8 D_801C7068;
extern M2C_UNK D_80221080;
extern M2C_UNK D_80221084;
extern M2C_UNK D_80221088;
extern M2C_UNK D_8022108C;
extern M2C_UNK D_80221090;
extern M2C_UNK D_80221094;

void func_801AEFBC(void) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_ft0;
    f32 temp_fv1;
    s32 temp_s0;
    s32 temp_s1;

    temp_fv1 = (f32) D_801C7068;
    M2C_FIELD(&D_801C6BC0, f32 *, 0) = temp_fv1;
    temp_ft0 = (f32) D_801C6BB9;
    M2C_FIELD(&D_801C6BC0, f32 *, 4) = temp_ft0;
    M2C_FIELD(&D_801C6BC0, f32 *, 8) = 2000.0f;
    M2C_FIELD(&D_801C6BC0, f32 *, 0xC) = 0.0f;
    M2C_FIELD(&D_801C6BC0, f32 *, 0x10) = 85.0f;
    temp_s1 = M2C_FIELD(&D_800DB1B8, s16 *, 0x210C) * 0x24;
    *(&D_8022108C + temp_s1) = temp_fv1 * 400.0f * 0.5f;
    *(&D_80221090 + temp_s1) = 20.0f;
    *(&D_80221094 + temp_s1) = temp_ft0 * 400.0f * 0.5f;
    temp_fs1 = __sinf((M2C_FIELD(&D_801C6BC0, f32 *, 0xC) * 3.1415927f) / 180.0f) * M2C_FIELD(&D_801C6BC0, f32 *, 8);
    temp_fs0 = __sinf((M2C_FIELD(&D_801C6BC0, f32 *, 0xC) * 3.1415927f) / 180.0f);
    *(&D_80221080 + temp_s1) = (temp_fs1 - (temp_fs0 * __sinf((M2C_FIELD(&D_801C6BC0, f32 *, 0x10) * 3.1415927f) / 180.0f) * M2C_FIELD(&D_801C6BC0, f32 *, 8))) + *(&D_8022108C + temp_s1);
    *(&D_80221084 + temp_s1) = (__sinf((M2C_FIELD(&D_801C6BC0, f32 *, 0x10) * 3.1415927f) / 180.0f) * M2C_FIELD(&D_801C6BC0, f32 *, 8)) + *(&D_80221090 + temp_s1);
    temp_fs1_2 = __cosf((M2C_FIELD(&D_801C6BC0, f32 *, 0xC) * 3.1415927f) / 180.0f) * M2C_FIELD(&D_801C6BC0, f32 *, 8);
    temp_fs0_2 = __cosf((M2C_FIELD(&D_801C6BC0, f32 *, 0xC) * 3.1415927f) / 180.0f);
    *(&D_80221088 + temp_s1) = (temp_fs1_2 - (temp_fs0_2 * __sinf((M2C_FIELD(&D_801C6BC0, f32 *, 0x10) * 3.1415927f) / 180.0f) * M2C_FIELD(&D_801C6BC0, f32 *, 8))) + *(&D_80221094 + temp_s1);
    temp_s0 = M2C_FIELD((&D_800DB1B8 + 0x210C), s16 *, 0x28) * 0x24;
    *(&D_8022108C + temp_s0) = 0.0f;
    *(&D_80221090 + temp_s0) = -65.0f;
    *(&D_80221094 + temp_s0) = 0.0f;
    temp_fs1_3 = __sinf(0.0f) * 1050.0f;
    temp_fs0_3 = __sinf(0.0f);
    *(&D_80221080 + temp_s0) = (temp_fs1_3 - (temp_fs0_3 * __sinf(0.69813174f) * 1050.0f)) + *(&D_8022108C + temp_s0);
    *(&D_80221084 + temp_s0) = (__sinf(0.69813174f) * 1050.0f) + *(&D_80221090 + temp_s0);
    temp_fs1_4 = __cosf(0.0f) * 1050.0f;
    temp_fs0_4 = __cosf(0.0f);
    *(&D_80221088 + temp_s0) = (temp_fs1_4 - (temp_fs0_4 * __sinf(0.69813174f) * 1050.0f)) + *(&D_80221094 + temp_s0);
}
