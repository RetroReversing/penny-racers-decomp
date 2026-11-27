typedef struct { u8 unk0; u8 pad1; u16 unk2; } P375;
typedef struct {
  u8 unk0; u8 pad1; u16 unk2; u8 pad4[8]; u8 unkC; u8 unkD; u8 padE[2]; u16 unk10; u8 pad12[0x2C];
  u16 timer; u8 pad40[4]; f32 unk44; f32 unk48; f32 unk4C; u8 pad50[0x10]; P375 *unk60;
} R375;
typedef struct { s32 unk0; u8 pad[0x6C]; } Q375;
typedef struct { u8 pad0; u8 unk1; } H375;
typedef struct { u8 unk0; u8 pad[0x8EF]; } W375;
typedef struct { u8 pad[0x2108]; s16 count; } G375;
extern R375 D_8011F2F0[];
extern Q375 btnPlayPressed[];
extern G375 sRowBoard;
extern u8 D_80189940[];
extern u8 D_8018D662[];
extern u8 D_8018A248;
extern u8 D_8018BC32;
extern u8 D_80189DC0;
extern u16 D_8018BC3C;
extern u16 gameState;
extern u16 objListHead;
extern u8 D_8018A250[][5];
extern u8 D_8018A452[];
extern u8 D_80189CC8;
extern H375 *trackInfo;
extern u16 D_80167E64;
extern u16 D_80167E66;
extern u8 D_8006FB14[];
extern u16 D_8018A26E[];
extern W375 D_8022AFE9[];
void objCreate();
void func_801375A0();
void drawNameListPanel();
void func_801CF468();
void func_80028100();
void func_802319E8();
void createNoticeScreenObj();
void func_8021F5F0();

void func_80135C64(u16 arg0)
{
  s32 i;
  u16 j;
  u16 a;
  u16 b;
  s32 k;

  switch (D_8011F2F0[arg0].timer)
  {
    case 0:
      for (i = 0; i < 5; i++)
      {
        D_8018A250[D_8011F2F0[arg0].unk0][i] = 0;
      }
      D_8018A452[0] = D_8018A452[1] = 0;
      D_8011F2F0[arg0].timer = 1;
      break;
    case 1:
      if (D_8011F2F0[arg0].unkC < 4)
      {
        D_8011F2F0[arg0].unk44 = 1.0f;
        D_8011F2F0[arg0].unk48 = 0;
        D_8011F2F0[arg0].unk4C = 30.0f;
        if (D_80189CC8 == 3 && trackInfo->unk1 == 6)
        {
          D_8011F2F0[arg0].unkC++;
          if (D_8011F2F0[arg0].unkC == 2)
          {
            D_8011F2F0[arg0].unkC = 4;
          }
        }
        else
        {
          D_8011F2F0[arg0].unkC++;
        }
        D_8011F2F0[arg0].timer = 0x14;
      }
      else
      {
        D_80167E64++;
        if (sRowBoard.count == D_80167E64)
        {
          D_8006FB14[4] = 3;
        }
        D_8011F2F0[arg0].timer = 2;
      }
      break;
    case 2:
      for (i = 0; i < sRowBoard.count; i++)
      {
        if (btnPlayPressed[i].unk0 == 1 && sRowBoard.count == D_80167E64)
        {
          if (D_80189CC8 == 2)
          {
            if (D_8018A250[i][3] == 0xFF && D_80167E66 == 0)
            {
              objCreate(0, 0, 3, 0, 0x80, 0, 0, func_801375A0, drawNameListPanel, 0, 0, 0, 0, 0, 0, 0, 0, 0);
              for (k = 0; k < sRowBoard.count; k++)
              {
                D_8011F2F0[D_8018A26E[k]].timer = 4;
              }
              D_80167E66 = 1;
            }
          }
          else
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
        if (btnPlayPressed[i].unk0 == 1)
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
        D_8011F2F0[arg0].unk2 |= 0x20;
        D_8011F2F0[arg0].timer = 0x15;
      }
      break;
  }

  if (D_80189CC8 == 0 || (D_80189CC8 == 2 && sRowBoard.count == 1))
  {
    if (D_8022AFE9[D_8011F2F0[arg0].unk0].unk0 != 5)
    {
      if (D_8018A452[D_8011F2F0[arg0].unk0] < 0x20)
      {
        D_8018A452[D_8011F2F0[arg0].unk0]++;
      }
      else
      {
        D_8018A452[D_8011F2F0[arg0].unk0] = 0;
      }
    }
  }
  if (D_8011F2F0[arg0].timer == 4)
  {
    for (i = 0; i < 5; i++)
    {
      if (D_8018A250[D_8011F2F0[arg0].unk0][i] != 0)
      {
        D_8018A250[D_8011F2F0[arg0].unk0][i] -= 5;
      }
      else
      {
        D_8011F2F0[arg0].unkD = 2;
      }
    }
  }
  else
  {
    if (D_8011F2F0[arg0].unkC != 0)
    {
      if (D_8018A250[D_8011F2F0[arg0].unk0][4] < 0xFF)
      {
        D_8018A250[D_8011F2F0[arg0].unk0][4] += 5;
      }
    }
    for (i = 0; i < D_8011F2F0[arg0].unkC; i++)
    {
      if (D_80189CC8 == 3 && trackInfo->unk1 == 6 && i == 1)
      {
        break;
      }
      if (D_8018A250[D_8011F2F0[arg0].unk0][i] < 0xFF)
      {
        D_8018A250[D_8011F2F0[arg0].unk0][i] += 5;
      }
    }
  }
}
