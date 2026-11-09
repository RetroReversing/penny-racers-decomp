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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32); /* extern */
extern M2C_UNK D_8016D428;
extern M2C_UNK D_8023991C;
extern M2C_UNK func_8013AE60;
extern M2C_UNK func_80152720;
extern M2C_UNK func_80155110;
extern M2C_UNK func_8015518C;
extern M2C_UNK func_801552A4;

void func_801552C4(void) {
    M2C_UNK *temp_s2;
    M2C_UNK *temp_s2_2;
    M2C_UNK *temp_s2_3;
    M2C_UNK *temp_s2_4;

    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, &D_8016D428, &func_8013AE60, NULL, 0x40800000, 0x42680000, 0x43C60000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, &D_8016D428, &func_8013AE60, NULL, 0x40800000, 0x42680000, 0x434C0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s2 = &D_8016D428 + 0x20;
    func_800DE41C(0, 0xC, 2, 0x80, 0x51, 0xFF, temp_s2, &func_8013AE60, NULL, 0x437E6148, 0x42C80000, 0xC4CFEE14, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0x80, 0x51, 0xFF, temp_s2, &func_8013AE60, NULL, 0x44674000, 0x431C0000, 0x44AA4000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s2_2 = &D_8016D428 + 0x30;
    func_800DE41C(0, 0x11, 2, 0x80, 0x51, 0xFF, temp_s2_2, &func_8013AE60, NULL, 0x451DBD1F, 0x4354EE14, 0x43D2E7AE, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x12, 2, 0x80, 0x51, 0xFF, temp_s2_2, &func_8013AE60, NULL, 0x450E25C3, 0x4314C28F, 0x448416B8, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s2_3 = &D_8016D428 + 0x40;
    func_800DE41C(0, 2, 2, 0x80, 0x51, 0xFF, temp_s2_3, &func_8013AE60, NULL, 0xC42E2AE1, 0x43B58000, 0x4126147B, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0x80, 0x51, 0xFF, temp_s2_3, &func_8013AE60, NULL, 0x44E33000, 0x43AB8000, 0xC40C23D7, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x12, 2, 0x80, 0x51, 0xFF, temp_s2_3, &func_8013AE60, NULL, 0x44E8E852, 0x43A28000, 0x44261852, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 2, 2, 0x80, 0x51, 0xFF, temp_s2_3, &func_8013AE60, NULL, 0xC4976000, 0x43B58000, 0x44078000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 6, 2, 0x80, 0x51, 0xFF, &D_8016D428 + 0x50, &func_8013AE60, NULL, 0xC51ACB5C, 0x42B00000, 0x419DD70A, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 6, 2, 0, 0x51, 0x9B, &D_8016D428 + 0x60, &func_8013AE60, &func_801552A4, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 8, 2, 0, 0x51, 0x9B, &D_8016D428 + 0x70, &func_8013AE60, &func_801552A4, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xB, 2, 0, 0x51, 0x9B, &D_8016D428 + 0x80, &func_8013AE60, &func_801552A4, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0, 0x51, 0x9B, &D_8016D428 + 0x90, &func_8013AE60, &func_801552A4, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x51, 0xFF, &D_8016D428 + 0xA0, &func_80155110, &func_8015518C, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s2_4 = &D_8016D428 + 0xB0;
    func_800DE41C(0, 6, 2, 0, 0x51, 0xFF, temp_s2_4, &func_8013AE60, NULL, 0xC51A0000, 0x430B0000, 0x43420000, 0, 0x43190000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0, 0x51, 0xFF, temp_s2_4, &func_8013AE60, NULL, 0x44298000, 0x3F800000, 0xC49E6000, 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x11, 2, 0, 0x51, 0xFF, temp_s2_4, &func_8013AE60, NULL, 0x4528B000, 0x43170000, 0x43E70000, 0x40800000, 0xC1D80000, 0x41000000, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x11, 2, 0, 0x51, 0xFF, temp_s2_4, &func_8013AE60, NULL, 0x45076000, 0x428A0000, 0x43420000, 0x41100000, 0xC1900000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 4, 2, 0, 0x51, 0xFF, &D_8016D428 + 0xC0, &func_8013AE60, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 2, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC484C148, 0x430FF852, 0x43CF9D71, 0, 0x4282D1EC, 0x43340000, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 8, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC4FE1948, 0x4301A666, 0xC478F7AE, 0xC0E570A4, 0x408147AE, 0, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0xE, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x44CEF1EC, 0x4305D47B, 0xC3D61EB8, 0, 0xC2EB428F, 0x43340000, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x443601EC, 0x43170CCD, 0x4461A47B, 0xC102E148, 0x42D56666, 0, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, NULL, &func_80152720, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
}
