extern void func_80149CC4(s32, s32);
typedef struct {
    u8 pad0[4];
    u8 a[14];
    u8 pad12[2];
    u8 b[8];
    u16 c[16][8];
    s32 d[8];
} Src80189B38;
extern Src80189B38 D_80189B38;
extern u8 D_8021F048[][14];
extern u16 D_8021F270[][14][8];
extern s32 randomMasks[][8];
extern u8 D_8021E22F[][8][0x22];

u8 func_8014B714(u8 arg0)
{
    u8 ret = 0xFF;
    s32 i;
    s32 j;
    Src80189B38 *src;

    if (arg0 < 4) {
        ret = 0;
        src = &D_80189B38;
        for (i = 0; i < 14; i++) {
            D_8021F048[arg0][i] = src->a[i];
            for (j = 0; j < 8; j++) {
                D_8021F270[arg0][i][j] = src->c[i][j];
            }
        }
        for (i = 0; i < 8; i++) {
            randomMasks[arg0][i] = src->d[i];
            D_8021E22F[arg0][i][0] = src->b[i];
        }
        func_80149CC4(arg0, 1);
    }
    return ret;
}
