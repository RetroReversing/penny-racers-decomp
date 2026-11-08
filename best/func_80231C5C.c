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

u16 func_800DE41C();
extern char D_8011F350[];
extern u16 D_8018BC3C;
extern char D_801CE928[];
extern char D_801CEC2C[];
extern s8 D_801D59A0;

void func_80231C5C(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    D_8018BC3C = func_800DE41C(0, 0, 3, 0, 0xA0, 0xFF, 0, &D_801CE928, &D_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0);
    temp_v0 = D_8018BC3C * 0x64;
    *(D_8011F350 + temp_v0) = &D_801D59A0;
    D_801D59A0 = 0;
    M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 2) = 0x46;
    M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 4) = 0;
    M2C_FIELD(*(D_8011F350 + temp_v0), u8 *, 6) = 0xFF;
    M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), u8 *, 7) = 0xFF;
    M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), u8 *, 8) = 0xFF;
    M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), u8 *, 9) = 0xFF;
    temp_v0_2 = D_8018BC3C * 0x64;
    M2C_FIELD(*(D_8011F350 + temp_v0_2), s16 *, 0xA) = 0;
    M2C_FIELD(*(D_8011F350 + temp_v0_2), s16 *, 0xC) = 0;
    M2C_FIELD(*(D_8011F350 + temp_v0_2), s16 *, 0xE) = 0x140;
    M2C_FIELD(*(D_8011F350 + temp_v0_2), s16 *, 0x10) = 0xF0;
}
