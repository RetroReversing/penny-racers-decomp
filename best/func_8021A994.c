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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_800E067C();                            /* extern */
M2C_UNK func_8013ADA8(M2C_UNK);                     /* extern */
M2C_UNK func_801FA338(M2C_UNK);                     /* extern */
M2C_UNK func_8021F6A0(M2C_UNK);                     /* extern */
M2C_UNK func_8022F780(u16);                         /* extern */
M2C_UNK func_8022FE50(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_802306F0(u8);                          /* extern */
M2C_UNK func_802312F8(M2C_UNK);                     /* extern */
M2C_UNK func_80231A0C();                            /* extern */
M2C_UNK func_80231E30();                            /* extern */
M2C_UNK func_80232360(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_8006FB14;
extern M2C_UNK D_800DB1B8;
extern M2C_UNK D_8012FFF0;
extern s8 D_8021E144;
extern u16 D_8021E18C;
extern u8 D_8021EEB2;

void func_8021A994(void) {
    s32 var_a2;
    s32 var_s0;
    void *temp_v0;

    func_801FA338(0);
    func_80231A0C();
    M2C_FIELD(&D_8006FAF0, u16 *, 0x20) = (u16) (D_8021E18C + 1);
    func_80231E30();
    D_8021E144 = 1;
    var_s0 = 0;
    func_8022F780(M2C_FIELD(&D_8006FAF0, u16 *, 0x20));
    D_8021E144 = 0;
    func_800E067C();
    func_802312F8(0);
    func_802306F0(D_8021EEB2);
    var_a2 = 0 & 0xFF;
    do {
        func_8022FE50(var_a2, var_a2, var_a2, 1);
        var_s0 += 1;
        var_a2 = var_s0 & 0xFF;
    } while ((u32) (var_s0 & 0xFFFF) < 6U);
    func_8021F6A0(1);
    M2C_FIELD(&D_8006FB14, s8 *, 4) = 1;
    func_800DE41C(0, 0, 3, 0, 0x80, 1, 0, &D_8012FFF0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    temp_v0 = &D_800DB1B8 + 0x2114;
    M2C_FIELD(&D_800DB1B8, s16 *, 0x2114) = 0xA0;
    M2C_FIELD(temp_v0, s16 *, 2) = 0x78;
    M2C_FIELD(temp_v0, s16 *, -4) = 0xA0;
    M2C_FIELD(temp_v0, s16 *, -2) = 0x3C;
    M2C_FIELD(temp_v0, s16 *, 0x14) = 0xA0;
    M2C_FIELD(temp_v0, s16 *, 0x16) = 0x3C;
    M2C_FIELD(temp_v0, s16 *, 0x18) = 0x140;
    M2C_FIELD(temp_v0, s16 *, 0x1A) = 0xB4;
    func_8013ADA8(0xA0);
    func_80232360(0, 1);
    func_80232360(1, 1);
    func_80232360(2, 0);
    func_80232360(3, 1);
    func_80232360(4, 1);
    func_80232360(5, 2);
}
