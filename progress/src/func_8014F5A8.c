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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, f32, f32, s32, f32, f32, f32); /* extern */
extern u8 D_8016BAE0[];
extern M2C_UNK D_80239748;
extern M2C_UNK func_8013AE60;
extern M2C_UNK func_8014F3B0;
extern M2C_UNK func_8014F43C;
extern M2C_UNK func_8014F55C;

void func_8014F5A8(void) {
    M2C_UNK *temp_s3;
    M2C_UNK *temp_s3_2;
    M2C_UNK *temp_s3_3;
    M2C_UNK *temp_s3_4;
    M2C_UNK *temp_s4;

    func_800DE41C(0, 3, 2, 0, 0x53, 0x96, D_8016BAE0, &func_8014F3B0, &func_8014F43C, 0.0f, 75.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x53, 0x96, D_8016BAE0 + 0x10, &func_8014F3B0, &func_8014F43C, 0.0f, 75.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x2C, 2, 0, 0x53, 0x96, D_8016BAE0 + 0x20, &func_8014F3B0, &func_8014F43C, 0.0f, 75.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x29, 2, 0, 0x53, 0x96, D_8016BAE0 + 0x30, &func_8014F3B0, &func_8014F43C, 0.0f, 75.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x25, 2, 0, 0x53, 0x96, D_8016BAE0 + 0x40, &func_8014F3B0, &func_8014F43C, 0.0f, 75.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x23, 2, 0, 0x53, 0x96, D_8016BAE0 + 0x50, &func_8014F3B0, &func_8014F43C, 0.0f, 75.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1F, 2, 0, 0x53, 0x96, D_8016BAE0 + 0x60, &func_8014F3B0, &func_8014F43C, 0.0f, 75.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, D_8016BAE0 + 0x70, &func_8013AE60, NULL, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, D_8016BAE0 + 0x80, &func_8013AE60, NULL, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, (temp_s3 = D_8016BAE0 + 0x90), NULL, NULL, -600.0f, 45.0f, -2000.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, NULL, NULL, -2400.0f, 45.0f, -2100.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, NULL, NULL, -4000.0f, 45.0f, -500.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, NULL, NULL, -4200.0f, 45.0f, 1000.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, NULL, NULL, -3800.0f, 45.0f, 3000.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3, NULL, NULL, -1800.0f, 45.0f, 4000.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, (temp_s3_2 = D_8016BAE0 + 0xA0), &func_8013AE60, NULL, -1804.0f, 58.0f, -704.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s3_2, &func_8013AE60, NULL, -1804.0f, 58.0f, -496.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 2, 0x80, 0x51, 0xFF, (temp_s3_3 = D_8016BAE0 + 0xB0), &func_8013AE60, NULL, -839.0f, 10.0f, -530.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, -915.0f, 10.0f, -617.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 767.0f, 10.0f, 120.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 487.0f, 10.0f, 120.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 7, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 886.0f, 65.0f, -1098.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 7, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 956.0f, 66.0f, -1169.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xC, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 1948.0f, 140.0f, -2812.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xC, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 1909.0f, 136.0f, -2640.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xC, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 1899.0f, 136.0f, -2490.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 4722.0f, 50.0f, 230.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 4735.0f, 55.0f, 80.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x18, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 2955.0f, 60.0f, 1314.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x18, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 2859.0f, 60.0f, 1283.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x19, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 2628.0f, 35.0f, 569.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x19, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 2482.0f, 30.0f, 471.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1C, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 2014.0f, 10.0f, 1824.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1C, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 2112.0f, 10.0f, 1710.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 9, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 2324.0f, 115.0f, -1293.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 9, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 2392.0f, 120.0f, -1426.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 4704.0f, 50.0f, 380.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 4463.0f, 53.0f, 784.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0x80, 0x51, 0xFF, temp_s3_3, &func_8013AE60, NULL, 4523.0f, 53.0f, 784.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 2, 0x80, 0x51, 0xFF, D_8016BAE0 + 0xC0, &func_8013AE60, NULL, -690.0f, 238.0f, -630.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 2, 0x80, 0x51, 0xFF, (temp_s3_4 = D_8016BAE0 + 0xD0), &func_8013AE60, NULL, -1092.0f, 59.0f, -377.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 3, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, -300.0f, 85.0f, -125.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 3, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, -300.0f, 85.0f, 125.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x10, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 4145.0f, 129.0f, -1660.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x10, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 4365.0f, 129.0f, -1310.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x11, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 4365.0f, 129.0f, -1530.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x11, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, 3995.0f, 129.0f, -1510.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, -299.0f, 94.0f, -125.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x2C, 2, 0x80, 0x51, 0xFF, temp_s3_4, &func_8013AE60, NULL, -2540.0f, 59.0f, -350.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x51, 0x96, D_8016BAE0 + 0xF0, &func_8013AE60, &func_8014F55C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 6, 2, 0, 0x51, 0xFF, (temp_s4 = D_8016BAE0 + 0xE0), &func_8013AE60, NULL, 845.0f, 30.0f, -590.0f, 5.14f, 0.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0xFF, temp_s4, &func_8013AE60, NULL, 3056.0f, 107.5f, -1847.0f, -2.78f, -112.0f, 0, 0.8f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1B, 2, 0, 0x51, 0xFF, temp_s4, &func_8013AE60, NULL, 2195.0f, 20.0f, 930.0f, -2.5f, -191.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x23, 2, 0, 0x51, 0xFF, temp_s4, &func_8013AE60, NULL, -1719.0f, 2.0f, 2737.0f, 0.0f, 124.25f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0, 0x51, 0xFF, temp_s4, &func_8013AE60, NULL, 1043.8f, 1.0f, 1845.0f, 0.0f, 90.0f, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, &D_80239748, &func_8013AE60, NULL, 4493.0f, 54.0f, 782.0f, 0.0f, 180.0f, 0, 1.0f, 1.0f, 1.0f);
}
