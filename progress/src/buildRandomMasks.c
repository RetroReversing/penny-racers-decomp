typedef struct { u16 a; u8 pad2[7]; u8 b; u8 padA[3]; u8 c; u8 padE; u8 d; u8 pad10[0x168]; } Rec;
extern s16 skipFirstRowFlag;
extern u8 D_80189B34;
extern Rec sCarSlots[];
extern u32 randomMasks[][8];
extern u32 kindMaskTable[];
extern u32 baseMaskTable[];
s32 nextRandom(void);
u32 func_8014A030(u32, u16, s32);

/* Builds the random bitmask table for the menu rows, using the kind's mask table, then clamps each entry to its field width. */ /* Builds the random bitmask table for the menu rows, using the kind's mask table, then clamps each entry to its field width. */ void buildRandomMasks(u8 kind) {
    u8 i;
    u8 row;
    u8 firstRow;
    u32 word;
    s32 maskIdx;
    Rec *rec;

    kind &= 3;
    firstRow = 1;
    if (skipFirstRowFlag != 0) {
        firstRow = 2;
    }
    i = 0;
    if (D_80189B34 == 2) {
        for (row = firstRow; row < 6; row++) {
            for (i = 0; i < 8; i++) {
                word = nextRandom();
                word |= nextRandom() << 16;
                randomMasks[row][i] = word;
                word = nextRandom();
                word |= nextRandom() << 16;
                randomMasks[row][i] &= ~word;
            }
            rec = &sCarSlots[row];
            randomMasks[row][0] = func_8014A030(randomMasks[row][0], rec->a, 1);
            i = rec->b - 1;
            randomMasks[row][5] = func_8014A030(randomMasks[row][5], i, 1);
            i = rec->c;
            i--;
            randomMasks[row][6] = func_8014A030(randomMasks[row][6], i, 1);
            i = rec->d;
            i--;
            randomMasks[row][7] = func_8014A030(randomMasks[row][7], i, 1);
            for (i = 0; i < 8; i++) {
                maskIdx = kind * 8 + i;
                randomMasks[row][i] &= kindMaskTable[maskIdx];
                randomMasks[row][i] |= baseMaskTable[i];
            }
        }
    }
    for (i = 0; i < 6; i++) {
        randomMasks[i][0] &= 0x3FFF;
        randomMasks[i][1] &= 0x1FFFFFF;
        randomMasks[i][2] &= 0xFFF;
        randomMasks[i][3] &= 0x1FF;
        randomMasks[i][4] &= 0x3FF;
        randomMasks[i][5] &= 0xFF;
        randomMasks[i][6] &= 0x1FFFFF;
        randomMasks[i][7] &= 0x7FFF;
    }
}
