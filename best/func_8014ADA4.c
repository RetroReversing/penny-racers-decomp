extern void func_801CA140(void);
extern void func_801CA468(s32, s32);
extern void func_801CA494(s32, s32, s32, s32, s32);
extern void func_8014A4C8(s32, s16, s16, s32, s32);
extern u16 D_80190CB4;
extern u8 D_80189C9A;
extern u16 D_8011F330;
extern f32 D_8011F30C;
extern f32 D_8011F308;

void func_8014ADA4(s32 arg0, s32 arg1) {
    s32 a1;
    s32 a2;
    s32 a3;
    s16 s1;
    s32 t;
    u16 t2;
    u16 idx;

    func_801CA140();
    func_801CA468(arg0, 0xFF);
    t = *(u16 *)((u8 *)&D_8011F330 + D_80190CB4 * 0x64);
    if (t == 0x30) {
        goto block9;
    }
    if (t < 0x31) {
        if (t == 0x20) {
            func_801CA494(arg0, 0xE2, 0x38, 0x73, 0xFF);
            func_8014A4C8(arg0, 0x8E, (s16)(D_80189C9A * 0x25 + 0x58), 7, 0x1A);
        }
        return;
    }
    if (t == 0x40) {
        goto block9;
    }
    if (t != 0x50) {
        return;
    }
block9:
    a1 = 0xE2;
    a2 = 0x38;
    a3 = 0x73;
    s1 = 0x7C;
    t2 = *(u16 *)((u8 *)&D_8011F330 + D_80190CB4 * 0x64);
    if (t2 == 0x40 || t2 == 0x50) {
        func_801CA494(arg0, 0xE2, 0x38, 0x73, 0xFF);
        idx = arg1 & 0xFFFF;
        func_8014A4C8(arg0, (s16)(s32)*(f32 *)((u8 *)&D_8011F30C + idx * 0x64), 0x8E, 7, 0x1B);
        a1 = 0x71;
        a2 = 0;
        a3 = 0x38;
        s1 = 0x70;
    }
    func_801CA494(arg0, a1 & 0xFF, a2 & 0xFF, a3 & 0xFF, 0xFF);
    idx = arg1 & 0xFFFF;
    func_8014A4C8(arg0, (s16)(s32)*(f32 *)((u8 *)&D_8011F308 + idx * 0x64), s1, 7, 0x1A);
}
