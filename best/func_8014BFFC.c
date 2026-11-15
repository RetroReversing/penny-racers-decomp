extern s32 D_8018A3B8[];
extern s32 D_8018D3A0[];
extern s16 D_8021E1A2;

void func_8014BFFC(void) {
    s32 i;
    s32 j;

    i = D_8021E1A2 + 1;
    if (i != 4) {
        while (i < 4) {
            for (j = 0; j < 8; j++) {
                *(s32 *)((u8 *)D_8018D3A0 + i * 32 + j * 4) = *(s32 *)((u8 *)D_8018A3B8 + i * 32 + j * 4);
            }
            i++;
        }
    }
}
