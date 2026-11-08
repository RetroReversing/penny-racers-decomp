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
extern M2C_UNK D_80152720;
extern M2C_UNK D_80157490;
extern M2C_UNK D_801574DC;
extern M2C_UNK D_80157568;
extern M2C_UNK D_8015769C;
extern M2C_UNK D_80157728;
extern M2C_UNK D_80157860;
extern M2C_UNK D_801578EC;
extern M2C_UNK D_80157A54;
extern M2C_UNK D_80157BBC;
extern M2C_UNK D_80157CF4;
extern M2C_UNK D_80157E30;
extern M2C_UNK D_801580F4;
extern M2C_UNK D_80239880;
extern M2C_UNK D_802398B4;
extern M2C_UNK D_8023991C;
extern M2C_UNK func_8013AE60;
extern M2C_UNK func_8016D3AC;

void func_801130C4(void) {
    M2C_UNK *temp_s0;
    M2C_UNK *temp_s0_2;
    M2C_UNK *temp_s1;
    M2C_UNK *temp_s1_2;

    temp_s0 = &func_8016D3AC + 0x39C;
    func_800DE41C(0, 2, 2, 0, 0x54, 0x96, temp_s0, &D_801574DC, &D_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0, 0x54, 0x96, temp_s0 + 0x10, &D_801574DC, &D_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x13, 2, 0, 0x54, 0x96, temp_s0 + 0x20, &D_801574DC, &D_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x54, 0x96, temp_s0 + 0x30, &D_801574DC, &D_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x15, 2, 0, 0x54, 0x96, temp_s0 + 0x40, &D_801574DC, &D_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x19, 2, 0, 0x54, 0x96, temp_s0 + 0x50, &D_801574DC, &D_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x10, 2, 0, 0x54, 0x96, temp_s0 + 0x60, &D_801574DC, &D_80157568, 0, 0xC1700000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1F, 2, 0, 0x54, 0x96, temp_s0 + 0x70, &D_8015769C, &D_80157728, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x22, 2, 0, 0x54, 0x96, temp_s0 + 0x80, &D_801574DC, &D_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x23, 2, 0, 0x54, 0x96, temp_s0 + 0x90, &D_801574DC, &D_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x24, 2, 0, 0x54, 0x96, temp_s0 + 0xA0, &D_801574DC, &D_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x25, 2, 0, 0x54, 0x96, temp_s0 + 0xB0, &D_801574DC, &D_80157568, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s1 = temp_s0 + 0xC0;
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0x44170000, 0x42680000, 0x45798000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0x44170000, 0x42680000, 0x456C8800, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 2, 2, 0, 0x51, 0xFF, temp_s0 + 0xD0, &D_80157CF4, NULL, 0xC44C8000, 0xC2480000, 0x45834800, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0, 0x51, 0xFF, temp_s0 + 0xE0, &D_80157E30, NULL, 0xC4C58000, 0xC2780000, 0x450C0000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x22, 2, 0, 0x51, 0xFF, temp_s0 + 0xF0, &D_80157E30, NULL, 0x44EBA000, 0xC2480000, 0x451B4000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s1_2 = temp_s0 + 0x100;
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0x44320000, 0xC2480000, 0x4587D000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 3, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0xC47E4000, 0xC2480000, 0x45505000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0x43960000, 0xC3160000, 0xC5867000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 1, 2, 0x80, 0x51, 0xFF, temp_s0 + 0x110, &func_8013AE60, NULL, 0xC3960000, 0xC2480000, 0x4593A800, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1E, 2, 0, 0x53, 0xFF, temp_s0 + 0x120, &D_80157860, &D_801578EC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x53, 0x96, temp_s0 + 0x130, &func_8013AE60, &D_80157490, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s0_2 = temp_s0 + 0x140;
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0xC3BE0000, 0xC2C60000, 0xC546C000, 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 5, 2, 0, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0xC40B4000, 0x40000000, 0x45066000, 0, 0x43060000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x25, 2, 0, 0x51, 0xFF, temp_s0_2, &func_8013AE60, NULL, 0x44960000, 0x40000000, 0x456D3000, 0, 0xC2B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xC, 1, 0, 0x51, 0xFF, &D_80239880, &D_80157BBC, NULL, 0xC537F800, 0x43A28000, 0xC37A8000, 0, 0xC2340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 1, 0, 0x51, 0xFF, &D_802398B4, &D_80157A54, NULL, 0, 0x41F00000, 0xC55AC000, 0, 0xC2B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 6, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC31A0000, 0x42F38F5C, 0x44A5275C, 0, 0xC2B40000, 0x43340000, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0xE, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0xC527D4A4, 0xC2CE51EC, 0xC50230CD, 0, 0x42340000, 0, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0x17, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x43681EB8, 0x43480000, 0xC4F36000, 0, 0x4332451F, 0, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, NULL, &D_80152720, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, NULL, &D_801580F4, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
}
