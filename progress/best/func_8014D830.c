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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, f32, f32, s32, f32, f32, f32); /* extern */
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
    
    M2C_UNK *temp_s3_3;
    M2C_UNK *temp_s3_4;
    M2C_UNK *temp_s3_5;
    s32 var_s0;

    var_s0 = 0;
    do {
        func_800DE41C(0, 0, 2, 0, 0x53, 0x96, (var_s0 * 0x10) + &D_8016B880, &func_8014D11C, &func_8014D18C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
        var_s0 += 1;
    } while (var_s0 < 6);
    func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, &D_8016B8E0, NULL, NULL, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x10, NULL, NULL, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x20, NULL, NULL, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x30, NULL, NULL, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x40, &func_8013AE60, NULL, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    temp_s3 = &D_8016B8E0 + 0x90;
    func_800DE41C(0, 0x19, 2, 0x80, 0x51, 0xFF, temp_s3, &func_8013AE60, NULL, -2950.0f, 98.0f, 705.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1B, 2, 0x80, 0x51, 0xFF, temp_s3, &func_8013AE60, NULL, -2995.0f, 100.0f, -400.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    temp_s3 = &D_8016B8E0 + 0x50;
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, &func_8013AE60, NULL, -4.0f, 58.0f, -1446.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, &func_8013AE60, NULL, -4.0f, 58.0f, -1654.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    temp_s3_3 = &D_8016B8E0 + 0x60;
    func_800DE41C(0, 5, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 1918.0f, -55.0f, -1039.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 2068.0f, -69.0f, -1039.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 2217.0f, -77.0f, -1029.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 492.0f, -35.0f, 1300.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 492.0f, -35.0f, 1180.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 492.0f, -35.0f, 1050.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, -1353.0f, 23.0f, 699.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, -1386.0f, 20.0f, 824.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, -1452.0f, 18.0f, 935.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, -936.0f, 15.0f, -887.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, -850.0f, 15.0f, -984.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, -817.0f, 15.0f, -1110.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    temp_s3_4 = &D_8016B8E0 + 0x70;
    func_800DE41C(0, 5, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 1920.0f, -25.0f, -1040.0f, 0.0f, -45.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 2070.0f, -39.0f, -1040.0f, 0.0f, -45.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 2219.0f, -46.0f, -1030.0f, 0.0f, -45.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 492.0f, -5.0f, 1050.0f, 0.0f, 180.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 492.0f, -5.0f, 1170.0f, 0.0f, 180.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 492.0f, -5.0f, 1300.0f, 0.0f, 180.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, -1353.0f, 53.0f, 699.0f, 0.0f, 180.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, -1386.0f, 50.0f, 824.0f, 0.0f, 180.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, -1452.0f, 48.0f, 935.0f, 0.0f, 180.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, -936.0f, 45.0f, -887.0f, 0.0f, 90.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, -850.0f, 45.0f, -984.0f, 0.0f, 90.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, -817.0f, 45.0f, -1110.0f, 0.0f, 90.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x100, &func_8013AE60, NULL, -458.0f, 95.0f, -380.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x15, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x110, &func_8013AE60, NULL, -1345.0f, 95.0f, -399.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 1, 0x8000, 0x53, 0x9B, &D_80239714, &func_8014D2B4, &func_8014D0A8, 174.0f, -46.0f, 1376.0f, 10.0f, 45.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 1, 0x8000, 0x53, 0x9B, &D_80239714, &func_8014D2B4, &func_8014D0A8, -770.0f, -16.0f, 1363.0f, 10.0f, -45.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 1, 0x8000, 0x53, 0x9B, &D_80239714, &func_8014D458, &func_8014CF50, 50.0f, 4.0f, -1727.0f, 10.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 1, 0x8000, 0x53, 0x9B, &D_80239714, &func_8014D5CC, &func_8014CFC0, 250.0f, 4.0f, -1727.0f, 10.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 1, 0x8000, 0x53, 0x9B, &D_80239714, &func_8014D458, &func_8014D0A8, 150.0f, 4.0f, -1423.0f, 10.0f, 180.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 1, 0x8000, 0x53, 0x9B, &D_80239714, &func_8014D5CC, &func_8014D034, 350.0f, 4.0f, -1423.0f, 10.0f, 180.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x120, &func_8013AE60, &func_8014D0A8, -444.0f, 120.0f, -156.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x130, &func_8013AE60, &func_8014D0A8, -900.0f, 120.0f, -330.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x15, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x140, &func_8013AE60, &func_8014D0A8, -1357.0f, 120.0f, -187.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 6, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0x80, &func_8013AE60, NULL, 2400.0f, -10.0f, -602.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1D, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0xA0, &func_8013AE60, NULL, -1500.0f, 75.0f, -1104.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1D, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0xB0, &func_8013AE60, NULL, -1781.0f, 75.0f, -1230.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1D, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0xC0, &func_8013AE60, NULL, -1219.0f, 75.0f, -1280.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1D, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0xD0, &func_8013AE60, NULL, -1496.0f, 191.0f, -1188.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1A, 2, 0, 0x51, 0xFF, &D_8016B8E0 + 0xE0, &func_8013AE60, NULL, -2929.0f, 44.0f, 485.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    temp_s3_5 = &D_8016B8E0 + 0xF0;
    func_800DE41C(0, 0x1C, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, -2075.0f, 79.0f, -1180.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xA, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, 877.0f, -6.0f, -111.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 9, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, 1477.0f, -6.0f, -311.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x12, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, -105.0f, 97.0f, 297.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x18, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, -2076.0f, 78.0f, 1290.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1B, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, -2940.0f, 77.0f, -100.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x19, 2, 0x80, 0x51, 0xFF, temp_s3_5, &func_8013AE60, NULL, -2776.0f, 78.0f, 1040.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, NULL, &func_8014D740, NULL, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0xFF, &D_8016BA30, &func_8013AE60, NULL, -1057.0f, -19.0f, 1269.0f, 0.0f, -8.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1A, 2, 0, 0x51, 0xFF, &D_8016BA30, &func_8013AE60, NULL, -2475.0f, 1.0f, 364.0f, 0.0f, 0.0f, 0, 0.8f, 1.0f, 1.0f);
}
