extern u8 D_801C5E9C[4];
extern char D_801C7080[];

void func_801B7584(void *arg0, s32 arg1)
{
    u8 *src;
    s8 *dst;
    u8 i;
    u32 k;

    D_801C5E9C[0] = ((u8 *) arg0)[0];
    D_801C5E9C[1] = ((u8 *) arg0)[1];
    D_801C5E9C[2] = ((u8 *) arg0)[2];
    D_801C5E9C[3] = ((u8 *) arg0)[3];
    i = 0;
    if (D_801C5E9C[2] != 0) {
        do {
            dst = D_801C7080 + (i & 0xFF) * 5;
            src = (u8 *) ((i & 0xFF) * 5 + arg1);
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
            dst[3] = src[3];
            dst[4] = src[4];
            i++;
        } while ((u32) (i & 0xFF) < D_801C5E9C[2]);
    }
    while ((i & 0xFF) < 200) { s8 *p; k = i & 0xFF;  p = D_801C7080 + k * 5; p[0] = 4; p[1] = 0; p[2] = -1; p[3] = -1; p[4] = -1;  i++; }
}
