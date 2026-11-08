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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_800E067C();                            /* extern */
M2C_UNK func_8013ADA8();                            /* extern */
M2C_UNK func_8013DE3C(M2C_UNK *);                   /* extern */
M2C_UNK func_801CF468(u16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801FA338(M2C_UNK);                     /* extern */
M2C_UNK func_80217F44(s32);                         /* extern */
M2C_UNK func_8021F6A0(M2C_UNK);                     /* extern */
M2C_UNK func_8022F780(u16);                         /* extern */
M2C_UNK func_802312F8(M2C_UNK);                     /* extern */
M2C_UNK func_80231A0C();                            /* extern */
M2C_UNK func_80231E30();                            /* extern */
M2C_UNK func_80232360(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK D_8006FAF0;
extern u16 D_8018BC3C;
extern M2C_UNK D_8021C0F8;
extern u8 D_8021C110;
extern u8 D_8021C112;
extern s8 D_8021E144;
extern M2C_UNK D_8021F260;
extern M2C_UNK D_8022B060;
extern M2C_UNK func_802178B4;
extern M2C_UNK func_80218288;
extern M2C_UNK func_80218788;

void func_80217660(void) {
    func_801CF468(D_8018BC3C, 0xFF, 0xFF, 0xFF);
    func_801FA338(0);
    func_80231A0C();
    M2C_FIELD(&D_8006FAF0, u16 *, 0x20) = (u16) M2C_FIELD(*(&D_8021C0F8 + (D_8021C112 * 4)), u8 *, 0x1E);
    func_80231E30();
    D_8021E144 = 1;
    func_8022F780(M2C_FIELD(&D_8006FAF0, u16 *, 0x20));
    func_800E067C();
    func_802312F8(0);
    func_80217F44(*(&D_8021C0F8 + (D_8021C112 * 4)));
    func_8021F6A0(1);
    M2C_FIELD((&D_8006FAF0 + 0x20), s8 *, 8) = 1;
    func_800DE41C(0, 0, 3, 0, 0x80, 1, 0, &func_80218288, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8013ADA8();
    func_80232360(0, 1);
    func_80232360(1, 2);
    func_80232360(2, 1);
    func_80232360(3, 2);
    func_80232360(4, 1);
    func_80232360(5, 2);
    func_800DE41C(0, 0, 3, 0, 0x5E, 0, 0, &func_802178B4, &func_80218788, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if ((u8) D_8021C112 >= 5U) {
        D_8021C112 = 0;
    } else {
        D_8021C112 += 1;
    }
    D_8021C110 += 1;
    M2C_FIELD(&D_8021F260, s8 *, 0) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 1) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 2) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 4) = 0;
    if (D_8021C112 == 3) {
        func_8013DE3C(&D_8022B060);
    }
}
