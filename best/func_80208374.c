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

s32 func_80205D48(M2C_UNK, M2C_UNK, u8);            /* extern */
M2C_UNK func_80205E04(M2C_UNK *, M2C_UNK, u8);      /* extern */
M2C_UNK func_80205EBC(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80211C7C(M2C_UNK);                     /* extern */
extern M2C_UNK D_8021B01C;
extern M2C_UNK D_8021B020;
extern s32 D_8021B080;
extern u8 D_8021B084;
extern s32 D_8021B128;
extern M2C_UNK D_8021E19E;

void func_80208374(void) {
    M2C_FIELD(&D_8021E19E, u8 *, 0) = (u8) (M2C_FIELD(&D_8021E19E, u8 *, 0) - 8);
    func_80205E04(&D_8021B01C, 0x422C0000, D_8021B084);
    func_80205EBC(&D_8021B020, 0x42200000, 0xC0400000, 0x3E4CCCCD, (s32) D_8021B084);
    func_80211C7C(0x14);
    if ((M2C_FIELD(&D_8021E19E, s16 *, 4) == 0) && (D_8021B128 != 1)) {
        D_8021B080 = func_80205D48(0x41A00000, 0x40800000, D_8021B084);
    }
    if (D_8021B084 == 0) {
        D_8021B084 = 1;
    }
}
