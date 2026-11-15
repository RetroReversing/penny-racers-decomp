extern u8 D_801C5E9C;
extern u8 D_801C7080;
extern u8 D_801C7081;
extern u8 D_801C7082;
extern u8 D_801C7083;
extern u8 D_801C7084;
extern u8 D_801F18E0;
extern u8 D_801F18E4;
extern u8 D_801F18F8;
extern u8 D_801F18F9;
extern u8 D_801F18FA;
extern u8 D_801F18FB;
extern u8 D_801F18FC;
s32 func_801E2BA4(u8 *, u32);

void func_801E2BFC(void) {
    u32 j;
    u32 off;
    u8 *src;
    u8 *dst;
    u8 *d0;
    u8 *d1;
    u8 *d2;
    u8 *d3;
    u8 *d4;

    dst = &D_801F18E4;
    src = &D_801C5E9C;
    for (j = 0; j < 4; j++) {
        dst[j] = src[j];
    }
    for (j = 8; j < 0x18; j++) {
        (&D_801F18E0)[j] = 0;
    }
    d0 = &D_801F18F8;
    d1 = &D_801F18F9;
    d2 = &D_801F18FA;
    d3 = &D_801F18FB;
    d4 = &D_801F18FC;
    j = 0;
    __repair_rows: {do{
        off = j * 5;}while(0);
        d0[off] = (&D_801C7080)[off];
        d1[off] = (&D_801C7081)[off];
        d2[off] = (&D_801C7082)[off];
        d3[off] = (&D_801C7083)[off];
        d4[off] = (&D_801C7084)[off];
        j++;
    }
if (j < 0xC8) goto __repair_rows;
    *(s32 *)&D_801F18E0 = func_801E2BA4(d4 + off, j);
}
