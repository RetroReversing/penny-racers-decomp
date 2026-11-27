typedef struct { u16 a; u8 pad2[7]; u8 b; u8 padA[3]; u8 c; u8 padE; u8 d; u8 pad10[0x168]; } Rec;
extern s16 D_8021E1A2;
extern u8 D_80189B34;
extern Rec D_800DA260[];
extern u32 D_8018D3A0[][8];
extern u32 D_80168BC0[];
extern u32 D_80168C40[];
s32 nextRandom(void);
u32 func_8014A030(u32, u16, s32);

void func_80148DBC(u8 kind) {
    u8 i;
    u8 j;
    u8 start;
    u32 v;
    s32 idx;
    Rec *r;

    kind &= 3;
    start = 1;
    if (D_8021E1A2 != 0) {
        start = 2;
    }
    i = 0;
    if (D_80189B34 == 2) {
        for (j = start; j < 6; j++) {
            for (i = 0; i < 8; i++) {
                v = nextRandom();
                v |= nextRandom() << 16;
                D_8018D3A0[j][i] = v;
                v = nextRandom();
                v |= nextRandom() << 16;
                D_8018D3A0[j][i] &= ~v;
            }
            r = &D_800DA260[j];
            D_8018D3A0[j][0] = func_8014A030(D_8018D3A0[j][0], r->a, 1);
            i = r->b - 1;
            D_8018D3A0[j][5] = func_8014A030(D_8018D3A0[j][5], i, 1);
            i = r->c;
            i--;
            D_8018D3A0[j][6] = func_8014A030(D_8018D3A0[j][6], i, 1);
            i = r->d;
            i--;
            D_8018D3A0[j][7] = func_8014A030(D_8018D3A0[j][7], i, 1);
            for (i = 0; i < 8; i++) {
                idx = kind * 8 + i;
                D_8018D3A0[j][i] &= D_80168BC0[idx];
                D_8018D3A0[j][i] |= D_80168C40[i];
            }
        }
    }
    for (i = 0; i < 6; i++) {
        D_8018D3A0[i][0] &= 0x3FFF;
        D_8018D3A0[i][1] &= 0x1FFFFFF;
        D_8018D3A0[i][2] &= 0xFFF;
        D_8018D3A0[i][3] &= 0x1FF;
        D_8018D3A0[i][4] &= 0x3FF;
        D_8018D3A0[i][5] &= 0xFF;
        D_8018D3A0[i][6] &= 0x1FFFFF;
        D_8018D3A0[i][7] &= 0x7FFF;
    }
}
