extern s32 D_80189B38[];
extern s32 D_8018D3A0;
extern u8 D_8021E22F[];
extern u8 D_8021F048[];
extern u8 D_8021F270[];
extern u8 D_80183750[];
s32 func_8003DE60(void *, s32, s32, void *);

s32 func_8014B590(s32 arg0) {
    s32 i;
    s32 j;
    s32 var_s0 = 0xFF;
    s32 sum;

    if ((u32)(arg0 & 0xFF) < 4U) {
        var_s0 = 0;
        for (i = 0; i < 0xE; i++) {
        }
        sum = 0;
        for (j = 4; j < 0x140; j++) {
            sum += ((s32 *)D_80189B38)[j];
        }
        D_80189B38[0] = sum;
        func_8003DE60(D_80183750, sum, j, D_80189B38);
    }
    return var_s0 & 0xFF;
}
