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

extern signed char D_8021E15F;
extern signed char D_8021E160;
extern signed char D_8021E162;
s32 func_8014A4C8();
s32 func_801CA494();
extern u8 D_8021E19E;

void func_80204410(s32 arg0) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;

    if (D_8021E15F == 0) {
        if (D_8021E160 == 0) {
            var_a3 = (0xFF - D_8021E19E) & 0xFFFF;
            var_a1 = var_a3;
            var_a2 = var_a3;
        } else {
            goto block_4;
        }
    } else {
block_4:
        var_a1 = 0x64;
        var_a2 = 0x64;
        var_a3 = 0x64;
    }
    func_801CA494(arg0, var_a1, var_a2, var_a3);
    func_8014A4C8(arg0, 0x1F, 0x3E, 0xB, 0x5E);
    func_8014A4C8(arg0, 0x1F, 0xA0, 0xB, 0x5F);
    func_8014A4C8(arg0, 0x68, 0x3E, 0xB, 0x60);
    func_8014A4C8(arg0, 0x68, 0xA0, 0xB, 0xD);
    func_8014A4C8(arg0, 0x1F, 0x2F, 8, 1);
    if ((D_8021E15F == 0) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 2) || (M2C_FIELD(&D_8021E162, s8 *, -6) != 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x27, 0x74, 8, 6);
    if ((D_8021E15F == 0) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 1) || (M2C_FIELD(&D_8021E162, s8 *, -6) != D_8021E162)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x27, 0x5D, 8, 5);
    if ((D_8021E15F == 0) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 0) || (M2C_FIELD(&D_8021E162, s8 *, -6) != 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x27, 0x46, 8, 7);
    if ((D_8021E15F == 0) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 3) || (M2C_FIELD(&D_8021E162, s8 *, -6) != 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x27, 0x8B, 8, 0xC);
}
