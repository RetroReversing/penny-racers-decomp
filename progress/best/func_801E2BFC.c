extern u8 D_801C5E9C;
extern u8 D_801C7080;
extern u8 D_801C7081;
extern u8 D_801C7082;
extern u8 D_801C7083;
extern u8 D_801C7084;
extern s32 D_801F18E0;
extern u8 D_801F18E4;
extern u8 D_801F18F8;
extern u8 D_801F18F9;
extern u8 D_801F18FA;
extern u8 D_801F18FB;
extern u8 D_801F18FC;

s32 func_801E2BA4(u8 *, s32, u8 *, u8 *);

void func_801E2BFC(void) {
    u8 *b0;
    u8 *b1;
    u8 *b2;
    u8 *b3;
    u8 *b4;
    u8 *dst;
    u8 *src;
    u8 *ptr;
    s32 i;
    unsigned off;

    dst = &D_801F18E4;
    src = &D_801C5E9C;
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    for (i = 8; i < 0x18; i++) {
        ((u8 *)&D_801F18E0)[i] = 0;
    }
    b0 = &D_801F18F8;
    b1 = &D_801F18F9;
    b2 = &D_801F18FA;
    b4 = &D_801F18FC;
    b3 = &D_801F18FB;
    for (i = 0; i < 200; i++) {
        off = i * 5;
        b1[off] = (&D_801C7081)[off];
        b0[off] = (&D_801C7080)[off];
        b2[off] = (&D_801C7082)[off];
        (&D_801F18FB)[off] = (&D_801C7083)[off];
        ptr = (void *)(b4); ptr = (void *)((char *)ptr + (s32)(off));
        *ptr = (&D_801C7084)[off];
    }
    D_801F18E0 = func_801E2BA4(ptr, 200, b4, b3);
}
