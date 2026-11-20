extern void func_8014A4C8(s32, s32, s32, s32, s32);
extern void func_801CA494(s32, s32, s32, s32, s32);
extern u8 D_8021B06B;
extern u8 D_8021B06C;
extern u8 D_8021E15F;
extern s8 D_8021E162;
extern u8 D_8021E19E;

#define E15F (*(s8 *)&D_8021E15F)
#define E160 (*(s8 *)((u8 *)&D_8021E15F + 1))

void func_80205198(s32 arg0) {
short __repair_constant = 0x64;

    s32 a1, a2, a3;
    if (E15F == 4 && D_8021B06B == 0 && D_8021B06C == 0 && E160 == 0) {
        a3 = (0xFF - D_8021E19E) & 0xFFFF;
        a2 = a3;
        a1 = a3;
    } else {
        a1 = 0x64;
        a2 = __repair_constant;
        a3 = __repair_constant;
    }
    func_801CA494(arg0, a1, a2, a3, 0);
    func_8014A4C8(arg0, 0xCF, 0x36, 0xB, 0x6A);
    func_8014A4C8(arg0, 0xCF, 0x98, 0xB, 0x6B);
    func_8014A4C8(arg0, 0x118, 0x36, 0xB, 0x6C);
    func_8014A4C8(arg0, 0x118, 0x98, 0xB, 0x1D);
    func_8014A4C8(arg0, 0xCF, 0x27, 8, 8);
    if (E15F == 4 && E160 == 0) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (D_8021E162 != 0 || (&D_8021E162)[-6] != 1) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0xD7, 0x42, 8, 0x15);
    func_8014A4C8(arg0, 0xD7, 0x60, 8, 0x16);
    func_8014A4C8(arg0, 0x110, 0x42, 8, 0x17);
    func_8014A4C8(arg0, 0x110, 0x60, 8, 0x18);
    func_8014A4C8(arg0, 0xD9, 0x46, 8, 0x12);
    if (E15F == 4 && E160 == 0) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (D_8021E162 != 1 || (&D_8021E162)[-6] != D_8021E162) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0xD7, 0x6E, 8, 0x15);
    func_8014A4C8(arg0, 0xD7, 0x8C, 8, 0x16);
    func_8014A4C8(arg0, 0x110, 0x6E, 8, 0x17);
    func_8014A4C8(arg0, 0x110, 0x8C, 8, 0x18);
    func_8014A4C8(arg0, 0xD9, 0x71, 8, 0x13);
}
