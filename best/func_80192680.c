/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

u16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, s32, f32, s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801973D0();                            /* extern */
M2C_UNK func_8019F7C0(s32);                         /* extern */
extern M2C_UNK D_8011F2F4;
extern M2C_UNK D_8011F2FB;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_801B50B0;
extern M2C_UNK D_801B5F90;
extern M2C_UNK D_801C6B28;
extern u8 D_801C6B29;
extern M2C_UNK D_801C6B2C;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u16 D_801C7ABA;
extern u16 D_801C7D18;
extern M2C_UNK D_803156C4;
extern M2C_UNK func_801B3CB0;
extern M2C_UNK func_801B3E18;
extern M2C_UNK func_801B41D8;
extern M2C_UNK func_801B42C8;
extern M2C_UNK func_801B4B6C;
extern M2C_UNK func_801B4CF8;

void func_80192680(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;

    func_8019F7C0(arg0 & 0xFFFF);
    if (M2C_FIELD(&D_801C6B28, u8 *, 0) == 0) {
        M2C_FIELD(&D_801C6B2C, u16 *, 2) = func_800DE41C(0, 0, 1, 0, 0x52, 0xFF, &D_803156C4, NULL, NULL, 0.0f, 0, 0.0f, 0, 0, 0, 0x3F000000, 0x3F000000, 0x3F000000);
        temp_v0 = M2C_FIELD(&D_801C6B2C, u16 *, 2) * 0x64;
        *(&D_8011F2F4 + temp_v0) = *(&D_8011F2F4 + temp_v0) | 8;
        M2C_FIELD(&D_801C6B28, u8 *, 0) = 1U;
    }
    if (D_801C6B29 == 0) {
        func_801973D0();
        D_801C7D18 = func_800DE41C(0, 0, 3, 0, 0x54, 0xF0, NULL, &func_801B3E18, &func_801B3CB0, (f32) D_801C7068 * 400.0f * 0.5f, 0, (f32) D_801C6BB9 * 400.0f * 0.5f, 0, 0, 0, 0x3F000000, 0x3F000000, 0x3F000000);
        temp_v0_2 = D_801C7D18 * 0x64;
        *(&D_8011F2F4 + temp_v0_2) = *(&D_8011F2F4 + temp_v0_2) | 0x20;
        *(&D_8011F2FB + temp_v0_2) = 0xC;
        D_801C6B29 = 1;
    }
    if (M2C_FIELD(&D_801C6B28, u8 *, 2) == 0) {
        temp_v1 = (func_800DE41C(0, 0, 3, 0, 0x41, 0xFF, NULL, &func_801B41D8, &func_801B42C8, 0.0f, 0, 0.0f, 0, 0, 0, 0, 0, 0) & 0xFFFF) * 0x64;
        *(&D_8011F2F4 + temp_v1) = *(&D_8011F2F4 + temp_v1) | 0x20;
        M2C_FIELD(&D_801C6B28, u8 *, 2) = 1U;
    }
    if (M2C_FIELD(&D_801C6B28, u8 *, 3) == 0) {
        temp_v1_2 = (func_800DE41C(0, 0, 3, 0, 0x71, 0, NULL, &func_801B4B6C, &func_801B4CF8, 0.0f, 0, 0.0f, 0, 0, 0, 0, 0, 0) & 0xFFFF) * 0x64;
        *(&D_8011F2F4 + temp_v1_2) = *(&D_8011F2F4 + temp_v1_2) | 0x20;
        M2C_FIELD(&D_801C6B28, u8 *, 3) = 1U;
    }
    if (M2C_FIELD(&D_801C6B2C, u8 *, 0) == 0) {
        D_801C7ABA = func_800DE41C(0, 0x50, 3, 0, 0xA2, 0xFF, NULL, &D_801B50B0, &D_801B5F90, 0.0f, 0, 0.0f, 0, 0, 0, 0, 0, 0);
        temp_v0_3 = D_801C7ABA * 0x64;
        *(&D_8011F2F4 + temp_v0_3) = *(&D_8011F2F4 + temp_v0_3) | 0x20;
        M2C_FIELD(&D_801C6B2C, u8 *, 0) = 1U;
    }
    temp_v0_4 = D_801C7D18 * 0x64;
    *(&D_8011F308 + temp_v0_4) = (f32) D_801C7068 * 400.0f * 0.5f;
    *(&D_8011F30C + temp_v0_4) = 0;
    *(&D_8011F310 + temp_v0_4) = (f32) D_801C6BB9 * 400.0f * 0.5f;
}
