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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, f32, f32, f32); /* extern */
extern M2C_UNK D_8016B880;
extern M2C_UNK D_8016B8E0;
extern M2C_UNK D_8016BA30;
extern M2C_UNK D_80239714;
extern M2C_UNK func_8013AE60;
extern M2C_UNK func_8014CF50;
extern M2C_UNK func_8014CFC0;
extern M2C_UNK func_8014D034;
extern M2C_UNK func_8014D0A8;
extern M2C_UNK func_8014D11C;
extern M2C_UNK func_8014D18C;
extern M2C_UNK func_8014D2B4;
extern M2C_UNK func_8014D458;
extern M2C_UNK func_8014D5CC;
extern M2C_UNK func_8014D740;

void func_8014D830(void) {
    M2C_UNK *temp_s3;
    M2C_UNK *temp_s3_2;
    M2C_UNK *temp_s3_3;
    M2C_UNK *temp_s3_4;
    M2C_UNK *temp_s3_5;
    s32 var_s0;

    var_s0 = 0;
    do {
        func_800DE41C(0, 0, 2, 0, 0x53, 0x96, (var_s0 * 0x10) + &D_8016B880, &func_8014D11C, &func_8014D18C, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        var_s0 += 1;
    } while (var_s0 < 6);
    func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, &D_8016B8E0, NULL, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x10, NULL, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x20, NULL, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x30, NULL, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x40, &func_8013AE60, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s3 = &D_8016B8E0 + 0x90;
    func_800DE41C(0, 0x19, 2, 0x80, 0x51, 0xFF, temp_s3, &func_8013AE60, NULL, 0xC5386000, 0x42C40000, 0x44304000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1B, 2, 0x80, 0x51, 0xFF, temp_s3, &func_8013AE60, NULL, 0xC53B3000, 0x42C80000, 0xC3C80000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s3_2 = &D_8016B8E0 + 0x50;
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3_2, &func_8013AE60, NULL, 0xC0800000, 0x42680000, 0xC4B4C000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3_2, &func_8013AE60, NULL, 0xC0800000, 0x42680000, 0xC4CEC000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s3_3 = &D_8016B8E0 + 0x60;
    func_800DE41C(0, 5, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x44EFC000, 0xC25C0000, 0xC481E000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x45014000, 0xC28A0000, 0xC481E000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x450A9000, 0xC29A0000, 0xC480A000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x43F60000, 0xC20C0000, 0x44A28000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x43F60000, 0xC20C0000, 0x44938000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0x43F60000, 0xC20C0000, 0x44834000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0xC4A92000, 0x41B80000, 0x442EC000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0xC4AD4000, 0x41A00000, 0x444E0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0xC4B58000, 0x41900000, 0x4469C000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0xC46A0000, 0x41700000, 0xC45DC000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0xC4548000, 0x41700000, 0xC4760000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 0xC44C4000, 0x41700000, 0xC48AC000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s3_4 = &D_8016B8E0 + 0x70;
    func_800DE41C(0, 5, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0x44F00000, 0xC1C80000, 0xC4820000, 0, 0xC2340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0x45016000, 0xC21C0000, 0xC4820000, 0, 0xC2340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0x450AB000, 0xC2380000, 0xC480C000, 0, 0xC2340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0x43F60000, 0xC0A00000, 0x44834000, 0, 0x43340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0x43F60000, 0xC0A00000, 0x44924000, 0, 0x43340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0x43F60000, 0xC0A00000, 0x44A28000, 0, 0x43340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0xC4A92000, 0x42540000, 0x442EC000, 0, 0x43340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0xC4AD4000, 0x42480000, 0x444E0000, 0, 0x43340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0xC4B58000, 0x42400000, 0x4469C000, 0, 0x43340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0xC46A0000, 0x42340000, 0xC45DC000, 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0xC4548000, 0x42340000, 0xC4760000, 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 0xC44C4000, 0x42340000, 0xC48AC000, 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x100, &func_8013AE60, NULL, 0xC3E50000, 0x42BE0000, 0xC3BE0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x15, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x110, &func_8013AE60, NULL, 0xC4A82000, 0x42BE0000, 0xC3C78000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 1, 0x8000, 0x53, 0x9B, &D_80239714, &func_8014D2B4, &func_8014D0A8, 0x432E0000, 0xC2380000, 0x44AC0000, 0x41200000, 0x42340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 1, 0x8000, 0x53, 0x9B, &D_80239714, &func_8014D2B4, &func_8014D0A8, 0xC4408000, 0xC1800000, 0x44AA6000, 0x41200000, 0xC2340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 1, 0x8000, 0x53, 0x9B, &D_80239714, &func_8014D458, &func_8014CF50, 0x42480000, 0x40800000, 0xC4D7E000, 0x41200000, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 1, 0x8000, 0x53, 0x9B, &D_80239714, &func_8014D5CC, &func_8014CFC0, 0x437A0000, 0x40800000, 0xC4D7E000, 0x41200000, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 1, 0x8000, 0x53, 0x9B, &D_80239714, &func_8014D458, &func_8014D0A8, 0x43160000, 0x40800000, 0xC4B1E000, 0x41200000, 0x43340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 1, 0x8000, 0x53, 0x9B, &D_80239714, &func_8014D5CC, &func_8014D034, 0x43AF0000, 0x40800000, 0xC4B1E000, 0x41200000, 0x43340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x120, &func_8013AE60, &func_8014D0A8, 0xC3DE0000, 0x42F00000, 0xC31C0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x130, &func_8013AE60, &func_8014D0A8, 0xC4610000, 0x42F00000, 0xC3A50000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x15, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x140, &func_8013AE60, &func_8014D0A8, 0xC4A9A000, 0x42F00000, 0xC33B0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 6, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x80, &func_8013AE60, NULL, 0x45160000, 0xC1200000, 0xC4168000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1D, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0xA0, &func_8013AE60, NULL, 0xC4BB8000, 0x42960000, 0xC48A0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1D, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0xB0, &func_8013AE60, NULL, 0xC4DEA000, 0x42960000, 0xC499C000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1D, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0xC0, &func_8013AE60, NULL, 0xC4986000, 0x42960000, 0xC4A00000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1D, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0xD0, &func_8013AE60, NULL, 0xC4BB0000, 0x433F0000, 0xC4948000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1A, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0xE0, &func_8013AE60, NULL, 0xC5371000, 0x42300000, 0x43F28000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s3_5 = &D_8016B8E0 + 0xF0;
    func_800DE41C(0, 0x1C, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, 0xC501B000, 0x429E0000, 0xC4938000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xA, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, 0x445B4000, 0xC0C00000, 0xC2DE0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 9, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, 0x44B8A000, 0xC0C00000, 0xC39B8000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x12, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, 0xC2D20000, 0x42C20000, 0x43948000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x18, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, 0xC501C000, 0x429C0000, 0x44A14000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1B, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, 0xC537C000, 0x429A0000, 0xC2C80000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x19, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, 0xC52D8000, 0x429C0000, 0x44820000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, NULL, &func_8014D740, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0xFF, &D_8016BA30, &func_8013AE60, NULL, 0xC4842000, 0xC1980000, 0x449EA000, 0, 0xC1000000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1A, 2, 0, 0x51, 0xFF, &D_8016BA30, &func_8013AE60, NULL, 0xC51AB000, 0x3F800000, 0x43B60000, 0, 0, 0, 0.8f, 1.0f, 1.0f);
}
