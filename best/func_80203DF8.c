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

void func_80203DF8(s8 arg0, s16 arg1, s8 arg2, s8 arg3, u8 arg4) {
    s32 temp_a0;
    s32 temp_v0;

    *(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) = 0;
    temp_a0 = D_8018BC3C * 0x64;
    M2C_FIELD(*(D_8011F350 + temp_a0), s16 *, 2) = arg1;
    M2C_FIELD(*(D_8011F350 + temp_a0), s16 *, 4) = 0;
    if ((arg0 & 0xFF) == 2) {
        M2C_FIELD(*(D_8011F350 + temp_a0), s8 *, 6) = arg2;
        M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), s8 *, 7) = arg3;
        M2C_FIELD(*(D_8011F350 + (D_8018BC3C * 0x64)), u8 *, 8) = arg4;
    }
    temp_v0 = D_8018BC3C * 0x64;
    M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 0xA) = 0;
    M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 0xC) = 0;
    M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 0xE) = 0x140;
    M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 0x10) = 0xF0;
    *(s32 *)*(D_8011F350 + temp_v0) = arg0;
}
