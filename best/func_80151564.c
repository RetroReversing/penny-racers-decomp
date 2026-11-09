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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK, f32, f32, f32); /* extern */
extern M2C_UNK D_8016BC18;
extern M2C_UNK D_802398E8;
extern M2C_UNK func_8013AE60;
extern M2C_UNK func_80150DE0;
extern M2C_UNK func_80150E48;
extern M2C_UNK func_80150ED4;
extern M2C_UNK func_80151154;
extern M2C_UNK func_80151178;
extern M2C_UNK func_801513E4;

void func_80151564(void) {
    M2C_UNK *temp_s1;
    M2C_UNK *temp_s1_2;
    M2C_UNK *temp_s1_3;
    M2C_UNK *temp_s3;

    func_800DE41C(0, 2, 2, 0, 0x51, 0xFF, &D_8016BC18, &func_80150DE0, NULL, 0x44C58000, 0x43290000, 0xC48B0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 4, 2, 0, 0x51, 0xFF, &D_8016BC18, &func_80150DE0, NULL, 0x42900000, 0x43150000, 0xC4964000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x53, 0x96, &D_8016BC18 + 0x10, &func_80150E48, &func_80150ED4, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s1 = &D_8016BC18 + 0x20;
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0x44AE8000, 0x42680000, 0x40800000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0x44C78000, 0x42680000, 0x40800000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s1_2 = &D_8016BC18 + 0x30;
    func_800DE41C(0, 3, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0x44480000, 0x43200000, 0xC4A5A000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 4, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0xC3AB8000, 0x42C80000, 0xC463DA3D, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0x44AC0000, 0x43270000, 0x4512E000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s1_3 = &D_8016BC18 + 0x40;
    func_800DE41C(0, 0x17, 2, 0, 0x51, 0xFF, temp_s1_3, &func_8013AE60, NULL, 0x44B66CCD, 0x3F800000, 0x444A7000, 0, 0x4306DEB8, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0, 0x51, 0xFF, temp_s1_3, &func_8013AE60, NULL, 0xC420A70A, 0x3F800000, 0x4339B852, 0, 0xC2410000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x51, 0x96, &D_8016BC18 + 0x50, &func_8013AE60, &func_80151154, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s3 = &D_8016BC18 + 0x60;
    func_800DE41C(0, 3, 2, 0, 0x51, 0x96, temp_s3, &func_8013AE60, &func_80151154, 0x44540000, 0x3F800000, 0xC4528000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 4, 2, 0, 0x51, 0x96, temp_s3, &func_8013AE60, &func_80151154, 0x43F90000, 0x3F800000, 0xC471C000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x51, 0x96, temp_s3, &func_8013AE60, &func_80151154, 0x4361FD71, 0x42493333, 0x44FC8000, 0, 0, 0xC0B66666, 0.5f, 1.0f, 0.625f);
    func_800DE41C(0, 6, 2, 0x80, 0x51, 0xFF, &D_802398E8, &func_80151178, &func_801513E4, 0xC4610000, 0x42820000, 0xC4C58000, 0, 0, 0, 2.0f, 2.0f, 2.0f);
    func_800DE41C(0, 6, 2, 0x80, 0x51, 0xFF, &D_802398E8, &func_80151178, &func_801513E4, 0xC4610000, 0x42820000, 0xC4B18000, 0, 0, 0, 2.0f, 2.0f, 2.0f);
    func_800DE41C(0, 7, 2, 0x80, 0x51, 0xFF, &D_802398E8, &func_80151178, &func_801513E4, 0xC4B79B85, 0x42820000, 0xC4B79B85, 0, 0, 0, 2.0f, 2.0f, 2.0f);
    func_800DE41C(0, 7, 2, 0x80, 0x51, 0xFF, &D_802398E8, &func_80151178, &func_801513E4, 0xC4A9647B, 0x42820000, 0xC4A9647B, 0, 0, 0, 2.0f, 2.0f, 2.0f);
    func_800DE41C(0, 8, 2, 0x80, 0x51, 0xFF, &D_802398E8, &func_80151178, &func_801513E4, 0xC4C58000, 0x42820000, 0xC4610000, 0, 0, 0, 2.0f, 2.0f, 2.0f);
    func_800DE41C(0, 8, 2, 0x80, 0x51, 0xFF, &D_802398E8, &func_80151178, &func_801513E4, 0xC4B18000, 0x42820000, 0xC4610000, 0, 0, 0, 2.0f, 2.0f, 2.0f);
    func_800DE41C(0, 9, 2, 0x80, 0x51, 0xFF, &D_802398E8, &func_80151178, &func_801513E4, 0xC4B79B85, 0x42820000, 0xC3A591EC, 0, 0, 0, 2.0f, 2.0f, 2.0f);
    func_800DE41C(0, 9, 2, 0x80, 0x51, 0xFF, &D_802398E8, &func_80151178, &func_801513E4, 0xC4A9647B, 0x42820000, 0xC3DE6E14, 0, 0, 0, 2.0f, 2.0f, 2.0f);
}
