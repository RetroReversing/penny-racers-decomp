extern u8 D_8021E22F[][8][34];
extern u32 D_8018D3A0[][8];
extern u8 D_8021E1A7;

void func_80149CC4(s32 id, u8 flag)
{
    u8 i;
    u8 j;
    u8 count;
    u8 start;
    u32 mask;

    for (i = 0; i < 8; i++) {
        for (j = 1; j < 34; j++) {
            D_8021E22F[id][i][j] = 0;
        }
    }
    for (i = 0; i < 8; i++) {
        count = 0;
        mask = 1;
        start = i < 5 ? 2 : 3;
        for (j = 0; j < 0x1F; j++) {
            if (mask & D_8018D3A0[id][i]) {
                D_8021E22F[id][i][count + start] = j;
                count++;
            }
            mask <<= 1;
        }
        if (count == 0) {
            D_8021E22F[id][i][1] = 1;
            D_8021E22F[id][i][2] = 0x5A;
        } else if (i >= 5) {
            D_8021E22F[id][i][1] = count + 1;
            D_8021E22F[id][i][2] = 0x5A;
        } else {
            D_8021E22F[id][i][1] = count;
        }
    }
    if (!flag) {
        j = D_8021E1A7;
        if (j >= 3) {
            j = 2;
        }
        D_8021E22F[id][0][0] = 0;
        D_8021E22F[id][1][0] = j;
        D_8021E22F[id][2][0] = 0;
        D_8021E22F[id][3][0] = 0;
        D_8021E22F[id][4][0] = 0;
        D_8021E22F[id][5][0] = 0;
        D_8021E22F[id][6][0] = 0;
        D_8021E22F[id][7][0] = 0;
    }
}
