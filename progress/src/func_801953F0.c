typedef struct {
  u8 unk0; u8 pad1[3]; u16 unk4; u8 pad6[4]; u8 unkA; u8 unkB; u8 unkC; u8 unkD; u8 padE[0x30]; u16 st; u8 pad40[0x24];
} R931;
typedef struct { s32 unk0; u32 unk4; u8 pad[0x68]; } Q931;
typedef struct { u8 a; u8 b; s8 c; s8 d; s8 e; } E931;
typedef struct { u8 unk0; u8 unk1; u8 pad2[2]; u8 *unk4; u8 pad8[8]; } M931;
typedef struct { u8 unk0; u8 unk1; u8 unk2; } H931;
typedef struct { s8 x; s8 z; s8 w; s8 pad3; u16 sel; } S931;
extern R931 D_8011F2F0[];
extern Q931 D_801E9990[];
extern E931 trackPointTable[];
extern M931 D_801C7D30[];
extern u8 D_8031445C[][8];
extern H931 *trackInfo;
extern u16 hudSlotIndex;
extern S931 blockPos;
extern u16 D_801C6BB6;
extern u16 D_801C6BE0[];
extern u16 trackPointLinks[];
extern u8 trackPointIndexByCell[];
extern u8 blockDirection;
extern u16 placedBlockObj;
extern u8 trackPointEntryCount;
extern u8 D_801C7AB8;
extern u8 D_801C7064;
extern u16 D_801C7066;
extern u8 cursorX;
extern u8 cursorY;
extern u8 D_801C6B20;
extern u8 D_801C6B21;
extern u8 trackStepX;
extern u8 trackStepY;
extern u8 D_801C6B24;
extern u8 D_801C6B25;
extern u8 D_801C6B26;
extern u8 D_801C6B27;
extern u16 D_801C7078;
extern u16 D_801C5EA4;
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, s32, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void playMenuSound(s32);
void updateBoardCamera(u16);
u8 getCursorDirection(u16);
void checkBlockPlacement(u8 *);
void beginLeftTrackStep(u8 *);
void beginDownTrackStep(u8 *);
void beginRightTrackStep(u8 *);
void func_801BFA1C(u8, u8);

#define MAP(t) \
      D_801C7D30[D_801C7078].unk0 = 0; \
      D_801C7D30[D_801C7078].unk1 = 1; \
      D_801C7D30[D_801C7078].unk4 = D_8031445C[(s8)t]; \
      id = objCreate(0, 0, 2, 0, 0x5A, 0xFF, &D_801C7D30[D_801C7078], 0, 0, \
                         (s8) cursorX * 400.0f * 0.5f, 0, (s8) cursorY * 400.0f * 0.5f, \
                         0, 0, 0, 0.5f, 0.5f, 0.5f); \
      D_8011F2F0[id].unk4 |= 8; \
      D_801C6BE0[D_801C7078] = id; \
      trackPointIndexByCell[D_801C7078] = trackInfo->unk2; \
      trackPointTable[trackInfo->unk2].a = D_801C7AB8; \
      trackPointTable[trackInfo->unk2].b = 0; \
      trackPointTable[trackInfo->unk2].c = cursorX; \
      trackPointTable[trackInfo->unk2].d = cursorY; \
      trackPointTable[trackInfo->unk2].e = t;

#define ERR \
      playMenuSound(0x3E); \
      D_8011F2F0[hudSlotIndex].unk0 = D_8011F2F0[hudSlotIndex].st; \
      D_8011F2F0[hudSlotIndex].st = 0xD; \
      D_801C5EA4 = 0;

#define DONE \
      D_801C6B27 = trackInfo->unk2; \
      trackInfo->unk2++; \
      trackPointEntryCount++; \
      D_801C6B25 = D_801C7AB8; \
      D_801C7AB8 = 4; \
      sel = 4; \
      D_801C6B24 = 0;

void func_801953F0(u16 arg0)
{
  u8 sel;
  u16 id;
  u8 i;

  updateBoardCamera(arg0);
  sel = getCursorDirection(arg0);
  if (sel == 0) {
    checkBlockPlacement(&sel);
  } else if (sel == 1) {
    beginLeftTrackStep(&sel);
  } else if (sel == 2) {
    beginDownTrackStep(&sel);
  } else if (sel == 3) {
    beginRightTrackStep(&sel);
  }
  if (D_801C6B24 != 0) {
    u8 unused[0xA0];
    if (sel != 4 && (D_801C7AB8 == 4 || D_801C7AB8 != sel)) {
      D_801C7AB8 = sel;
      D_801C7D30[D_801C7078].unk0 = 0;
      D_801C7D30[D_801C7078].unk1 = 1;
      D_801C7D30[D_801C7078].unk4 = D_8031445C[(s8)D_801C6B20];
      trackPointTable[D_801C6B27].a = D_801C7AB8;
      trackPointTable[D_801C6B27].b = 0;
      trackPointTable[D_801C6B27].c = cursorX;
      trackPointTable[D_801C6B27].d = cursorY;
      trackPointTable[D_801C6B27].e = D_801C6B20;
    }
    if (D_801E9990[arg0].unk0 == 1 && D_801E9990[arg0].unk4 == 0) {
      D_801C7078 = ((s8) cursorX + (s8) trackStepX) + ((s8) cursorY + (s8) trackStepY) * 0x18;
      if (D_801C7078 == D_801C7066) {
        if (trackPointEntryCount + 1 > 200) {
          ERR
        } else {
          cursorX += trackStepX;
          cursorY += trackStepY;
          if (trackInfo->unk1 == 6) {
            if (D_801C7AB8 == 0) {
              D_801C6B21 = 0x2A;
            } else if (D_801C7AB8 == 2) {
              D_801C6B21 = 0x2B;
            } else if (D_801C7AB8 == 1) {
              D_801C6B21 = 0x2C;
            } else if (D_801C7AB8 == 3) {
              D_801C6B21 = 0x2D;
            }
            if (trackInfo->unk0 == 4) {
              D_801C6B21 += 0x2E;
            }
            D_801C7064 = D_801C6B21;
          }
          MAP(D_801C6B21)
          trackPointEntryCount -= 4;
          func_801BFA1C(trackInfo->unk2, 1);
          DONE
          D_8011F2F0[placedBlockObj].unkA = 0x5B;
          D_8011F2F0[placedBlockObj].unkC = 0x64;
          D_8011F2F0[D_801C6BB6].unkA = 0x5B;
          D_8011F2F0[D_801C6BB6].unkC = 0x64;
          D_8011F2F0[hudSlotIndex].st = 0xE;
          playMenuSound(0x40);
        }
      } else {
        if (trackPointEntryCount == 200) {
          ERR
        } else {
          cursorX += trackStepX;
          cursorY += trackStepY;
          MAP(D_801C6B21)
          DONE
          playMenuSound(0x40);
        }
      }
    }
  }
  if (D_801E9990[arg0].unk4 % 20 == 1) {
    if (D_801C6BE0[D_801C7078] != 0xFFFF) {
      D_8011F2F0[D_801C6BE0[D_801C7078]].unkD = 2;
      D_801C6BE0[D_801C7078] = 0xFFFF;
      trackPointIndexByCell[D_801C7078] = 0xFF;
      trackInfo->unk2--;
      trackPointEntryCount--;
      trackPointTable[trackInfo->unk2].a = 4;
      trackPointTable[trackInfo->unk2].b = 0;
      trackPointTable[trackInfo->unk2].c = -1;
      trackPointTable[trackInfo->unk2].d = -1;
      trackPointTable[trackInfo->unk2].e = -1;
      D_801C6B27--;
      cursorX = trackPointTable[D_801C6B27].c;
      cursorY = trackPointTable[D_801C6B27].d;
      D_801C7078 = (s8) cursorX + (s8) cursorY * 0x18;
      D_801C7AB8 = 4;
      sel = 4;
      if (D_801C6B27 == 0) {
        D_801C6B25 = blockDirection;
      } else {
        D_801C6B25 = trackPointTable[D_801C6B27 - 1].a;
      }
      if (D_801C6B25 == 0 || D_801C6B25 == 2) {
        D_801C6B20 = 5;
      } else if (D_801C6B25 == 1 || D_801C6B25 == 3) {
        D_801C6B20 = 0;
      }
      if (trackInfo->unk0 == 4) {
        D_801C6B20 += 0x2E;
      }
      D_801C7D30[(u16)(trackPointTable[D_801C6B27].c + trackPointTable[D_801C6B27].d * 0x18)].unk4 = D_8031445C[(s8)D_801C6B20];
      trackPointTable[D_801C6B27].e = D_801C6B20;
      D_801C6B24 = 0;
      D_801C6B26 = 4;
    }
    if (D_801C7078 == blockPos.sel) {
      D_8011F2F0[placedBlockObj].unkD = 2;
      D_8011F2F0[D_801C6BB6].unkD = 2;
      D_8011F2F0[D_801C6BE0[blockPos.sel]].unkD = 2;
      if (trackInfo->unk1 != 5) {
        for (i = 0; i < 4; i++) {
          if (trackPointLinks[i] != 0xFFFF) {
            D_8011F2F0[trackPointLinks[i]].unkD = 2;
            trackPointLinks[i] = 0xFFFF;
          }
        }
      }
      D_801C6BE0[blockPos.sel] = 0xFFFF;
      trackPointIndexByCell[blockPos.sel] = 0xFF;
      blockDirection = 4;
      trackInfo->unk2 = 0;
      trackPointEntryCount = 0;
      trackPointTable[trackInfo->unk2].a = 4;
      trackPointTable[trackInfo->unk2].b = 0;
      trackPointTable[trackInfo->unk2].c = -1;
      trackPointTable[trackInfo->unk2].d = -1;
      trackPointTable[trackInfo->unk2].e = -1;
      cursorX = blockPos.x;
      cursorY = blockPos.z;
      D_801C7078 = blockPos.sel;
      D_8011F2F0[hudSlotIndex].st = 1;
      D_801C6B24 = 0;
      D_801C6B26 = 4;
    }
    playMenuSound(0x3F);
  }
}
