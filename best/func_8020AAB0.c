s32 func_80149F40(u16, s32, s8);
u8 func_8014A870(s32, s32, u8);
s32 func_8014B854(s32);
s32 func_801FD530(s32, s32);
extern u8 D_8011F32E[];
extern u8 D_8011F2F0[];
extern u8 D_8021B069;
extern u8 D_8021B00C[];
extern u8 D_8021B019;
extern s16 D_8021E1A2;
extern u8 D_8021B06A;
extern u8 D_8021E180[];
extern u8 D_8021E20B[];
extern u8 D_8021E20C[];
void func_8020AAB0(s32 arg0) {
    u16 idx;
    idx = arg0 & 0xFFFF;
    switch (D_8011F32E[idx * 0x64]) {
    case 0:
        D_8011F32E[idx * 0x64] = 1;
        return;
    case 2:
        if ((D_8021E1A2 != 0) && (D_8021B069 & 0x10)) {
            D_8011F32E[idx * 0x64] = 1;
        }
        return;
    }
}
