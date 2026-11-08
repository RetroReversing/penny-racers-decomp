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

s32 func_8014A4C8();
s32 func_801CA140();
s32 func_801CA468();
s32 func_801CA494();
s32 func_801CCE7C();
extern u8 D_8021B0C0;
extern u8 D_8021E19E;
extern char D_802E66D8[];
extern char D_802F92E0[];
extern char D_802F94E8[];
extern char D_80301BE0[];

void func_80206BC0(s32 arg0) {
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a3_4;

    func_801CA140();
    func_801CA494(arg0, 0x78, 0x78, 0x78, 0xFF);
    func_801CCE7C(arg0, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, &D_802E66D8, &D_802F92E0);
    func_801CCE7C(arg0, 0x20, 0x22, 0, 0, 0x110, 0x7F, 0x110, 0x7F, 0x40, 0x20, 0, 0, 0x13F, 0xEF, &D_802F94E8, &D_80301BE0);
    if (D_8021B0C0 != 0) {
        var_a1 = 0x64;
        var_a2 = 0x64;
        var_a3 = 0x64;
    } else {
        var_a1 = 0xFF;
        var_a2 = 0xFF;
        var_a3 = 0xFF;
    }
    func_801CA494(arg0, var_a1, var_a2, var_a3);
    func_8014A4C8(arg0, 0x70, 0x7C, 0xB, 0x25);
    if (D_8021B0C0 != 1) {
        var_a1_2 = 0x64;
        var_a2_2 = 0x64;
        var_a3_2 = 0x64;
    } else {
        var_a1_2 = 0xFF;
        var_a2_2 = 0xFF;
        var_a3_2 = 0xFF;
    }
    func_801CA494(arg0, var_a1_2, var_a2_2, var_a3_2);
    func_8014A4C8(arg0, 0x70, 0x92, 2, 0);
    if (D_8021B0C0 != 2) {
        var_a1_3 = 0x64;
        var_a2_3 = 0x64;
        var_a3_3 = 0x64;
    } else {
        var_a1_3 = 0xFF;
        var_a2_3 = 0xFF;
        var_a3_3 = 0xFF;
    }
    func_801CA494(arg0, var_a1_3, var_a2_3, var_a3_3);
    func_8014A4C8(arg0, 0x70, 0xA8, 2, 1);
    if (D_8021B0C0 != 3) {
        var_a1_4 = 0x64;
        var_a2_4 = 0x64;
        var_a3_4 = 0x64;
    } else {
        var_a1_4 = 0xFF;
        var_a2_4 = 0xFF;
        var_a3_4 = 0xFF;
    }
    func_801CA494(arg0, var_a1_4, var_a2_4, var_a3_4);
    func_8014A4C8(arg0, 0x70, 0xBE, 2, 2);
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    func_801CA468(arg0, D_8021E19E);
    func_8014A4C8(arg0, 0x5B, (D_8021B0C0 * 0x16) + 0x7A, 0xB, 0x23);
    func_8014A4C8(arg0, 0xD2, (D_8021B0C0 * 0x16) + 0x7A, 0xB, 0x24);
}
