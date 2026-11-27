typedef struct { u8 unk0; u8 pad1; u16 unk2; } P375;
typedef struct {
  u8 pad0[0xC]; u8 unkC; u8 unkD; u8 padE[2]; u16 unk10; u8 pad12[0x2C];
  u16 timer; u8 pad40[4]; f32 unk44; f32 unk48; f32 unk4C; u8 pad50[0x10]; P375 *unk60;
} R375;
typedef struct { s32 unk0; u8 pad[0x6C]; } Q375;
typedef struct { u8 pad[0x2108]; s16 count; } G375;
extern R375 D_8011F2F0[];
extern Q375 D_801E9990[];
extern G375 sRowBoard;
extern u8 D_80189940[];
extern u8 D_8018D662[];
extern u8 D_8018A248;
extern u8 D_8018BC32;
extern u8 D_80189DC0;
extern u16 D_8018BC3C;
extern u16 gameState;
extern u16 objListHead;
void func_801CF468();
void func_80028100();
void func_802319E8();
void createNoticeScreenObj();
void func_8021F5F0();

void func_801375A0(u16 arg0)
{
  s32 i;
  u16 j;
  u16 a;
  u16 b;

  switch (D_8011F2F0[arg0].timer)
  {
    case 0:
      for (i = 0; i < 7; i++)
      {
        D_80189940[i] = 0;
        D_8018D662[i] = 0x78;
      }
      D_8018A248 = 0;
      D_8018BC32 = 0xFF;
      D_80189DC0 = 0x78;
      D_8011F2F0[arg0].timer = 1;
      break;
    case 1:
      if (D_8011F2F0[arg0].unkC < 7)
      {
        D_8011F2F0[arg0].unk44 = 1.0f;
        D_8011F2F0[arg0].unk48 = 0;
        D_8011F2F0[arg0].unk4C = 30.0f;
        D_8011F2F0[arg0].unkC++;
        D_8011F2F0[arg0].timer = 0x14;
      }
      else
      {
        D_8011F2F0[arg0].timer = 2;
      }
      break;
    case 2:
      for (i = 0; i < sRowBoard.count; i++)
      {
        if (D_801E9990[i].unk0 == 1)
        {
          D_8011F2F0[D_8018BC3C].unk60->unk0 = 2;
          D_8011F2F0[D_8018BC3C].unk60->unk2 = 0x14;
          func_801CF468(D_8018BC3C, 0, 0, 0);
          D_8011F2F0[arg0].unk44 = 3.0f;
          D_8011F2F0[arg0].unk48 = 0;
          D_8011F2F0[arg0].unk4C = 4.0f;
          func_80028100(0, 0x14);
          D_8011F2F0[arg0].timer = 0x1E;
        }
      }
      break;
    case 3:
      func_802319E8();
      createNoticeScreenObj();
      func_801CF468(D_8018BC3C, 0, 0, 0);
      func_8021F5F0();
      gameState = 0xA;
      break;
    case 0x14:
      D_8011F2F0[arg0].unk48 = (u16) ((u16) D_8011F2F0[arg0].unk48 + 1);
      a = D_8011F2F0[arg0].unk48;
      b = D_8011F2F0[arg0].unk4C;
      if (a > b)
      {
        D_8011F2F0[arg0].timer = D_8011F2F0[arg0].unk44;
      }
      for (i = 0; i < sRowBoard.count; i++)
      {
        if (D_801E9990[i].unk0 == 1)
        {
          D_8011F2F0[arg0].timer = D_8011F2F0[arg0].unk44;
        }
      }
      break;
    case 0x15:
      D_8011F2F0[arg0].unk48 = (u16) ((u16) D_8011F2F0[arg0].unk48 + 1);
      a = D_8011F2F0[arg0].unk48;
      b = D_8011F2F0[arg0].unk4C;
      if (a > b)
      {
        D_8011F2F0[arg0].timer = D_8011F2F0[arg0].unk44;
      }
      break;
    case 0x1E:
      if (D_8011F2F0[D_8018BC3C].unk60->unk0 == 0)
      {
        j = objListHead;
        while (j != 0xFFFF)
        {
          D_8011F2F0[j].unkD = 4;
          j = D_8011F2F0[j].unk10;
        }
        D_8011F2F0[arg0].unkD = 0;
        D_8011F2F0[D_8018BC3C].unkD = 0;
        D_8011F2F0[arg0].timer = 0x15;
      }
      break;
  }

  if (D_8018A248 < 0xFF)
  {
    D_8018A248 += 5;
  }
  if (D_80189DC0 != 0)
  {
    D_80189DC0 -= 5;
    if (D_80189DC0 != 0)
    {
      return;
    }
  }
  for (i = 1; i < D_8011F2F0[arg0].unkC; i++)
  {
    if (D_80189940[i - 1] < 0xFF)
    {
      D_80189940[i - 1] += 5;
    }
    if (D_8018D662[i - 1] != 0)
    {
      D_8018D662[i - 1] -= 0xA;
    }
  }
}
