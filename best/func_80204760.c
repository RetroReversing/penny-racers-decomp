/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

extern signed char D_8021E15F;
extern signed char D_8021E160;
extern signed char D_8021E162;
s32 func_8014A4C8();
s32 func_801CA494();
extern u8 D_8021E19E;

void func_80204760(s32 arg0) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;

    if ((D_8021E15F == 1) && (D_8021E160 == 0)) {
        var_a3 = (0xFF - D_8021E19E) & 0xFFFF;
        var_a1 = var_a3;
        var_a2 = var_a3;
    } else {
        var_a1 = 0x64;
        var_a2 = 0x64;
        var_a3 = 0x64;
    }
    func_801CA494(arg0, var_a1, var_a2, var_a3);
    func_8014A4C8(arg0, 0x4B, 0x3C, 0xB, 0x64);
    func_8014A4C8(arg0, 0x4B, 0x9E, 0xB, 0x65);
    func_8014A4C8(arg0, 0x94, 0x3C, 0xB, 0x66);
    func_8014A4C8(arg0, 0x94, 0x9E, 0xB, 0x15);
    func_8014A4C8(arg0, 0x4B, 0x2D, 8, 2);
    if ((D_8021E15F == 1) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 2) || (M2C_FIELD(&D_8021E162, s8 *, -6) != 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x53, 0x72, 8, 6);
    if ((D_8021E15F == 1) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 1) || (M2C_FIELD(&D_8021E162, s8 *, -6) != D_8021E162)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x53, 0x5B, 8, 5);
    if ((D_8021E15F == 1) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 0) || (M2C_FIELD(&D_8021E162, s8 *, -6) != 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x53, 0x44, 8, 7);
    if ((D_8021E15F == 1) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 3) || (M2C_FIELD(&D_8021E162, s8 *, -6) != 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x53, 0x89, 8, 0xC);
}
