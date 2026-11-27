extern s8 randomSequenceTable[4][8][34];
void buildRandomSequenceTable(s32, s32);

void func_8014B410(void)
{
  u8 sp10[8];
  s32 i;
  s32 j;
  s32 k;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 8; j++) {
      k = randomSequenceTable[i][j][0];
      sp10[j] = randomSequenceTable[i][j][k + 2];
    }
    buildRandomSequenceTable(i, 1);
    for (j = 0; j < 8; j++) {
      randomSequenceTable[i][j][0] = 0;
      for (k = 0; k < randomSequenceTable[i][j][1]; k++) {
        if (randomSequenceTable[i][j][k + 2] == sp10[j]) {
          randomSequenceTable[i][j][0] = k;
          break;
        }
      }
    }
  }
}
