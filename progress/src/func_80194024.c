typedef struct {
  u8 pad0[4]; u16 unk4; u8 pad6[5]; u8 unkB; u8 padC; u8 unkD; u8 padE[0xA]; f32 unk18; f32 unk1C; f32 unk20; u8 pad24[0x1B]; u8 unk3F; u8 pad40[0x24];
} R931;
typedef struct { s32 unk0; s32 unk4; u8 pad[0x68]; } Q931;
typedef struct { u8 a; u8 b; s8 c; s8 d; s8 e; } E931;
typedef struct { u8 unk0; u8 unk1; u8 pad2[2]; u8 *unk4; u8 pad8[8]; } M931;
typedef struct { u8 unk0; u8 pad1; u8 unk2; } H931;
extern R931 D_8011F2F0[];
extern Q931 D_801E9990[];
extern E931 trackPoints[];
extern M931 D_801C7D30[];
extern u8 D_8031445C[][8];
extern H931 *trackInfo;
extern u16 hudSlotIndex;
typedef struct { s8 x; s8 z; s8 w; s8 pad3; u16 sel; } S931;
extern S931 blockPos;
extern u16 D_801C6BB6;
extern u16 D_801C6BE0[];
extern u8 D_801C7AD8[];
extern u8 blockFootprint;
extern u16 D_801C746A;
extern u8 D_801C7AB6;
extern u8 D_801C7AB8;
typedef struct { u8 x; s8 z; u8 pad2[2]; u16 sel; } T931;
extern T931 finishPos;
extern u8 cursorX;
extern u8 cursorY;
extern u8 D_801C6B22;
extern u8 D_801C6B23;
extern u8 D_801C6B27;
extern u8 D_801C6B29;
extern u16 D_801C7078;
extern u16 D_801C7D18;
extern u16 D_801C5EA4;
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, s32, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void playMenuSound();
u8 getPieceFacing();
void func_8019F7C0();
void func_80192E00();
void func_801B4070();

extern u8 D_801C6B20;
extern u16 D_801C7470[];
void moveCursorByStick();

u8 func_80194024(u16 arg0)
{
  u8 state;
  u16 id;
  u8 i;
  u8 unused[0x40];

  state = D_8011F2F0[hudSlotIndex].unk3F;
  moveCursorByStick(arg0);
  func_8019F7C0(arg0);
  D_8011F2F0[D_801C7D18].unk18 = (s8) cursorX * 400.0f * 0.5f;
  D_8011F2F0[D_801C7D18].unk1C = 0;
  D_8011F2F0[D_801C7D18].unk20 = (s8) cursorY * 400.0f * 0.5f;
  if (D_801E9990[arg0].unk0 == 1 && D_801E9990[arg0].unk4 == 0)
  {
    finishPos.x = cursorX;
    finishPos.z = cursorY;
    finishPos.sel = (s8) cursorX + (s8) cursorY * 0x18;
    D_801C6BB6 = objCreate(0, 0, 3, 0, 0x53, 0xFF, 0, 0, func_801B4070,
                               (s8) finishPos.x * 400.0f * 0.5f, 0, finishPos.z * 400.0f * 0.5f,
                               0, 0, 0, 0.5f, 0.5f, 0.5f);
    D_8011F2F0[D_801C6BB6].unk4 |= 0x20;
    D_8011F2F0[D_801C6BB6].unkB = 0xC;
    D_801C7AB6 += 4;
    cursorX = blockPos.x + D_801C6B22;
    cursorY = blockPos.z + D_801C6B23;
    D_801C7078 = (s8) cursorX + (s8) cursorY * 0x18;
    if (blockFootprint == 0 || blockFootprint == 2)
    {
      D_801C6B20 = 5;
      if (trackInfo->unk0 == 4)
      {
        D_801C6B20 = 0x33;
      }
    }
    else if (blockFootprint == 1 || blockFootprint == 3)
    {
      D_801C6B20 = 0;
      if (trackInfo->unk0 == 4)
      {
        D_801C6B20 = 0x2E;
      }
    }
    D_801C7D30[D_801C7078].unk0 = 0;
    D_801C7D30[D_801C7078].unk1 = 1;
    D_801C7D30[D_801C7078].unk4 = D_8031445C[(s8) D_801C6B20];
    id = objCreate(0, 0, 2, 0, 0x5A, 0xFF, &D_801C7D30[D_801C7078], 0, 0,
                       (s8) cursorX * 400.0f * 0.5f, 0, (s8) cursorY * 400.0f * 0.5f,
                       0, 0, 0, 0.5f, 0.5f, 0.5f);
    D_8011F2F0[id].unk4 |= 8;
    D_801C6BE0[D_801C7078] = id;
    D_801C7AD8[D_801C7078] = trackInfo->unk2;
    trackPoints[trackInfo->unk2].a = blockFootprint;
    trackPoints[trackInfo->unk2].b = 0;
    trackPoints[trackInfo->unk2].c = cursorX;
    trackPoints[trackInfo->unk2].d = cursorY;
    trackPoints[trackInfo->unk2].e = D_801C6B20;
    D_801C6B27 = trackInfo->unk2;
    trackInfo->unk2 = 2;
    D_801C7AB6 += 1;
    D_8011F2F0[id].unk18 = (s8) cursorX * 400.0f * 0.5f;
    D_8011F2F0[id].unk1C = 0;
    D_8011F2F0[id].unk20 = (s8) cursorY * 400.0f * 0.5f;
    D_8011F2F0[D_801C7D18].unk18 = -10000.0f;
    D_8011F2F0[D_801C7D18].unk1C = -10000.0f;
    D_8011F2F0[D_801C7D18].unk20 = -10000.0f;
    D_801C6B29 = 0;
    state = 0xB;
    D_801C5EA4 = 0;
    playMenuSound(0x40);
  }
  else if (D_801E9990[arg0].unk0 == 0 && D_801E9990[arg0].unk4 == 1)
  {
    D_8011F2F0[D_801C746A].unkD = 1;
    for (i = 0; i < 4; i++)
    {
      if (D_801C7470[i] != 0xFFFF)
      {
        D_8011F2F0[D_801C7470[i]].unkD = 2;
        D_801C7470[i] = 0xFFFF;
      }
    }
    D_8011F2F0[D_801C6BE0[blockPos.sel]].unkD = 1;
    D_801C6BE0[blockPos.sel] = 0xFFFF;
    D_801C7AD8[D_801C7078] = 0xFF;
    trackInfo->unk2 = 0;
    D_801C7AB6 = 0;
    trackPoints[trackInfo->unk2].a = 4;
    trackPoints[trackInfo->unk2].b = 0;
    trackPoints[trackInfo->unk2].c = -1;
    trackPoints[trackInfo->unk2].d = -1;
    trackPoints[trackInfo->unk2].e = -1;
    cursorX = blockPos.x;
    cursorY = blockPos.z;
    blockFootprint = 4;
    state = 1;
    playMenuSound(0x3F);
  }
  return state;
}
