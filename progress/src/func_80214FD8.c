void func_8014A4C8(int a, int b, int c, int d, int e);
void func_801CA140(int a);
void func_801CA468(int arg0, int a);
void func_801CA494(int a, int b, int c, int d, int e);
extern u8 D_8011F330[];
extern u8 D_80190C98;
extern u8 D_8021F028;
extern u8 D_8021F029;
extern u8 D_8021F02A;

void func_80214FD8(int arg0, unsigned int arg1)
{
    u8 sp18[4];
    int off;
    int s0;
    int s2;
    int i;
    int n;

    off = (arg1 & 0xFFFF) * 100;
    switch (*(u16 *)(D_8011F330 + off)) {
    case 0:
        *(u16 *)(D_8011F330 + (arg1 & 0xFFFF) * 100) = 1;
        return;
    case 1:
        break;
    default:
        return;
    }
    func_801CA140(arg0);
    func_801CA494(arg0, 0, 0, 0, 0xFF);
    func_8014A4C8(arg0, 0x48, 0xD, 0xB, 0x54);
    func_801CA468(arg0, 0xFF);
    func_8014A4C8(arg0, 0x5A, 0xF, 0xC, 1);
    func_8014A4C8(arg0, 0x48, 0x4A, 0xC, 0);
    func_8014A4C8(arg0, 0x48, 0x7B, 0xC, 0);
    func_8014A4C8(arg0, 0xFA, 0x48, 0xC, 7);
    func_8014A4C8(arg0, 0xFA, 0x79, 0xC, 7);
    func_8014A4C8(arg0, 0x32, 0x48, 0xC, 8);
    func_8014A4C8(arg0, 0x32, 0x79, 0xC, 8);
    s0 = 0xFF;
    s2 = 0x7F;
    if (D_8021F02A != 0) {
        s0 = 0x7F;
        s2 = 0xFF;
    }
    i = s0 & 0xFFFF;
    s0 = 0xFF;
    func_801CA494(arg0, i, i, i, s0);
    func_8014A4C8(arg0, 0x4F, 0xAC, 0xC, 3);
    func_801CA494(arg0, s2 & 0xFFFF, s2 & 0xFFFF, s2 & 0xFFFF, 0xFF);
    func_8014A4C8(arg0, 0xA2, 0xAC, 0xC, 2);
    for (n = 0; n < 4; n++) {
        sp18[n] = 0x7F;
    }
    sp18[D_80190C98] = 0xFF;
    func_801CA494(arg0, sp18[0], sp18[0], sp18[0], 0xFF);
    func_8014A4C8(arg0, 0x72, 0x36, 0xC, 4);
    func_801CA494(arg0, sp18[1], sp18[1], sp18[1], 0xFF);
    func_8014A4C8(arg0, 0x72, 0x67, 0xC, 5);
    func_801CA494(arg0, sp18[2], sp18[2], sp18[2], 0xFF);
    func_8014A4C8(arg0, 0x74, 0x99, 0xC, 6);
    func_801CA494(arg0, sp18[3], sp18[3], sp18[3], 0xFF);
    func_8014A4C8(arg0, 0x81, 0xCC, 0xC, 9);
    func_801CA494(arg0, 0, 0, 0, 0x80);
    n = 0x15 - D_8021F028;
    while (n != 0) {
        func_8014A4C8(arg0, (s16)(0xF4 - n * 8), 0x4D, 0xB, 0x55);
        n = n - 1;
    }
    n = 0x15 - D_8021F029;
    while (n != 0) {
        func_8014A4C8(arg0, (s16)(0xF4 - n * 8), 0x7E, 0xB, 0x55);
        n = n - 1;
    }
}

