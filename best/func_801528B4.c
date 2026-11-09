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
extern M2C_UNK D_8016D150;
extern M2C_UNK D_802398E8;
extern M2C_UNK D_8023991C;
extern M2C_UNK func_8013AE60;
extern M2C_UNK func_80151178;
extern M2C_UNK func_801513E4;
extern M2C_UNK func_80151F50;
extern M2C_UNK func_80151F70;
extern M2C_UNK func_80151FFC;
extern M2C_UNK func_8015211C;
extern M2C_UNK func_80152198;
extern M2C_UNK func_801522F8;
extern M2C_UNK func_80152374;
extern M2C_UNK func_80152720;

void func_801528B4(void) {
    M2C_UNK *temp_s0;
    M2C_UNK *temp_s0_2;
    M2C_UNK *temp_s1;
    M2C_UNK *temp_s2;

    func_800DE41C(0, 7, 2, 0, 0x53, 0x96, &D_8016D150, &func_80151F70, &func_80151FFC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 7, 2, 0, 0x54, 0x96, &D_8016D150 + 0x10, &func_8015211C, &func_80152198, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 8, 2, 0, 0x54, 0x96, &D_8016D150 + 0x20, &func_8015211C, &func_80152198, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 9, 2, 0, 0x54, 0x96, &D_8016D150 + 0x40, &func_801522F8, &func_80152374, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 9, 2, 0, 0x53, 0x96, &D_8016D150 + 0x50, &func_80151F70, &func_80151FFC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xC, 2, 0, 0x53, 0x96, &D_8016D150 + 0x70, &func_80151F70, &func_80151FFC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xC, 2, 0, 0x54, 0x96, &D_8016D150 + 0x80, &func_8015211C, &func_80152198, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xC, 2, 0, 0x54, 0x96, &D_8016D150 + 0x90, &func_8015211C, &func_80152198, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1A, 2, 0, 0x53, 0x96, &D_8016D150 + 0xA0, &func_80151F70, &func_80151FFC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1A, 2, 0, 0x54, 0x96, &D_8016D150 + 0xB0, &func_801522F8, &func_80152374, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s0 = &D_8016D150 + 0xC0;
    func_800DE41C(0, 4, 2, 0x80, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0xC5041266, 0x43898000, 0xC5070148, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 8, 2, 0x80, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0xC39A5AE1, 0x43898000, 0xC5212E3D, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s0_2 = &D_8016D150 + 0xD0;
    func_800DE41C(0, 0xE, 2, 0x80, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x44FDE7AE, 0x430C0000, 0xC4DF2000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xE, 2, 0x80, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x44FDE7AE, 0x4324E8F6, 0xC4BBA148, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xE, 2, 0x80, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x45078C29, 0x430C0000, 0xC4DF2000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xE, 2, 0x80, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x45078C29, 0x4324E8F6, 0xC4BBA148, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x15, 2, 0x80, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x454E4000, 0x42B40000, 0x444AC000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x15, 2, 0x80, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x454E4000, 0x42B40000, 0x44774000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x15, 2, 0x80, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x453C3000, 0x42B40000, 0x44774000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x16, 2, 0x80, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x4528C000, 0x42B40000, 0x444AC000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x16, 2, 0x80, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x451C4000, 0x42B40000, 0x444AC000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x16, 2, 0x80, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x4528C000, 0x42B40000, 0x44774000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x16, 2, 0x80, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x451C4000, 0x42B40000, 0x44774000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s1 = &D_8016D150 + 0xE0;
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0x96, temp_s1, &func_8013AE60, &func_80151F50, 0x44E42333, 0x43170000, 0xC41F1B85, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0x96, temp_s1, &func_8013AE60, &func_80151F50, 0x44F0A333, 0x43170000, 0xC41F1B85, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0x96, temp_s1, &func_8013AE60, &func_80151F50, 0x450E2971, 0x43170000, 0xC41F1B85, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0x96, temp_s1, &func_8013AE60, &func_80151F50, 0x45146E3D, 0x43170000, 0xC41F1B85, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s2 = &D_8016D150 + 0xF0;
    func_800DE41C(0, 0xD, 2, 0, 0x51, 0xFF, temp_s2, &func_8013AE60, NULL, 0x4507D000, 0x42CA0000, 0xC514099A, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, temp_s2, &func_8013AE60, NULL, 0x45639452, 0x424C0000, 0x4439A0A4, 0, 0xC2860000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x21, 2, 0, 0x51, 0xFF, temp_s2, &func_8013AE60, NULL, 0xC4F08614, 0x3F800000, 0x4494FC7B, 0, 0xC2E2428F, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 2, 2, 0x80, 0x53, 0xC8, &D_802398E8, &func_80151178, &func_801513E4, 0xC4FA3FAE, 0x432C8000, 0xC4870000, 0, 0, 0, 3.0f, 3.0f, 3.0f);
    func_800DE41C(0, 2, 2, 0x80, 0x53, 0xC8, &D_802398E8, &func_80151178, &func_801513E4, 0xC5093948, 0x432C8000, 0xC4870000, 0, 0, 0, 3.0f, 3.0f, 3.0f);
    func_800DE41C(0, 3, 2, 0x80, 0x53, 0xC8, &D_802398E8, &func_80151178, &func_801513E4, 0xC4F95EB8, 0x43884000, 0xC4D24000, 0, 0, 0, 3.0f, 3.0f, 3.0f);
    func_800DE41C(0, 3, 2, 0x80, 0x53, 0xC8, &D_802398E8, &func_80151178, &func_801513E4, 0xC509A852, 0x43884000, 0xC4D24000, 0, 0, 0, 3.0f, 3.0f, 3.0f);
    func_800DE41C(0, 9, 2, 0x80, 0x53, 0xC8, &D_802398E8, &func_80151178, &func_801513E4, 0x431D8000, 0x43368000, 0xC52DE800, 0, 0, 0, 3.0f, 3.0f, 3.0f);
    func_800DE41C(0, 9, 2, 0x80, 0x53, 0xC8, &D_802398E8, &func_80151178, &func_801513E4, 0x43E24000, 0x43368000, 0xC52DE800, 0, 0, 0, 3.0f, 3.0f, 3.0f);
    func_800DE41C(0, 0xA, 2, 0x80, 0x53, 0xC8, &D_802398E8, &func_80151178, &func_801513E4, 0x443B8000, 0x43368000, 0xC52DE800, 0, 0, 0, 3.0f, 3.0f, 3.0f);
    func_800DE41C(0, 0xA, 2, 0x80, 0x53, 0xC8, &D_802398E8, &func_80151178, &func_801513E4, 0x44834000, 0x43368000, 0xC52DE800, 0, 0, 0, 3.0f, 3.0f, 3.0f);
    func_800DE41C(0, 0x17, 2, 0x80, 0x53, 0xC8, &D_802398E8, &func_80151178, &func_801513E4, 0x45050B5C, 0x42E55C29, 0x44682E14, 0, 0, 0, 3.0f, 3.0f, 3.0f);
    func_800DE41C(0, 0x17, 2, 0x80, 0x53, 0xC8, &D_802398E8, &func_80151178, &func_801513E4, 0x450C7A3D, 0x42E55C29, 0x4482F47B, 0, 0, 0, 3.0f, 3.0f, 3.0f);
    func_800DE41C(0, 0x18, 2, 0x80, 0x53, 0xC8, &D_802398E8, &func_80151178, &func_801513E4, 0x44F3D800, 0x42E55C29, 0x44A8D800, 0, 0, 0, 3.0f, 3.0f, 3.0f);
    func_800DE41C(0, 0x18, 2, 0x80, 0x53, 0xC8, &D_802398E8, &func_80151178, &func_801513E4, 0x450184CD, 0x42E55C29, 0x44B8099A, 0, 0, 0, 3.0f, 3.0f, 3.0f);
    func_800DE41C(0, 4, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC5009571, 0x4396A000, 0xC50BF28F, 0, 0x41B3D70A, 0, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x44E30C7B, 0x436D8000, 0xC2C00F5C, 0, 0x43169EB8, 0xC3340000, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0xF, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x4514D429, 0x436D8000, 0xC2C8E148, 0, 0xC317DEB8, 0, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x457E899A, 0x42FD6666, 0x4397E666, 0, 0xC286A8F6, 0, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0x1B, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC4150000, 0x43098000, 0x44BB8000, 0, 0x42B40000, 0, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, NULL, &func_80152720, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
}
