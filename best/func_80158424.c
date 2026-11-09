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
extern M2C_UNK D_8016D748;
extern M2C_UNK D_80239880;
extern M2C_UNK D_802398B4;
extern M2C_UNK D_8023991C;
extern M2C_UNK func_8013AE60;
extern M2C_UNK func_80152720;
extern M2C_UNK func_80157490;
extern M2C_UNK func_801574DC;
extern M2C_UNK func_80157568;
extern M2C_UNK func_8015769C;
extern M2C_UNK func_80157728;
extern M2C_UNK func_80157860;
extern M2C_UNK func_801578EC;
extern M2C_UNK func_80157A54;
extern M2C_UNK func_80157BBC;
extern M2C_UNK func_80157CF4;
extern M2C_UNK func_80157E30;
extern M2C_UNK func_801580F4;

void func_80158424(void) {
    M2C_UNK *temp_s0;
    M2C_UNK *temp_s1;
    M2C_UNK *temp_s1_2;

    func_800DE41C(0, 2, 2, 0, 0x54, 0x96, &D_8016D748, &func_801574DC, &func_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0, 0x54, 0x96, &D_8016D748 + 0x10, &func_801574DC, &func_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x54, 0x96, &D_8016D748 + 0x20, &func_801574DC, &func_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x54, 0x96, &D_8016D748 + 0x30, &func_801574DC, &func_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x15, 2, 0, 0x54, 0x96, &D_8016D748 + 0x40, &func_801574DC, &func_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x19, 2, 0, 0x54, 0x96, &D_8016D748 + 0x50, &func_801574DC, &func_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x10, 2, 0, 0x54, 0x96, &D_8016D748 + 0x60, &func_801574DC, &func_80157568, 0, 0xC1700000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1F, 2, 0, 0x54, 0x96, &D_8016D748 + 0x70, &func_8015769C, &func_80157728, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x22, 2, 0, 0x54, 0x96, &D_8016D748 + 0x80, &func_801574DC, &func_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x23, 2, 0, 0x54, 0x96, &D_8016D748 + 0x90, &func_801574DC, &func_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x24, 2, 0, 0x54, 0x96, &D_8016D748 + 0xA0, &func_801574DC, &func_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x25, 2, 0, 0x54, 0x96, &D_8016D748 + 0xB0, &func_801574DC, &func_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s1 = &D_8016D748 + 0xC0;
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0x44170000, 0x42680000, 0x45798000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0x44170000, 0x42680000, 0x456C8800, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 2, 2, 0, 0x51, 0xFF, &D_8016D748 + 0xD0, &func_80157CF4, NULL, 0xC44C8000, 0xC2480000, 0x45834800, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0, 0x51, 0xFF, &D_8016D748 + 0xE0, &func_80157E30, NULL, 0xC4C58000, 0xC2780000, 0x450C0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x22, 2, 0, 0x51, 0xFF, &D_8016D748 + 0xF0, &func_80157E30, NULL, 0x44EBA000, 0xC2480000, 0x451B4000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s1_2 = &D_8016D748 + 0x100;
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0x44320000, 0xC2480000, 0x4587D000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 3, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0xC47E4000, 0xC2480000, 0x45505000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0x43960000, 0xC3160000, 0xC5867000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 2, 0x80, 0x51, 0xFF, &D_8016D748 + 0x110, &func_8013AE60, NULL, 0xC3960000, 0xC2480000, 0x4593A800, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0, 0x53, 0xFF, &D_8016D748 + 0x120, &func_80157860, &func_801578EC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x53, 0x96, &D_8016D748 + 0x130, &func_8013AE60, &func_80157490, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s0 = &D_8016D748 + 0x140;
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0xC3BE0000, 0xC2C60000, 0xC546C000, 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0xC40B4000, 0x40000000, 0x45066000, 0, 0x43060000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x25, 2, 0, 0x51, 0xFF, temp_s0, &func_8013AE60, NULL, 0x44960000, 0x40000000, 0x456D3000, 0, 0xC2B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xC, 1, 0, 0x51, 0xFF, &D_80239880, &func_80157BBC, NULL, 0xC537F800, 0x43A28000, 0xC37A8000, 0, 0xC2340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 1, 0, 0x51, 0xFF, &D_802398B4, &func_80157A54, NULL, 0, 0x41F00000, 0xC55AC000, 0, 0xC2B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 6, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC31A0000, 0x42F38F5C, 0x44A5275C, 0, 0xC2B40000, 0x43340000, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0xE, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC527D4A4, 0xC2CE51EC, 0xC50230CD, 0, 0x42340000, 0, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x43681EB8, 0x43480000, 0xC4F36000, 0, 0x4332451F, 0, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, NULL, &func_80152720, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, NULL, &func_801580F4, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
}
