extern u32 D_8018A3B8[];
extern u32 D_8018D3A0[];
extern s16 D_8021E1A2;

void func_8014BFFC(void) {
    s32 i;
    s32 j;
    s32 off;

    i = D_8021E1A2 + 1;
    if (i != 4) {
        if (i < 4) {
            do {
                off = i << 5;
                for (j = 0; j < 8; j++) {
                    *(u32 *)((u8 *)D_8018D3A0 + off + j * 4) = *(u32 *)((u8 *)D_8018A3B8 + off + j * 4);
                }
                i++;
            } while (i < 4);
        }
    }
}
