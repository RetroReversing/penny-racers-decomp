s32 func_80148230();
s32 func_8014A4C8(s32, s16, s16, s32, s32);
s32 func_801CA140(s32);
s32 func_801CA494(s32, s32, s32, s32, s32);
s32 func_80209B90(s32);
extern u16 D_8011F2F0;
extern u16 D_8011F330;
extern u16 D_8021AFE6;
extern u8 D_8021B014;
extern u16 D_8021B110;
extern u16 D_8021B112;
extern u16 D_8021B114;
extern s32 D_8021B128;
extern s32 D_8021B12C;
extern s32 D_8021B1A0;
extern u16 D_8021B1A4;
extern u16 D_8021B1A6;
extern s16 D_8021E18C;
extern u8 D_8021E19E;
extern s16 D_8021E1A2;

void func_80209310(s32 arg0, s32 arg1) {
    s32 temp_s0 = arg1 & 0xFFFF;
    u16 kind;
    s32 i;

    func_80209B90(temp_s0);
    kind = *(&D_8011F330 + (temp_s0 * 0x64));
    if (kind == 2) {
        func_801CA140(arg0);
        func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
        i = 0;
        if (D_8021E1A2 >= 0) {
            do {
                if (*(&D_8021B014 + i) == 1) {
                    func_8014A4C8(arg0, *(&D_8021B1A4 + i * 4), *(&D_8021B1A6 + i * 4), 0xB, 0x56);
                }
                i++;
            } while (D_8021E1A2 >= i);
        }
    } else {
        *(&D_8011F330 + temp_s0 * 0x64) = *(&D_8011F330 + temp_s0 * 0x64) + 1;
    }
}
