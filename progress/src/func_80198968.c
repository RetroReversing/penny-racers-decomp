extern s8 D_801C6BB0[];
extern s8 D_801C6BB1;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u8 D_801C7469;
u8 func_80198968(void) { s32 a2 = 0; s8 *b0; s8 *b1; s8 *b2;
 if (D_801C7068 != 0) {
if (D_801C7469 == 0) { b0 = D_801C6BB0; do { if (b0[0] != D_801C7068 - 1) { a2 = 1; } else if ((b0[1] != D_801C6BB9 && D_801C6BB9 != b0[1] - 1)) { a2 = 1; }  } while (0); }
 else if (D_801C7469 == 1) { b1 = D_801C6BB0; if (b1[0] != D_801C7068 - 1) { a2 = 1; } else if (b1[1] != D_801C6BB9) { a2 = 1; } }
 else if (D_801C7469 == 2) { b2 = D_801C6BB0; if (b2[0] != D_801C7068 - 1) { a2 = 1; } else if ((b2[1] != D_801C6BB9 && D_801C6BB9 != b2[1] + 1)) { a2 = 1; } }
 else if (D_801C7469 == 3) { if ((D_801C6BB0[0] != D_801C7068 - 1 && D_801C6BB0[0] + 1 != D_801C7068 - 1)) { a2 = 1; } else if (D_801C6BB1 != D_801C6BB9) { a2 = 1; } }
 } return a2; }
