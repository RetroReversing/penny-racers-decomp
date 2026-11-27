extern void playMenuSound(s32);
extern u8 D_801C6B20;
extern s8 D_801C6B21;
extern s8 trackStepX;
extern s8 D_801C6B23;
extern s8 D_801C6B24;
extern u8 D_801C6B25;
extern u8 D_801C6B26;
extern s8 cursorY;
extern u16 D_801C6BE2[];
extern s8 finishPos[];
extern s8 cursorX;
extern u8 blockDirection;
extern u8 *trackInfo;
extern u8 D_801C7AB8;

/* Checks whether a track piece can be placed one cell to the right of the cursor; sets up the step preview or marks the selection invalid (4). */
void beginRightTrackStep(u8 *selection)
{
  if (cursorX < 0x17) {
    if (trackInfo[1] == 5) {
      if (finishPos[0] == cursorX && (finishPos[1] == cursorY + 1 || finishPos[1] == cursorY - 1) && blockDirection != 1 && blockDirection != 3) {
        *selection = 4;
        return;
      }
      if (finishPos[0] == cursorX + 1 && finishPos[1] == cursorY && blockDirection != 3) {
        *selection = 4;
        return;
      }
      if (finishPos[0] == cursorX - 1 && finishPos[1] == cursorY && blockDirection != 0 && blockDirection != 2) {
        *selection = 4;
        return;
      }
      if (D_801C6BE2[cursorX + cursorY * 0x18] != 0xFFFF) {
        *selection = 4;
        return;
      }
      if (D_801C6B25 == 1) {
        *selection = 4;
        return;
      }
      if (D_801C6B25 == *selection) {
        D_801C6B20 = 0;
      } else if (D_801C6B25 == 0) {
        D_801C6B20 = 0xD;
      } else if (D_801C6B25 == 2) {
        D_801C6B20 = 0x13;
      }
    } else {
      if (D_801C6BE2[cursorX + cursorY * 0x18] != 0xFFFF) {
        *selection = 4;
        return;
      }
      if (D_801C6B25 == 1) {
        *selection = 4;
        return;
      }
      if (D_801C6B25 == *selection) {
        D_801C6B20 = 0;
      } else if (D_801C6B25 == 0) {
        D_801C6B20 = 0xD;
      } else if (D_801C6B25 == 2) {
        D_801C6B20 = 0x13;
      }
    }
    trackStepX = 1;
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
    *selection = D_801C7AB8;
  }
}
