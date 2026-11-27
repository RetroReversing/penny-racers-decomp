extern void func_8014B854(s32);
extern u8 D_801C6B20;
extern s8 D_801C6B21;
extern s8 D_801C6B22;
extern s8 D_801C6B23;
extern s8 D_801C6B24;
extern u8 D_801C6B25;
extern u8 D_801C6B26;
extern s8 D_801C6BB9;
extern u16 D_801C6BDE[];
extern u16 D_801C6BB0[];
extern u16 D_801C6C10[];
extern s8 D_801C7063;
extern s8 D_801C7062[];
extern s8 D_801C7068;
extern u8 D_801C7469;
extern u8 *D_801C7AB0;
extern u8 D_801C7AB8;

void func_801948E0(u8 *arg0)
{
  if (D_801C6BB9 > 0) {
    if (D_801C7AB0[1] == 5) {
      if (D_801C7062[0] == D_801C7068 && D_801C7062[1] == D_801C6BB9 + 1 && D_801C7469 != 1 && D_801C7469 != 3) {
        *arg0 = 4;
        return;
      }
      if (D_801C7062[0] == D_801C7068 && D_801C7062[1] == D_801C6BB9 - 1 && D_801C7469 != 0) {
        *arg0 = 4;
        return;
      }
      if ((D_801C7062[0] == D_801C7068 + 1 || D_801C7062[0] == D_801C7068 - 1) && D_801C7063 == D_801C6BB9 && D_801C7469 != 0 && D_801C7469 != 2) {
        *arg0 = 4;
        return;
      }
      if (D_801C6BB0[D_801C7068 + D_801C6BB9 * 0x18] != 0xFFFF) {
        *arg0 = 4;
        return;
      }
      if (D_801C6B25 == 2) {
        *arg0 = 4;
        return;
      }
      if (D_801C6B25 == *arg0) {
        D_801C6B20 = 5;
      } else if (D_801C6B25 == 1) {
        D_801C6B20 = 0x13;
      } else if (D_801C6B25 == 3) {
        D_801C6B20 = 0x10;
      }
    } else {
      if (D_801C6BB0[D_801C7068 + D_801C6BB9 * 0x18] != 0xFFFF) {
        *arg0 = 4;
        return;
      }
      if (D_801C6B25 == 2) {
        *arg0 = 4;
        return;
      }
      if (D_801C6B25 == *arg0) {
        D_801C6B20 = 5;
      } else if (D_801C6B25 == 1) {
        D_801C6B20 = 0x13;
      } else if (D_801C6B25 == 3) {
        D_801C6B20 = 0x10;
      }
    }
    D_801C6B22 = 0;
    D_801C6B23 = -1;
    D_801C6B21 = 5;
    if (D_801C7AB0[0] == 4) {
      D_801C6B20 += 0x2E;
      D_801C6B21 = 0x33;
    }
    D_801C6B24 = 1;
    if (D_801C6B26 != 0) {
      func_8014B854(0x3B);
      D_801C6B26 = 0;
    }
  } else {
    *arg0 = D_801C7AB8;
  }
}
