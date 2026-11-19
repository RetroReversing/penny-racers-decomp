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
s32 func_800DF170();
extern char D_8011F350[];
extern char D_801CE928[];
extern char D_801E9748[];
extern u16 D_801E979C;
extern u16 D_801E9B32;
extern s32 func_801CEC2C;
extern s32 func_801D8EF0;
extern s32 func_801DAD68;

void func_801DDA5C(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    D_801E9B32 = func_800DE41C(0, 0, 3, 0, 0xE1, 0xFF, 0, D_801CE928, &func_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    *(D_8011F350 + (D_801E9B32 * 0x64)) = D_801E9748;
    func_800DF170(D_801E9B32);
    *(s32 *)*(D_8011F350 + (D_801E9B32 * 0x64)) = 0;
    temp_v0 = D_801E9B32 * 0x64;
    M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 2) = 0x14;
    M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 4) = 0;
    M2C_FIELD(*(D_8011F350 + temp_v0), s8 *, 6) = 0;
    M2C_FIELD(*(D_8011F350 + (D_801E9B32 * 0x64)), s8 *, 7) = 0;
    M2C_FIELD(*(D_8011F350 + (D_801E9B32 * 0x64)), s8 *, 8) = 0;
    M2C_FIELD(*(D_8011F350 + (D_801E9B32 * 0x64)), s8 *, 9) = 0;
    temp_v0_2 = D_801E9B32 * 0x64;
    M2C_FIELD(*(D_8011F350 + temp_v0_2), s16 *, 0xA) = 0;
    M2C_FIELD(*(D_8011F350 + temp_v0_2), s16 *, 0xC) = 0;
    M2C_FIELD(*(D_8011F350 + temp_v0_2), s16 *, 0xE) = 0;
    M2C_FIELD(*(D_8011F350 + temp_v0_2), s16 *, 0x10) = 0;
    D_801E979C = func_800DE41C(0, 0, 3, 0, 0xEA, 0xFF, 0, &func_801D8EF0, &func_801DAD68, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
