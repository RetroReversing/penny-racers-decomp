extern void playMenuSound(s32);
extern u8 D_801C6B20;
extern s8 D_801C6B21;
extern s8 D_801C6B22;
extern s8 D_801C6B23;
extern s8 D_801C6B24;
extern u8 D_801C6B25;
extern u8 D_801C6B26;
extern s8 cursorY;
extern u16 D_801C6BE2[];
extern s8 finishPos[];
extern s8 cursorX;
extern u8 blockFootprint;
extern u8 *trackInfo;
extern u8 D_801C7AB8;

void func_80195124(u8 *arg0)
{
  if (cursorX < 0x17) {
    if (trackInfo[1] == 5) {
      if (finishPos[0] == cursorX && (finishPos[1] == cursorY + 1 || finishPos[1] == cursorY - 1) && blockFootprint != 1 && blockFootprint != 3) {
        *arg0 = 4;
        return;
      }
      if (finishPos[0] == cursorX + 1 && finishPos[1] == cursorY && blockFootprint != 3) {
        *arg0 = 4;
        return;
      }
      if (finishPos[0] == cursorX - 1 && finishPos[1] == cursorY && blockFootprint != 0 && blockFootprint != 2) {
        *arg0 = 4;
        return;
      }
      if (D_801C6BE2[cursorX + cursorY * 0x18] != 0xFFFF) {
        *arg0 = 4;
        return;
      }
      if (D_801C6B25 == 1) {
        *arg0 = 4;
        return;
      }
      if (D_801C6B25 == *arg0) {
        D_801C6B20 = 0;
      } else if (D_801C6B25 == 0) {
        D_801C6B20 = 0xD;
      } else if (D_801C6B25 == 2) {
        D_801C6B20 = 0x13;
      }
    } else {
      if (D_801C6BE2[cursorX + cursorY * 0x18] != 0xFFFF) {
        *arg0 = 4;
        return;
      }
      if (D_801C6B25 == 1) {
        *arg0 = 4;
        return;
      }
      if (D_801C6B25 == *arg0) {
        D_801C6B20 = 0;
      } else if (D_801C6B25 == 0) {
        D_801C6B20 = 0xD;
      } else if (D_801C6B25 == 2) {
        D_801C6B20 = 0x13;
      }
    }
    D_801C6B22 = 1;
    D_801C6B23 = 0;
    D_801C6B21 = 0;
    if (trackInfo[0] == 4) {
      D_801C6B20 += 0x2E;
      D_801C6B21 = 0x2E;
    }
    D_801C6B24 = 1;
    if (D_801C6B26 != 3) {
      playMenuSound(0x3B);
      D_801C6B26 = 3;
    }
  } else {
    *arg0 = D_801C7AB8;
  }
}

