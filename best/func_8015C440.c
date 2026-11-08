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

M2C_UNK func_800294A0(M2C_UNK *, M2C_UNK *, s32);   /* extern */
u16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_1B0E50;
extern M2C_UNK D_1F9030;
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_8011F2F4;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_80196448;
extern M2C_UNK D_801B63E4;
extern M2C_UNK D_801B7204;
extern u16 D_801C7074;
extern s8 D_801C7ABD;
extern s8 D_801C7AD0;
extern M2C_UNK D_801D5A90;
extern M2C_UNK D_802D6890;

void func_8015C440(void) {
    s32 temp_v1;

    M2C_FIELD(&D_8006FAF0, s16 *, 0x20) = 0;
    temp_v1 = (func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, 0, NULL, &D_801B7204, 0, 0, 0, 0, 0, 0, 0, 0, 0) & 0xFFFF) * 0x64;
    *(&D_8011F2F4 + temp_v1) = *(&D_8011F2F4 + temp_v1) | 0x20;
    D_801C7074 = func_800DE41C(0, 0, 3, 0, 0x7C, 0, 0, &D_80196448, &D_801B63E4, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    *(&D_8011F32E + (D_801C7074 * 0x64)) = 0;
    D_801C7ABD = 0xF0;
    D_801C7AD0 = 0;
    func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, &D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800294A0(&D_1B0E50, &D_802D6890, &D_1F9030 - &D_1B0E50);
    func_80203DF8(1, 0x1E, 0, 0, 0);
}
