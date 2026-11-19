extern void func_801CA140(void);
extern void func_801CA468(s32, s32);
extern void func_801CA494(s32, s32, s32, s32, s32);
extern void func_8014A4C8(s32, s32, s32, s32, s32);
extern u8 D_8011F330[];
extern f32 D_8011F30C[];
extern f32 D_8011F308[];
extern u8 D_80189C9A;
extern u16 D_80190CB4;

void func_8014ADA4(s32 arg0, s32 arg1)
{
    s32 a1;
    s32 a2;
    s32 a3;
    s16 s1;
    s16 x;
    u16 st;
    u16 temp_v0;

    func_801CA140();
    func_801CA468(arg0, 0xFF);
    st = *(u16 *)(D_8011F330 + D_80190CB4 * 0x64);
    switch (st) {
    case 0x20:
        func_801CA494(arg0, 0xE2, 0x38, 0x73, 0xFF);
        x = (s16)(D_80189C9A * 0x25 + 0x58);
        func_8014A4C8(arg0, 0x8E, x, 7, 0x1A);
        return;
    case 0x30:
    case 0x40:
    case 0x50:
        a1 = 0xE2;
        a2 = 0x38;
        a3 = 0x73;
        s1 = 0x7C;
        temp_v0 = *(u16 *)(D_8011F330 + D_80190CB4 * 0x64);
        if (temp_v0 == 0x40 || temp_v0 == 0x50) {
            func_801CA494(arg0, 0xE2, 0x38, 0x73, 0xFF);
            func_8014A4C8(arg0, (s16)D_8011F30C[(arg1 & 0xFFFF) * 25], 0x8E, 7, 0x1B);
            a1 = 0x71;
            a2 = 0;
            a3 = 0x38;
            s1 = 0x70;
        }
        func_801CA494(arg0, a1 & 0xFF, a2 & 0xFF, a3 & 0xFF, 0xFF);
        func_8014A4C8(arg0, (s16)D_8011F308[(arg1 & 0xFFFF) * 25], s1, 7, 0x1A);
        return;
    default:
        return;
    }
}
