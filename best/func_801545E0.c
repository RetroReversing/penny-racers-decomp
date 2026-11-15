s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, s32, s32, s32, s32, unsigned short, s32, f32, f32, f32);
extern u8 D_8016D2C8[];
extern s32 D_8023991C;
extern s32 func_8013AE60;
extern s32 func_80152720;
extern s32 func_80153D40;
extern s32 func_80153EA8;
extern s32 func_80153EE8;
extern s32 func_80153F74;
extern s32 func_8015409C;
extern s32 func_80154128;
extern s32 func_8015426C;
extern s32 func_801542F8;
extern s32 func_80154418;
extern s32 func_80154494;
void func_801545E0(void)
{
  s32 *temp_s1;
  s32 *temp_s1_2;
  func_800DE41C(0, 0x14, 2, 0, 0x51, 0xFF, D_8016D2C8, &func_80153D40, NULL, 0, 0xC0800000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0x15, 2, 0, 0x51, 0xFF, (D_8016D2C8) + 0x10, &func_80153D40, NULL, 0, 0xC0800000, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  __repair_rows: {
    func_800DE41C(0, 0x1B, 2, 0, 0x54, 0x64, (D_8016D2C8) + 0x20, &func_80153EE8, &func_80153F74, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  }
if (0) goto __repair_rows;
  func_800DE41C(0, 0x1C, 2, 0, 0x54, 0x64, (D_8016D2C8) + 0x30, &func_80153EE8, &func_80153F74, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0x11, 2, 0, 0x51, 0xFF, (D_8016D2C8) + 0x40, &func_8013AE60, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  do { func_800DE41C(0, 0x14, 2, 0, 0x51, 0xC8, (D_8016D2C8) + 0x50, &func_8015426C, &func_801542F8, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f); } while (0);
  func_800DE41C(0, 0xB, 2, 0x80, 0x51, 0xFF, (D_8016D2C8) + 0x60, &func_8013AE60, NULL, 0x44ABE000, 0x43020000, 0xC557A000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0x1C, 2, 0, 0x53, 0x9B, (D_8016D2C8) + 0x70, &func_80154418, &func_80154494, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0x1C, 2, 0, 0x53, 0x9B, (D_8016D2C8) + 0x80, &func_80154418, &func_80154494, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0x1C, 2, 0, 0x55, 0x9B, (D_8016D2C8) + 0x90, &func_8015409C, &func_80154128, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0x1C, 2, 0, 0x55, 0x9B, (D_8016D2C8) + 0xA0, &func_8015409C, &func_80154128, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  temp_s1 = (D_8016D2C8) + 0xB0;
  func_800DE41C(0, 0xA, 2, 0, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0x44DA4EB8, 0x424C0000, 0xC5183D71, 0, 0xC32B5EB8, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0xD, 2, 0, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0x4437DF5C, 0x424C0000, 0xC57025C3, 0, 0xC2B40000, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0x11, 2, 0, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0xC4898000, 0x3F800000, 0xC4DA73D7, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0x26, 2, 0, 0x51, 0xFF, temp_s1, &func_8013AE60, NULL, 0x4515099A, 0xC2C60000, 0x456DECCD, 0, 0x42B40000, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 9, 2, 0, 0x51, 0x96, (D_8016D2C8) + 0xC0, &func_8013AE60, &func_80153EA8, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  temp_s1_2 = (D_8016D2C8) + 0xD0;
  func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0x450F8000, 0x42680000, 0x44968000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0, 2, 0x80, 0x51, 0xFF, temp_s1_2, &func_8013AE60, NULL, 0x451C8000, 0x42680000, 0x44968000, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0, 2, 0, 0x51, 0x96, (D_8016D2C8) + 0xE0, &func_8013AE60, &func_80153EA8, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0xB, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x4416199A, 0x4335F5C3, 0xC544E8F6, 0xC1233333, 0x42C451EC, 0, 2.0f, 2.0f, 1.0f);
  func_800DE41C(0, 0xC, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x4495D75C, 0x43151EB8, 0xC58C81AE, 0, 0xC193851F, 0xC3340000, 3.0f, 3.0f, 1.0f);
  func_800DE41C(0, 0x20, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x43C47C29, 0x42960000, 0x458E6A66, 0, 0xC31D91EC, 0xC3340000, 2.0f, 2.0f, 1.0f);
  func_800DE41C(0, 0x23, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x440DDE14, 0x41C80000, 0x452B22E1, 0, 0x42340000, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0x23, 2, 0, 0x51, 0xFF, &D_8023991C, &func_8013AE60, NULL, 0x43E6B47B, 0x41C80000, 0x4531C400, 0, 0x42340000, 0, 1.0f, 1.0f, 1.0f);
  func_800DE41C(0, 0, 3, 0, 0x40, 0xFF, NULL, &func_80152720, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
}

