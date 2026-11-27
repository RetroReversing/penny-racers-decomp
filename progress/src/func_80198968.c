extern s8 blockPos[];
extern s8 D_801C6BB1;
extern s8 cursorY;
extern s8 cursorX;
extern u8 blockDirection;
u8 func_80198968(void) { s32 a2 = 0; s8 *b0; s8 *b1; s8 *b2;
 if (cursorX != 0) {
if (blockDirection == 0) { b0 = blockPos; do { if (b0[0] != cursorX - 1) { a2 = 1; } else if ((b0[1] != cursorY && cursorY != b0[1] - 1)) { a2 = 1; }  } while (0); }
 else if (blockDirection == 1) { b1 = blockPos; if (b1[0] != cursorX - 1) { a2 = 1; } else if (b1[1] != cursorY) { a2 = 1; } }
 else if (blockDirection == 2) { b2 = blockPos; if (b2[0] != cursorX - 1) { a2 = 1; } else if ((b2[1] != cursorY && cursorY != b2[1] + 1)) { a2 = 1; } }
 else if (blockDirection == 3) { if ((blockPos[0] != cursorX - 1 && blockPos[0] + 1 != cursorX - 1)) { a2 = 1; } else if (D_801C6BB1 != cursorY) { a2 = 1; } }
 } return a2; }
