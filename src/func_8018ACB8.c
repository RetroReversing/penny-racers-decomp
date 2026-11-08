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

s16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_801DDA5C();                            /* extern */
M2C_UNK func_80231C5C();                            /* extern */
extern M2C_UNK D_80138B1C;
extern M2C_UNK D_801D5A90;
extern M2C_UNK D_801D6670;
extern M2C_UNK D_801DDD8C;
extern M2C_UNK D_801DECB4;
extern s16 D_801E9B1A;
extern s16 D_801E9D5E;

void func_8018ACB8(void) {
    D_801E9D5E = func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, 0, NULL, &D_80138B1C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_801E9B1A = func_800DE41C(0, 0, 3, 0, 0x80, 0xFF, 0, &D_801DDD8C, &D_801DECB4, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80231C5C();
    func_801DDA5C();
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, &D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, &D_801D6670, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
