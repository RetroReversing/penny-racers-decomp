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
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_802153C4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_80231C5C();                            /* extern */
extern M2C_UNK D_801D5A90;
extern M2C_UNK D_801D6670;
extern M2C_UNK D_801DF62C;
extern M2C_UNK D_801DFDEC;
extern s16 D_801E9D5E;
extern M2C_UNK func_80138B1C;

void func_801E0D38(void) {
    D_801E9D5E = func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, 0, NULL, &func_80138B1C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x80, 0xFF, 0, &D_801DF62C, &D_801DFDEC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80231C5C();
    func_80203DF8(0, 0x3C, 0xFF, 0xFF, 0xFF);
    func_801DDA5C();
    func_802153C4(0x41, 0, 0, 0, 0, 0xA0);
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, &D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, &D_801D6670, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
