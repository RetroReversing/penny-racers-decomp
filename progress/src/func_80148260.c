extern u8 D_80189B36;
extern u16 pickLists[][150];
extern u32 randomMasks[][8];
s32 func_80148260(u8 arg0, u8 arg1)
{
    s32 i;
    s32 j;
    s32 n;
    u32 mask;

    for (i = 0; i < 150; i++) {
        pickLists[arg1][i] = 0xFFFF;
    }
    n = 0;
    for (j = 0; j < 8; j++) {
        mask = randomMasks[arg0][j];
        for (i = 0; i < 32; i++) {
            if (mask & 1) {
                pickLists[arg1][n] = (j << 8) | i;
                n++;
            }
            mask >>= 1;
        }
    }
    pickLists[arg1][n] = 0x3FFF;
    n++;
    if (arg1 == 1) {
        if (D_80189B36 & 0x20) {
            pickLists[arg1][n] = 0x4FFF;
            n++;
        }
        for (i = 0; i < 8; i++) {
            pickLists[1][n + i] = pickLists[1][i];
        }
    } else {
        pickLists[0][n] = 0x2FFF;
        n++;
        for (i = 0; i < 8; i++) {
            pickLists[0][n + i] = pickLists[0][i];
        }
    }
    return n;
}
