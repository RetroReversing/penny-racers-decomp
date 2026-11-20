extern u8 D_8011F2F0[];

void func_801CA140(void);
void func_801CA468(s32, u8);
void func_8014A4C8(s32, s32, s32, s32, s32);

void func_8020FBA8(s32 arg0, s32 arg1) {
    u16 idx;

    idx = arg1;
    func_801CA140();
    func_801CA468(arg0, D_8011F2F0[idx * 0x64]);
    func_8014A4C8(arg0, 0x14, 0x46, 0xB, 0x56);
}
