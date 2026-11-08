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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32); /* extern */
extern M2C_UNK D_80152720;
extern M2C_UNK D_80153D40;
extern M2C_UNK D_80153EA8;
extern M2C_UNK D_80153EE8;
extern M2C_UNK D_80153F74;
extern M2C_UNK D_8015409C;
extern M2C_UNK D_80154128;
extern M2C_UNK D_8015426C;
extern M2C_UNK D_801542F8;
extern M2C_UNK D_80154418;
extern M2C_UNK D_80154494;
extern M2C_UNK D_8016D2C8;
extern M2C_UNK D_8023991C;
extern M2C_UNK func_8013AE60;

void func_8010F280(void) {
    M2C_UNK *temp_s1;
    M2C_UNK *temp_s1_2;

    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, &D_8016D2C8, &D_80153D40, NULL, 0, 0xC0800000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x15, 2, 0, 0x51, 0xFF, &D_8016D2C8 + 0x10, &D_80153D40, NULL, 0, 0xC0800000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1B, 2, 0, 0x54, 0x64, &D_8016D2C8 + 0x20, &D_80153EE8, &D_80153F74, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1C, 2, 0, 0x54, 0x64, &D_8016D2C8 + 0x30, &D_80153EE8, &D_80153F74, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x11, 2, 0, 0x51, 0xFF, &D_8016D2C8 + 0x40, &func_8013AE60, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x14, 2, 0, 0x51, 0xC8, &D_8016D2C8 + 0x50, &D_8015426C, &D_801542F8, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xB, 2, 0x80, 0x51, 0xFF, &D_8016D2C8 + 0x60, &func_8013AE60, NULL, 0x44ABE000, 0x43020000, 0xC557A000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1C, 2, 0, 0x53, 0x9B, &D_8016D2C8 + 0x70, &D_80154418, &D_80154494, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1C, 2, 0, 0x53, 0x9B, &D_8016D2C8 + 0x80, &D_80154418, &D_80154494, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1C, 2, 0, 0x55, 0x9B, &D_8016D2C8 + 0x90, &D_8015409C, &D_80154128, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x1C, 2, 0, 0x55, 0x9B, &D_8016D2C8 + 0xA0, &D_8015409C, &D_80154128, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s1 = &D_8016D2C8 + 0xB0;
    func_800DE41C(0, 0xA, 2, 0, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0x44DA4EB8, 0x424C0000, 0xC5183D71, 0, 0xC32B5EB8, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xD, 2, 0, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0x4437DF5C, 0x424C0000, 0xC57025C3, 0, 0xC2B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x11, 2, 0, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0xC4898000, 0x3F800000, 0xC4DA73D7, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x26, 2, 0, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0x4515099A, 0xC2C60000, 0x456DECCD, 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 9, 2, 0, 0x51, 0x96, &D_8016D2C8 + 0xC0, &func_8013AE60, &D_80153EA8, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    temp_s1_2 = &D_8016D2C8 + 0xD0;
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0x450F8000, 0x42680000, 0x44968000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0x451C8000, 0x42680000, 0x44968000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 2, 0, 0x51, 0x96, &D_8016D2C8 + 0xE0, &func_8013AE60, &D_80153EA8, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0xB, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x4416199A, 0x4335F5C3, 0xC544E8F6, 0xC1233333, 0x42C451EC, 0, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0xC, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x4495D75C, 0x43151EB8, 0xC58C81AE, 0, 0xC193851F, 0xC3340000, 3.0f, 3.0f, 1.0f);
    func_800DE41C(0, 0x20, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x43C47C29, 0x42960000, 0x458E6A66, 0, 0xC31D91EC, 0xC3340000, 2.0f, 2.0f, 1.0f);
    func_800DE41C(0, 0x23, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x440DDE14, 0x41C80000, 0x452B22E1, 0, 0x42340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0x23, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x43E6B47B, 0x41C80000, 0x4531C400, 0, 0x42340000, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, NULL, &D_80152720, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
}
