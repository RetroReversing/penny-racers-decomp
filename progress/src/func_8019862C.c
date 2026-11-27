extern s8 cursorY;
extern u16 D_801C6BE2[];
extern s8 finishPos[];
extern s8 cursorX;
extern u8 blockDirection;
extern u8 *trackInfo;

s32 func_8019862C(void) { s32 r = 0; s8 *b1;  if (cursorX < 0x17 && D_801C6BE2[cursorY * 24 + cursorX] == 0xFFFF) { if (trackInfo[1] == 5) { do { if (finishPos[0] == cursorX && (finishPos[1] == cursorY + 1 || finishPos[1] == cursorY - 1)) { if ((blockDirection == 1) | (blockDirection == 3)) r = 1; } else { do { b1 = finishPos; } while (0); if (b1[0] == cursorX + 1 && b1[1] == cursorY) { if (blockDirection == 3) r = 1; } else if (b1[0] != cursorX - 1) r = 1; else if (b1[1] != cursorY) r = 1; else if ((blockDirection == 0) | (blockDirection == 2)) r = 1; } } while (0); } else r = 1; } return r & 0xFF; }

