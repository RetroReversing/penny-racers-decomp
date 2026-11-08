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
M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80143DCC();                            /* extern */
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80214204(s32);                         /* extern */
M2C_UNK func_802153C4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_412160;
extern M2C_UNK D_419270;
extern M2C_UNK D_80212500;
extern M2C_UNK D_802134EC;
extern s32 D_8021AFDC;
extern s8 D_8021B084;
extern s8 D_8021B677;
extern s8 D_8021E15F;
extern s8 D_8021E160;
extern M2C_UNK D_8030BD90;

void func_80212360(void) {
    func_800294A0(&D_412160, &D_8030BD90, &D_419270 - &D_412160);
    func_80143DCC();
    D_8021B677 = 0;
    if ((((D_8021AFDC == 2) | (D_8021AFDC == 6)) != 0) || (D_8021AFDC == 0x18)) {
        D_8021E15F = 0;
        func_80214204(D_8021AFDC);
    }
    if (D_8021AFDC == 0x10) {
        D_8021E160 = 1;
    } else {
        D_8021E160 = 0;
    }
    func_80203DF8(1, 6, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x42, 0, 0, &D_80212500, &D_802134EC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_802153C4(0x40, 0xBF000000, 0x3F000000, 0x96, 0x62, 0xE2);
    D_8021B084 = 0;
}
