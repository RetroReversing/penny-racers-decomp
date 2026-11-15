extern u8 D_80189CB7[];
extern u8 D_80189CBF[];
extern u8 D_80183BD3[];
extern u8 D_8018D140[];

void func_80148688(s32 arg0, s32 arg1) {
    u8 *p;
    u8 *q;
    u16 *p5;
    u8 *row;
    u16 *cell;
    u16 v;

    if ((arg1 & 0xFF) == 0) {
        p = D_80189CB7;
        q = p + 1;
    } else {
        p = D_80189CBF;
        q = p + 1;
    }
    p5 = (u16 *)(p + 5);
    if (arg0 & 1) {
        if (*p != 0) {
            *p = *(vu8 *)p - 1;
        } else {
            *p = *q - 1;
        }
    }
    if (arg0 & 2) {
        if (*p != *q - 1) {
            *p = *(vu8 *)p + 1;
        } else {
            *p = 0;
        }
    }
    D_80183BD3[0] = *p;
    row = D_8018D140 + (arg1 & 0xFF) * 0x12C;
    cell = (u16 *)(row + D_80183BD3[0] * 2);
    v = cell[3];
    *p5 = v;
    *(u16 *)(D_80183BD3 + 1) = v;
}
