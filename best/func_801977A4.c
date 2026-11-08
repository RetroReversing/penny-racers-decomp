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
M2C_UNK func_800E067C();                            /* extern */
M2C_UNK func_8013ADA8();                            /* extern */
M2C_UNK func_801FA338(M2C_UNK);                     /* extern */
M2C_UNK func_8022F780(u16);                         /* extern */
M2C_UNK func_8022FE50(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_80231130();                            /* extern */
M2C_UNK func_802312F8(M2C_UNK);                     /* extern */
M2C_UNK func_80231A0C();                            /* extern */
M2C_UNK func_80231C5C();                            /* extern */
M2C_UNK func_80231E30();                            /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_8012AD9C;
extern M2C_UNK D_80159230;
extern M2C_UNK D_8015A414;
extern s16 D_8018A438;
extern s32 D_802038D0;
extern s32 D_802038D4;
extern s32 D_80203AB0;
extern s8 D_8022AFE9;

void func_801977A4(void) {
    s32 var_a2;
    s32 var_s0;

    func_801FA338(0);
    D_80203AB0 = 0;
    D_802038D0 = 0;
    D_802038D4 = 0;
    var_s0 = 0;
    func_80231A0C();
    func_80231C5C();
    func_80231E30();
    func_8022F780(M2C_FIELD(&D_8006FAF0, u16 *, 0x20));
    func_800E067C();
    func_80231130();
    func_802312F8(0);
    var_a2 = 0 & 0xFF;
    do {
        func_8022FE50(var_a2, var_a2, var_a2, 1);
        var_s0 += 1;
        var_a2 = var_s0 & 0xFF;
    } while (!(var_s0 & 0xFFFF));
    D_8022AFE9 = 0;
    func_800DE41C(0, 0, 3, 0, 0x20, 1, 0, &D_8012AD9C, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8013ADA8();
    D_8018A438 = func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, 0, &D_80159230, &D_8015A414, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
