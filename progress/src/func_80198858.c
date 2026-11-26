extern s8 D_801C6BB0[];
extern s8 D_801C6BB1;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u8 D_801C7469;
u8 func_80198858(void) { s32 a2 = 0; s32 n = D_801C6BB9; s8 *b0; s8 *b2;
 if (n != 0) {
  if (D_801C7469 == 0) { b0 = D_801C6BB0; if (b0[0] != D_801C7068) { a2 = 1; } else do { if (b0[1] != n - 1) { a2 = 1; } } while (0); }
  else if (D_801C7469 == 1) { if (D_801C6BB0[0] != D_801C7068 && D_801C6BB0[0] - 1 != D_801C7068) { a2 = 1; } else if (D_801C6BB1 != D_801C6BB9 - 1) { a2 = 1; } }
  else if (D_801C7469 == 2) { b2 = D_801C6BB0; if (b2[0] != D_801C7068) { a2 = 1; } else if (b2[1] != D_801C6BB9 - 1 && D_801C6BB9 - 1 != b2[1] + 1) { a2 = 1; } }
  else if (D_801C7469 == 3) { if (D_801C6BB0[0] != D_801C7068 && D_801C6BB0[0] + 1 != D_801C7068) { a2 = 1; } else if (D_801C6BB1 != D_801C6BB9 - 1) { a2 = 1; } }
 }
 return a2; }
