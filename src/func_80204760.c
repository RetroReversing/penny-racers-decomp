extern s8 D_8021E15F[];
extern s8 D_8021E162[];
extern u8 D_8021E19E;
extern void func_8014A4C8(s32, s32, s32, s32, s32);
extern void func_801CA494(s32, s32, s32, s32, s32);

void func_80204760(s32 arg0) {
    s32 v;
    if (D_8021E15F[0] == 1 && D_8021E15F[1] == 0) {
        v = (0xFF - D_8021E19E) & 0xFFFF;
    
    do { func_801CA494(arg0, v, v, v, 0xFF); } while (0);} else {
        v = 0x64;
    
    func_801CA494(arg0, v, v, v, 0xFF);}
    func_8014A4C8(arg0, 0x4B, 0x3C, 0xB, 0x64);
    func_8014A4C8(arg0, 0x4B, 0x9E, 0xB, 0x65);
    func_8014A4C8(arg0, 0x94, 0x3C, 0xB, 0x66);
    func_8014A4C8(arg0, 0x94, 0x9E, 0xB, 0x15);
    func_8014A4C8(arg0, 0x4B, 0x2D, 8, 2);
    if (D_8021E15F[0] == 1 && D_8021E15F[1] == 0) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (D_8021E162[0] != 2 || D_8021E162[-6] != 1) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x53, 0x72, 8, 6);
    if (D_8021E15F[0] == 1 && D_8021E15F[1] == 0) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (D_8021E162[0] != 1 || D_8021E162[-6] != D_8021E162[0]) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x53, 0x5B, 8, 5);
    if (D_8021E15F[0] == 1 && D_8021E15F[1] == 0) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (D_8021E162[0] != 0 || D_8021E162[-6] != 1) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x53, 0x44, 8, 7);
    if (D_8021E15F[0] == 1 && D_8021E15F[1] == 0) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (D_8021E162[0] != 3 || D_8021E162[-6] != 1) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0x53, 0x89, 8, 0xC);
}
