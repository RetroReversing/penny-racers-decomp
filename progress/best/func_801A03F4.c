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
extern f32 D_801C6BCC;
extern M2C_UNK D_80221080;
extern M2C_UNK D_80221084;
extern M2C_UNK D_80221088;
extern M2C_UNK D_8022108C;
extern M2C_UNK D_80221090;
extern M2C_UNK D_80221094;

void func_801A03F4(void) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs1;
    f32 temp_fs1_2;
    s32 temp_s0;

    temp_s0 = M2C_FIELD(&D_800DB1B8, s16 *, 0x2134) * 0x24;
    temp_fs1 = __sinf((D_801C6BCC * 3.1415927f) / 180.0f) * 1050.0f;
    temp_fs0 = __sinf((D_801C6BCC * 3.1415927f) / 180.0f);
    *(&D_80221080 + temp_s0) = (temp_fs1 - (temp_fs0 * __sinf(0.69813174f) * 1050.0f)) + *(&D_8022108C + temp_s0);
    *(&D_80221084 + temp_s0) = (__sinf(0.69813174f) * 1050.0f) + *(&D_80221090 + temp_s0);
    temp_fs1_2 = __cosf((D_801C6BCC * 3.1415927f) / 180.0f) * 1050.0f;
    temp_fs0_2 = __cosf((D_801C6BCC * 3.1415927f) / 180.0f);
    *(&D_80221088 + temp_s0) = (temp_fs1_2 - (temp_fs0_2 * __sinf(0.69813174f) * 1050.0f)) + *(&D_80221094 + temp_s0);
}
