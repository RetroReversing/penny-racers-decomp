extern s8 D_8021E15F[];
extern s8 D_8021E162[];
extern u8 D_8021E19E;
void func_801CA494(s32, s32, s32, s32, s32);
void func_8014A4C8(s32, s32, s32, s32, s32);

void func_80204E30(s32 arg0)
{
    s32 v;

    if (D_8021E15F[0] == 3 && D_8021E15F[1] == 0) {
        v = (0xFF - D_8021E19E) & 0xFFFF;
        func_801CA494(arg0, v, v, v, 0xFF);
    } else {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0xA3, 0x38, 0xB, 0x67);
    func_8014A4C8(arg0, 0xA3, 0x9A, 0xB, 0x68);
    func_8014A4C8(arg0, 0xEC, 0x38, 0xB, 0x69);
    func_8014A4C8(arg0, 0xEC, 0x9A, 0xB, 0x19);
    func_8014A4C8(arg0, 0xA3, 0x29, 0x8, 0x4);
    if (D_8021E15F[0] == 3 && D_8021E15F[1] == 0) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(D_8021E162[0] == 2 && D_8021E162[-6] == 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0xAB, 0x6E, 0x8, 0x6);
    if (D_8021E15F[0] == 3 && D_8021E15F[1] == 0) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(D_8021E162[0] == 1 && D_8021E162[-6] == D_8021E162[0])) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0xAB, 0x57, 0x8, 0x5);
    if (D_8021E15F[0] == 3 && D_8021E15F[1] == 0) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(D_8021E162[0] == 0 && D_8021E162[-6] == 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0xAB, 0x40, 0x8, 0x7);
    if (D_8021E15F[0] == 3 && D_8021E15F[1] == 0) {
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(D_8021E162[0] == 3 && D_8021E162[-6] == 1)) {
        func_801CA494(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    func_8014A4C8(arg0, 0xAB, 0x85, 0x8, 0xC);
}
