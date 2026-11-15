extern s8 D_8021E15F;
extern s8 D_8021E160;
extern s8 D_8021E162;
extern u8 D_8021E19E;

void func_801CA494(s32, s32, s32, s32, s32);
void func_8014A4C8(s32, s32, s32, s32, s32);

void func_80204760(s32 arg0) {
    s32 var_a;

    if ((D_8021E15F == 1) && (D_8021E160 == 0)) {
        var_a = (0xFF - D_8021E19E) & 0xFFFF;
        func_801CA494(arg0, var_a, var_a, var_a, 0xFF);
    } else {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x4B, 0x3C, 0xB, 0x64);
    func_8014A4C8(arg0, 0x4B, 0x9E, 0xB, 0x65);
    func_8014A4C8(arg0, 0x94, 0x3C, 0xB, 0x66);
    func_8014A4C8(arg0, 0x94, 0x9E, 0xB, 0x15);
    func_8014A4C8(arg0, 0x4B, 0x2D, 8, 2);
    if ((D_8021E15F == 1) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 2) || (*((s8 *)&D_8021E162 - 6) != 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x53, 0x72, 8, 6);
    if ((D_8021E15F == 1) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 1) || (*((s8 *)&D_8021E162 - 6) != D_8021E162)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x53, 0x5B, 8, 5);
    if ((D_8021E15F == 1) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 0) || (*((s8 *)&D_8021E162 - 6) != 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x53, 0x44, 8, 7);
    if ((D_8021E15F == 1) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 3) || (*((s8 *)&D_8021E162 - 6) != 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x53, 0x89, 8, 0xC);
}
