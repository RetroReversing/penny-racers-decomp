extern s8 blockPos[];
extern s8 D_801C6BB1;
extern s8 cursorY;
extern s8 cursorX;
extern u8 blockFootprint;
u8 func_80198858(void) { s32 a2 = 0; s32 n = cursorY; s8 *b0; s8 *b2;
 if (n != 0) {
  if (blockFootprint == 0) { b0 = blockPos; if (b0[0] != cursorX) { a2 = 1; } else do { if (b0[1] != n - 1) { a2 = 1; } } while (0); }
  else if (blockFootprint == 1) { if (blockPos[0] != cursorX && blockPos[0] - 1 != cursorX) { a2 = 1; } else if (D_801C6BB1 != cursorY - 1) { a2 = 1; } }
  else if (blockFootprint == 2) { b2 = blockPos; if (b2[0] != cursorX) { a2 = 1; } else if (b2[1] != cursorY - 1 && cursorY - 1 != b2[1] + 1) { a2 = 1; } }
  else if (blockFootprint == 3) { if (blockPos[0] != cursorX && blockPos[0] + 1 != cursorX) { a2 = 1; } else if (D_801C6BB1 != cursorY - 1) { a2 = 1; } }
 }
 return a2; }
