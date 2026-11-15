extern s32 func_80038650(void *, u32, s16 *, u8 *);
extern s32 func_80038E1C(void *, u32, s32);
extern f64 D_8004A928;
extern f64 D_8004A930;

void func_800389E4(void **arg0, u8 *arg1, u32 arg2) {
    s16 sp10;
    u32 loc[16];
    u32 sp24;
    u32 sp2C;
    u32 sp30;
    s32 sp34;
    u8 spB8[16];
    u8 spC8[16];
    u32 best;
    u32 idx;
    u32 i;
    u8 *base;
    u32 *tbl;
    s32 k;
    s32 v;
    u32 *t;

    base = (u8 *)*arg0;
    tbl = (u32 *)base;
    sp24 = 0;
    sp2C = 0;
    sp30 = 0;
    sp34 = 1;
    for (i = 0; i < 16; i++) {
        spB8[i] = 0;
        spC8[i] = 0;
        loc[i] = 0;
        if (tbl[i] != 0) {
            sp24 |= 1 << i;
            loc[i] = (u32)(base + tbl[i]);
            loc[i] = func_80038E1C(arg0, i, tbl[i]);
        }
    }
}
