extern void func_8003DE60();
typedef struct {
    s32 sum;
    u8 a[14];
    u8 pad12[2];
    u8 b[8];
    u16 c[16][8];
    s32 d[8];
    u8 e[4];
} Src80189B38;
extern Src80189B38 D_80189B38;
extern u8 D_8021F048[][14];
extern u16 D_8021F270[][14][8];
extern s32 D_8018D3A0[][8];
extern u8 D_8021E22F[][8][0x22];
extern char D_80183750[];

u8 func_8014B590(u8 arg0)
{
    u8 ret = 0xFF;
    s32 i;
    s32 j;
    s32 sum;
    Src80189B38 *dst;

    if (arg0 < 4) {
        ret = 0;
        dst = &D_80189B38;
        for (i = 0; i < 14; i++) {
            dst->a[i] = D_8021F048[arg0][i];
            for (j = 0; j < 8; j++) {
                dst->c[i][j] = D_8021F270[arg0][i][j];
            }
        }
        for (i = 0; i < 8; i++) {
            dst->d[i] = D_8018D3A0[arg0][i];
            dst->b[i] = D_8021E22F[arg0][i][0];
        }
        for (i = 0; i < 4; i++) {
            dst->e[i] = 0;
        }
        sum = 0;
        for (i = 4; i < 0x140; i++) {
            sum += ((u8 *)dst)[i];
        }
        dst->sum = sum;
        func_8003DE60(D_80183750, sum);
    }
    return ret;
}
