extern void playMenuSound(s32);
extern u8 D_801C6B20;
extern s8 D_801C6B21;
extern s8 D_801C6B22;
extern s8 D_801C6B23;
extern s8 D_801C6B24;
extern u8 D_801C6B25;
extern u8 D_801C6B26;
extern s8 cursorY;
extern u16 D_801C6BDE[];
extern u16 blockPos[];
extern u16 D_801C6C10[];
extern s8 D_801C7063;
extern s8 finishPos[];
extern s8 cursorX;
extern u8 blockFootprint;
extern u8 *trackInfo;
extern u8 D_801C7AB8;

void func_80194E60(u8 *arg0)
{
  if (cursorY < 0x17) {
    if (trackInfo[1] == 5) {
      if (finishPos[0] == cursorX && finishPos[1] == cursorY + 1 && blockFootprint != 2) {
        *arg0 = 4;
        return;
      }
      if (finishPos[0] == cursorX && finishPos[1] == cursorY - 1 && blockFootprint != 1 && blockFootprint != 3) {
        *arg0 = 4;
        return;
      }
      if ((finishPos[0] == cursorX + 1 || finishPos[0] == cursorX - 1) && D_801C7063 == cursorY && blockFootprint != 0 && blockFootprint != 2) {
        *arg0 = 4;
        return;
      }
      if (D_801C6C10[cursorX + cursorY * 0x18] != 0xFFFF) {
        *arg0 = 4;
        return;
      }
      if (D_801C6B25 == 0) {
        *arg0 = 4;
        return;
      }
      if (D_801C6B25 == *arg0) {
        D_801C6B20 = 5;
      } else if (D_801C6B25 == 1) {
        D_801C6B20 = 0xD;
      } else if (D_801C6B25 == 3) {
        D_801C6B20 = 0xA;
      }
    } else {
      if (D_801C6C10[cursorX + cursorY * 0x18] != 0xFFFF) {
        *arg0 = 4;
        return;
      }
      if (D_801C6B25 == 0) {
        *arg0 = 4;
        return;
      }
      if (D_801C6B25 == *arg0) {
        D_801C6B20 = 5;
      } else if (D_801C6B25 == 1) {
        D_801C6B20 = 0xD;
      } else if (D_801C6B25 == 3) {
        D_801C6B20 = 0xA;
      }
    }
    D_801C6B22 = 0;
    D_801C6B23 = 1;
    D_801C6B21 = 5;
    if (trackInfo[0] == 4) {
      D_801C6B20 += 0x2E;
      D_801C6B21 = 0x33;
    }
    D_801C6B24 = 1;
    if (D_801C6B26 != 2) {
      playMenuSound(0x3B);
      D_801C6B26 = 2;
    }
  } else {
    *arg0 = D_801C7AB8;
  }
}
