extern u8 D_801F18E0[];
extern char D_801E95A8[];
s32 func_8003DE60(char *fmt, ...);

s32 func_801E2BA4(void) {
    s32 sum = 0;
    u32 i = 4;

    do {
        sum += D_801F18E0[i];
        i++;
    } while (i < 0x400);
    func_8003DE60(D_801E95A8, sum);
    return sum;
}
