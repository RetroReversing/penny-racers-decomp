extern s8 D_8021E22F[4][8][34];
void func_80149CC4(s32, s32);

void func_8014B410(void)
{
  u8 sp10[8];
  s32 i;
  s32 j;
  s32 k;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 8; j++) {
      k = D_8021E22F[i][j][0];
      sp10[j] = D_8021E22F[i][j][k + 2];
    }
    func_80149CC4(i, 1);
    for (j = 0; j < 8; j++) {
      D_8021E22F[i][j][0] = 0;
      for (k = 0; k < D_8021E22F[i][j][1]; k++) {
        if (D_8021E22F[i][j][k + 2] == sp10[j]) {
          D_8021E22F[i][j][0] = k;
          break;
        }
      }
    }
  }
}
