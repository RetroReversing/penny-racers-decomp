s32 func_8014A030();
s32 func_801FA30C();
extern u8 D_800DA260[];
extern s32 D_80168BC0[];
extern s32 D_80168C40[];
extern u8 D_80189B34;
extern s32 D_8018D3A0;
extern s32 D_8018D3A4;
extern s32 D_8018D3A8;
extern s32 D_8018D3AC;
extern u8 D_8018D3B0[];
extern s32 D_8018D3B4;
extern s32 D_8018D3B7;
extern s32 D_8018D3B8;
extern s32 D_8018D3BC;
extern s16 D_8021E1A2;

void func_80148DBC(s32 arg0) {
    register u8 i;
    u8 j;
    u8 k;
    s32 mode;
    s32 off;
    s32 *row;
    unsigned long s1;
    s32 t;
    u32 sh;

    sh = (arg0 & 3) * 8;
    mode = 1;
    if (D_8021E1A2 != 0) {
        mode = 2;
    }
    if (D_80189B34 == 2) {
        for (k = mode; k < 6; k++) {
            row = (s32 *)((u8 *)D_8018D3A0 + ((k & 0xFF) << 5));
            for (i = 0; i < 8; i++) {
                s1 = func_801FA30C();
                row[i] = s1 | (func_801FA30C() << 16);
                t = func_801FA30C();
                row[i] &= ~(t | (func_801FA30C() << 16));
            }
            {
                u8 *tbl = D_800DA260 + k * 0x178;
                row[0] = func_8014A030(row[0], *(u16 *)tbl, 1);
                row[5] = func_8014A030(row[5], (tbl[9] - 1) & 0xFF, 1);
                row[6] = func_8014A030(row[6], (tbl[0xD] - 1) & 0xFF, 1);
                row[7] = func_8014A030(row[7], (tbl[0xF] - 1) & 0xFF, 1);
            }
            for (i = 0; i < 8; i++) {
                row[i] &= D_80168BC0[((arg0 & 3) * 8) + i];
                row[i] |= D_80168C40[i];
            }
        }
    }
    for (j = 0; j < 6; j++) {
        off = (j & 0xFF) << 5;
        *(s32 *)(D_8018D3A0 + off) = *(s32 *)(D_8018D3A0 + off) & 0x3FFF;
        *(s32 *)(D_8018D3A4 + off) = *(s32 *)(D_8018D3A4 + off) & 0x01FFFFFF;
        *(s32 *)(D_8018D3A8 + off) = *(s32 *)(D_8018D3A8 + off) & 0xFFF;
        *(s32 *)(D_8018D3AC + off) = *(s32 *)(D_8018D3AC + off) & 0x1FF;
        *(s32 *)(D_8018D3B4 + off) = (s32) *(s32 *)(D_8018D3B7 + off);
        *(D_8018D3B0 + off) = *(D_8018D3B0 + off) & 0x3FF;
        *(s32 *)(D_8018D3B8 + off) = *(s32 *)(D_8018D3B8 + off) & 0x1FFFFF;
        *(s32 *)(D_8018D3BC + off) = *(s32 *)(D_8018D3BC + off) & 0x7FFF;
    }
}
