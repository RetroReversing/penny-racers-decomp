extern unsigned char D_801C6B28;
extern unsigned short D_801C6B2E;
extern unsigned char D_801C6B2A;
extern unsigned char D_801C6B2B;
extern unsigned char D_801C6B2C;
/* machine draft (m2c) for gcc-2.7.2-kmc -G8 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */

u16 func_800DE41C();
s32 func_801973D0();
s32 func_8019F7C0();
extern char D_8011F2F4[];
extern char D_8011F2FB[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_801B50B0[];
extern char D_801B5F90[];
extern u8 D_801C6B29;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u16 D_801C7ABA;
extern u16 D_801C7D18;
extern char D_803156C4[];
extern s32 func_801B3CB0;
extern s32 func_801B3E18;
extern s32 func_801B41D8;
extern s32 func_801B42C8;
extern s32 func_801B4B6C;
extern s32 func_801B4CF8;

void func_80192680(s32 arg0) {
    s32 temp_v0_2;
    s32 temp_v0;
    register s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    register s32 temp_v1_2;

    func_8019F7C0(arg0 & 0xFFFF);
    if (D_801C6B28 == 0) {
        D_801C6B2E = func_800DE41C(0, 0, 1, 0, 0x52, 0xFF, D_803156C4, NULL, NULL, 0.0f, 0, 0.0f);
        temp_v0 = D_801C6B2E * 0x64;
        *(D_8011F2F4 + temp_v0) = *(D_8011F2F4 + temp_v0) | 8;
        D_801C6B28 = 1U;
    }
    if (D_801C6B29 == 0) {
        func_801973D0();
        D_801C7D18 = func_800DE41C(0, 0, 3, 0, 0x54, 0xF0, NULL, &func_801B3E18, &func_801B3CB0, (f32) (unsigned)D_801C7068 * 400.0f * 0.5f, 0, (f32) D_801C6BB9 * 400.0f * 0.5f, 0, 0, 0, 0x3F000000, 0x3F000000, 0x3F000000);
        temp_v0_2 = D_801C7D18 * 0x64;
        *(D_8011F2FB + temp_v0_2) = 0xC;
        *(D_8011F2F4 + temp_v0_2) = *(D_8011F2F4 + temp_v0_2) | 0x20;
        D_801C6B29 = 1;
    }
    if (D_801C6B2A == 0) {
        temp_v1 = (func_800DE41C(0, 0, 3, 0, 0x41, 0xFF, NULL, &func_801B41D8, &func_801B42C8, 0.0f, 0, 0.0f, 0, 0, 0, 0, 0) & 0xFFFF) * 0x64;
        *(D_8011F2F4 + temp_v1) = *(D_8011F2F4 + temp_v1) | 0x20;
        D_801C6B2A = 1U;
    }
    if (!D_801C6B2B) {
        temp_v1_2 = (func_800DE41C(0, 0, 3, 0, 0x71, 0, NULL, &func_801B4B6C, &func_801B4CF8, 0.0f, 0, 0.0f, 0, 0, 0, 0, 0, 0) & 0xFFFF) * 0x64;
        *(D_8011F2F4 + temp_v1_2) = *(D_8011F2F4 + temp_v1_2) | 0x20;
        D_801C6B2B = 1U;
    }
    if (D_801C6B2C == 0) {
        D_801C7ABA = func_800DE41C(0, 0x50, 3, 0, 0xA2, 0xFF, NULL, D_801B50B0, D_801B5F90, 0.0f, 0, 0.0f, 0, 0, 0, 0, 0, 0);
        temp_v0_3 = D_801C7ABA * 0x64;
        *(D_8011F2F4 + temp_v0_3) = *(D_8011F2F4 + temp_v0_3) | 0x20;
        D_801C6B2C = 1U;
    }
    temp_v0_4 = D_801C7D18 * 0x64;
    *(D_8011F308 + temp_v0_4) = (f32) D_801C7068 * 400.0f * 0.5f;
    *(D_8011F30C + temp_v0_4) = 0;
    *(D_8011F310 + temp_v0_4) = (f32) D_801C6BB9 * 400.0f * 0.5f;
}
