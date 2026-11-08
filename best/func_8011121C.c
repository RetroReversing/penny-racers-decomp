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
extern M2C_UNK D_80152720;
extern M2C_UNK D_80155F30;
extern M2C_UNK D_80155F7C;
extern M2C_UNK D_80155FA0;
extern M2C_UNK D_8015601C;
extern M2C_UNK D_80156180;
extern M2C_UNK D_801561FC;
extern M2C_UNK D_80156338;
extern M2C_UNK D_8016D588;
extern M2C_UNK D_8023991C;
extern M2C_UNK func_8013AE60;

void func_8011121C(void) {
    M2C_UNK *temp_s0;
    M2C_UNK *temp_s0_2;

    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, &D_8016D588, &func_8013AE60, NULL, 0x44AE8000, 0x42680000, 0xC4958000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, &D_8016D588, &func_8013AE60, NULL, 0x44C88000, 0x42680000, 0xC4958000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s0 = &D_8016D588 + 0x20;
    func_800DE41C(0, 1, 2, 0x80, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0x44E96000, 0x42C80000, 0xC49E0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0x45077000, 0x42C80000, 0x447B8000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x20, 2, 0x80, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0x44438000, 0x438B8000, 0x44966000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x20, 2, 0x80, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0x448A2000, 0x439E0000, 0x4441C000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 2, 2, 0x80, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0x44A64000, 0x43260000, 0xC51BF000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 3, 2, 0x80, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0x44434000, 0x433B0000, 0xC5251000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x11, 2, 0, 0x54, 0xC8, &D_8016D588 + 0x30, &D_80156180, &D_801561FC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x12, 2, 0, 0x54, 0xC8, &D_8016D588 + 0x40, &D_80156180, &D_801561FC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x54, 0xC8, &D_8016D588 + 0x50, &D_80156180, &D_801561FC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x54, 0xC8, &D_8016D588 + 0x60, &D_80156180, &D_801561FC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x15, 2, 0, 0x54, 0xC8, &D_8016D588 + 0x70, &D_80156180, &D_801561FC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x16, 2, 0, 0x54, 0xC8, &D_8016D588 + 0x80, &D_80156180, &D_801561FC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0, 0x54, 0xC8, &D_8016D588 + 0x90, &D_80156180, &D_801561FC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x18, 2, 0, 0x54, 0xC8, &D_8016D588 + 0xA0, &D_80156180, &D_801561FC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x51, 0xFF, &D_8016D588 + 0xB0, &D_80155FA0, &D_8015601C, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x15, 2, 0, 0x51, 0xFF, &D_8016D588 + 0xC0, &D_80155FA0, &D_8015601C, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x51, 0x96, &D_8016D588 + 0xE0, &func_8013AE60, &D_80155F30, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s0_2 = &D_8016D588 + 0xF0;
    func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x44A924CD, 0x40000000, 0xC43DAB85, 0, 0x43340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x12, 2, 0, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0xC542E5EC, 0xC327BAE1, 0xC4511666, 0x41175C29, 0xC2B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0xC54F27D7, 0xC36C199A, 0x4431C333, 0xC01851EC, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, NULL, &D_80156338, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 7, 2, 0, 0x51, 0x96, &D_8016D588 + 0x100, &func_8013AE60, &D_80155F7C, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 6, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC48DF0A4, 0x41A68F5C, 0xC4F66E66, 0xC1335C29, 0x42C351EC, 0x43340000, 1.5f, 1.5f, 1.0f);
    func_800DE41C(0, 9, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC2EF999A, 0x4284C28F, 0xC43DAAE1, 0xC1291EB8, 0xC28BF0A4, 0x402AE148, 1.5f, 1.5f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC5320B0A, 0xC2CC6148, 0x437C147B, 0xC107AE14, 0x42C06B85, 0, 1.5f, 1.5f, 1.0f);
    func_800DE41C(0, 0x11, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC52E2052, 0xC1F00000, 0xC48B89EC, 0xC0847AE1, 0xC1B2B852, 0x43340000, 1.5f, 1.5f, 1.0f);
    func_800DE41C(0, 0x16, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC56FCA66, 0xC332AB85, 0x44A35333, 0xC0A8F5C3, 0x431D7AE1, 0x43340000, 1.5f, 1.5f, 1.0f);
    func_800DE41C(0, 0x1B, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC4D64800, 0xC247AE14, 0x44DA5C7B, 0xC0DB3333, 0xC30F9C29, 0x432EFAE1, 1.5f, 1.5f, 1.0f);
    func_800DE41C(0, 0x22, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x446450A4, 0x431B30A4, 0xC3C56A3D, 0xC0B66666, 0x4047AE14, 0, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, NULL, &D_80152720, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
}
