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

extern char D_8011F350[];
extern u16 D_8018BC3C;

void func_801B77F8(void) {
    u16 *__base_D_8018BC3C;
    s32 temp_v0;
    s32 temp_v0_2;

    __base_D_8018BC3C = &D_8018BC3C;
    *(s32 *)*(s32 *)(D_8011F350 + ((*(&D_8018BC3C)) * 0x64)) = 0;
    temp_v0 = (*__base_D_8018BC3C) * 0x64;
    M2C_FIELD(*(s32 *)(D_8011F350 + temp_v0), s16 *, 2) = 5;
    M2C_FIELD(*(s32 *)(D_8011F350 + temp_v0), s16 *, 4) = 0;
    M2C_FIELD(*(s32 *)(D_8011F350 + temp_v0), s8 *, 6) = 0;
    M2C_FIELD(*(s32 *)(D_8011F350 + ((*__base_D_8018BC3C) * 0x64)), s8 *, 7) = 0;
    M2C_FIELD(*(s32 *)(D_8011F350 + ((*__base_D_8018BC3C) * 0x64)), s8 *, 8) = 0;
    M2C_FIELD(*(s32 *)(D_8011F350 + ((*__base_D_8018BC3C) * 0x64)), u8 *, 9) = 0x99;
    temp_v0_2 = (*__base_D_8018BC3C) * 0x64;
    M2C_FIELD(*(s32 *)(D_8011F350 + temp_v0_2), s16 *, 0xA) = 0;
    M2C_FIELD(*(s32 *)(D_8011F350 + temp_v0_2), s16 *, 0xC) = 0;
    M2C_FIELD(*(s32 *)(D_8011F350 + temp_v0_2), s16 *, 0xE) = 0x140;
    M2C_FIELD(*(s32 *)(D_8011F350 + temp_v0_2), s16 *, 0x10) = 0xF0;
}
