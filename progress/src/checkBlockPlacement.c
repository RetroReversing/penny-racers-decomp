extern void playMenuSound(s32);
extern u8 D_801C6B20;
extern s8 D_801C6B21;
extern s8 trackStepX;
extern s8 trackStepY;
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
extern u8 blockDirection;
extern u8 *trackInfo;
extern u8 D_801C7AB8;

/* Checks whether the block under the cursor can be dropped; sets placeState to 4 on rejection and updates the cursor animation and step. */ void checkBlockPlacement(u8 *placeState)
{
  if (cursorY > 0) {
    if (trackInfo[1] == 5) {
      if (finishPos[0] == cursorX && finishPos[1] == cursorY + 1 && blockDirection != 1 && blockDirection != 3) {
        *placeState = 4;
        return;
      }
      if (finishPos[0] == cursorX && finishPos[1] == cursorY - 1 && blockDirection != 0) {
        *placeState = 4;
        return;
      }
      if ((finishPos[0] == cursorX + 1 || finishPos[0] == cursorX - 1) && D_801C7063 == cursorY && blockDirection != 0 && blockDirection != 2) {
        *placeState = 4;
        return;
      }
      if (blockPos[cursorX + cursorY * 0x18] != 0xFFFF) {
        *placeState = 4;
        return;
      }
      if (D_801C6B25 == 2) {
        *placeState = 4;
        return;
      }
      if (D_801C6B25 == *placeState) {
        D_801C6B20 = 5;
      } else if (D_801C6B25 == 1) {
        D_801C6B20 = 0x13;
      } else if (D_801C6B25 == 3) {
        D_801C6B20 = 0x10;
      }
    } else {
      if (blockPos[cursorX + cursorY * 0x18] != 0xFFFF) {
        *placeState = 4;
        return;
      }
      if (D_801C6B25 == 2) {
        *placeState = 4;
        return;
      }
      if (D_801C6B25 == *placeState) {
        D_801C6B20 = 5;
      } else if (D_801C6B25 == 1) {
        D_801C6B20 = 0x13;
      } else if (D_801C6B25 == 3) {
        D_801C6B20 = 0x10;
      }
    }
    trackStepX = 0;
    trackStepY = -1;
    D_801C6B21 = 5;
    if (trackInfo[0] == 4) {
      D_801C6B20 += 0x2E;
      D_801C6B21 = 0x33;
    }
    D_801C6B24 = 1;
    if (D_801C6B26 != 0) {
      playMenuSound(0x3B);
      D_801C6B26 = 0;
    }
  } else {
    *placeState = D_801C7AB8;
  }
}
