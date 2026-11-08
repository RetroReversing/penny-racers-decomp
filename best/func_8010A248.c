/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, f32, f32, f32); /* extern */
extern M2C_UNK D_8014F3B0;
extern M2C_UNK D_8014F43C;
extern M2C_UNK D_8014F55C;
extern M2C_UNK D_8016BAE0;
extern M2C_UNK D_80239748;
extern M2C_UNK func_8013AE60;

void func_8010A248(void) {
    M2C_UNK *temp_s3;
    M2C_UNK *temp_s3_2;
    M2C_UNK *temp_s3_3;
    M2C_UNK *temp_s3_4;
    M2C_UNK *temp_s4;

    func_800DE41C(0, 3, 2, 0, 0x53, 0x96, &D_8016BAE0, &D_8014F3B0, &D_8014F43C, 0, 0x42960000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x53, 0x96, &D_8016BAE0 + 0x10, &D_8014F3B0, &D_8014F43C, 0, 0x42960000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x2C, 2, 0, 0x53, 0x96, &D_8016BAE0 + 0x20, &D_8014F3B0, &D_8014F43C, 0, 0x42960000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x29, 2, 0, 0x53, 0x96, &D_8016BAE0 + 0x30, &D_8014F3B0, &D_8014F43C, 0, 0x42960000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x25, 2, 0, 0x53, 0x96, &D_8016BAE0 + 0x40, &D_8014F3B0, &D_8014F43C, 0, 0x42960000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x23, 2, 0, 0x53, 0x96, &D_8016BAE0 + 0x50, &D_8014F3B0, &D_8014F43C, 0, 0x42960000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1F, 2, 0, 0x53, 0x96, &D_8016BAE0 + 0x60, &D_8014F3B0, &D_8014F43C, 0, 0x42960000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, &D_8016BAE0 + 0x70, &func_8013AE60, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, &D_8016BAE0 + 0x80, &func_8013AE60, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s3 = &D_8016BAE0 + 0x90;
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, NULL, NULL, 0xC4160000, 0x42340000, 0xC4FA0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, NULL, NULL, 0xC5160000, 0x42340000, 0xC5034000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, NULL, NULL, 0xC57A0000, 0x42340000, 0xC3FA0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, NULL, NULL, 0xC5834000, 0x42340000, 0x447A0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, NULL, NULL, 0xC56D8000, 0x42340000, 0x453B8000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, NULL, NULL, 0xC4E10000, 0x42340000, 0x457A0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s3_2 = &D_8016BAE0 + 0xA0;
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3_2, &func_8013AE60, NULL, 0xC4E18000, 0x42680000, 0xC4300000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3_2, &func_8013AE60, NULL, 0xC4E18000, 0x42680000, 0xC3F80000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s3_3 = &D_8016BAE0 + 0xB0;
    func_800DE41C(0, 1, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0xC451C000, 0x41200000, 0xC4048000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0xC464C000, 0x41200000, 0xC41A4000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x443FC000, 0x41200000, 0x42F00000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x43F38000, 0x41200000, 0x42F00000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 7, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x445D8000, 0x42820000, 0xC4894000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 7, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x446F0000, 0x42840000, 0xC4922000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xC, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x44F38000, 0x430C0000, 0xC52FC000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xC, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x44EEA000, 0x43080000, 0xC5250000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xC, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x44ED6000, 0x43080000, 0xC51BA000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x45939000, 0x42480000, 0x43660000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x4593F800, 0x425C0000, 0x42A00000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x18, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x4538B000, 0x42700000, 0x44A44000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x18, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x4532B000, 0x42700000, 0x44A06000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x19, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x45244000, 0x420C0000, 0x440E4000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x19, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x451B2000, 0x41F00000, 0x43EB8000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1C, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x44FBC000, 0x41200000, 0x44E40000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1C, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x45040000, 0x41200000, 0x44D5C000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 9, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x45114000, 0x42E60000, 0xC4A1A000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 9, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x45158000, 0x42F00000, 0xC4B24000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x45930000, 0x42480000, 0x43BE0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x458B7800, 0x42540000, 0x44440000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x458D5800, 0x42540000, 0x44440000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 2, 0x80, 0x51, 0xFF, &D_8016BAE0 + 0xC0, &func_8013AE60, NULL, 0xC42C8000, 0x436E0000, 0xC41D8000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s3_4 = &D_8016BAE0 + 0xD0;
    func_800DE41C(0, 1, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0xC4888000, 0x426C0000, 0xC3BC8000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 3, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0xC3960000, 0x42AA0000, 0xC2FA0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 3, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0xC3960000, 0x42AA0000, 0x42FA0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x10, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0x45818800, 0x43010000, 0xC4CF8000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x10, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0x45886800, 0x43010000, 0xC4A3C000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x11, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0x45886800, 0x43010000, 0xC4BF4000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x11, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0x4579B000, 0x43010000, 0xC4BCC000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0xC3958000, 0x42BC0000, 0xC2FA0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x2C, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0xC51EC000, 0x426C0000, 0xC3AF0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x51, 0x96, &D_8016BAE0 + 0xF0, &func_8013AE60, &D_8014F55C, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s4 = &D_8016BAE0 + 0xE0;
    func_800DE41C(0, 6, 2, 0, 0x51, 0xFF, temp_s4, &func_8013AE60, NULL, 0x44534000, 0x41F00000, 0xC4138000, 0x40A47AE1, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0xFF, temp_s4, &func_8013AE60, NULL, 0x453F0000, 0x42D70000, 0xC4E6E000, 0xC031EB85, 0xC2E00000, 0, 0.8f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1B, 2, 0, 0x51, 0xFF, temp_s4, &func_8013AE60, NULL, 0x45093000, 0x41A00000, 0x44688000, 0xC0200000, 0xC33F0000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x23, 2, 0, 0x51, 0xFF, temp_s4, &func_8013AE60, NULL, 0xC4D6E000, 0x40000000, 0x452B1000, 0, 0x42F88000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0, 0x51, 0xFF, temp_s4, &func_8013AE60, NULL, 0x4482799A, 0x3F800000, 0x44E6A000, 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, &D_80239748, &func_8013AE60, NULL, 0x458C6800, 0x42580000, 0x44438000, 0, 0x43340000, 0, 1.0f, 1.0f, 1.0f);
}
