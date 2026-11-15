extern s8 D_8021E15F;
extern s8 D_8021E160;
extern s8 D_8021E162;
extern u8 D_8021E19E;

void func_801CA494(s32, s32, s32, s32, s32);
void func_8014A4C8(s32, s32, s32, s32, s32);

void func_80204410(s32 arg0) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;

    if ((D_8021E15F == 0) && (D_8021E160 == 0)) {
        var_a3 = (0xFF - D_8021E19E) & 0xFFFF;
        var_a1 = var_a3;
        var_a2 = var_a3;
    } else {
        var_a1 = 0x64;
        var_a2 = 0x64;
        var_a3 = 0x64;
    }
    func_801CA494(arg0, var_a1, var_a2, var_a3, 0);
    func_8014A4C8(arg0, 0x1F, 0x3E, 0xB, 0x5E);
    func_8014A4C8(arg0, 0x1F, 0xA0, 0xB, 0x5F);
    func_8014A4C8(arg0, 0x68, 0x3E, 0xB, 0x60);
    func_8014A4C8(arg0, 0x68, 0xA0, 0xB, 0xD);
    func_8014A4C8(arg0, 0x1F, 0x2F, 8, 1);
    if ((D_8021E15F == 0) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 2) || (*((s8 *)&D_8021E162 - 6) != 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x27, 0x74, 8, 6);
    if ((D_8021E15F == 0) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 1) || (*((s8 *)&D_8021E162 - 6) != D_8021E162)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x27, 0x5D, 8, 5);
    if ((D_8021E15F == 0) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 0) || (*((s8 *)&D_8021E162 - 6) != 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x27, 0x46, 8, 7);
    if ((D_8021E15F == 0) && (D_8021E160 == 0)) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if ((D_8021E162 != 3) || (*((s8 *)&D_8021E162 - 6) != 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x27, 0x8B, 8, 0xC);
}
