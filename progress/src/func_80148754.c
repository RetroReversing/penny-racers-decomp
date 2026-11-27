typedef struct { u8 pad0[0x6E]; u16 rows[14][9]; u8 sel[14]; } Car;
extern Car D_800DA260[];
extern u16 D_80189CBC;
extern u8 D_80189CBD;
extern u16 D_80189CC4;
extern u8 D_80189CC5;
extern void *D_8018D3A0[][8];
extern u16 D_80189C9E[];
extern u8 D_8021F048[][14];
extern u16 D_8021F270[][14][8];
void *func_8014A030(void *, u8, s32);
u8 func_80149778(u8);

void func_80148754(arg0, arg1)
u8 arg0;
u8 arg1;
{
    Car *c1;
    Car *c0;
    u16 x;
    u16 y;
    s32 row;
    u8 col;
    s32 i;
    s32 j;

    c1 = &D_800DA260[arg1];
    c0 = &D_800DA260[arg0];
    x = D_80189CBC >> 8;
    if (!(x & 8)) {
        row = x & 0xF;
        col = D_80189CBD;
        col &= 0x1F;
        D_8018D3A0[arg0][row] = func_8014A030(D_8018D3A0[arg0][row], col, 0);
        D_8018D3A0[arg1][row] = func_8014A030(D_8018D3A0[arg1][row], col, 1);
        if (!(x & 7)) {
            c1->sel[col] = c0->sel[col];
            for (i = 0; i < 9; i++) {
                c1->rows[col][i] = c0->rows[col][i];
            }
        }
    }
    y = D_80189CC4 >> 8;
    if (!(y & 8)) {
        row = y & 0xF;
        col = D_80189CC5;
        col &= 0x1F;
        D_8018D3A0[arg0][row] = func_8014A030(D_8018D3A0[arg0][row], col, 1);
        D_8018D3A0[arg1][row] = func_8014A030(D_8018D3A0[arg1][row], col, 0);
        if (!(y & 7)) {
            c0->sel[col] = c1->sel[col];
            for (i = 0; i < 8; i++) {
                c0->rows[col][i] = c1->rows[col][i];
            }
        }
    }
    D_80189C9E[arg1] = D_80189C9E[0xF];
    D_80189C9E[arg0] = D_80189C9E[0x13];
    D_80189C9E[arg1 + 6] = D_80189C9E[0x13];
    D_80189C9E[arg0 + 6] = D_80189C9E[0xF];
    if (func_80149778(arg1) == 1) {
        for (i = 0; i < 14; i++) {
            D_8021F048[arg1][i] = c1->sel[i];
            for (j = 0; j < 8; j++) {
                D_8021F270[arg1][i][j] = c1->rows[i][j];
            }
        }
    }
    if (func_80149778(arg0) == 1) {
        for (i = 0; i < 14; i++) {
            D_8021F048[arg0][i] = c0->sel[i];
            for (j = 0; j < 8; j++) {
                D_8021F270[arg0][i][j] = c0->rows[i][j];
            }
        }
    }
}
