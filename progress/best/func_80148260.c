extern u8 D_80189B36;
extern u16 D_8018D140[];
extern u16 D_8018D26C[];
extern u8 D_8018D3A0[];

s32 func_80148260(u8 arg0, s32 arg1) {
    s32 i;
    s32 j;
    s32 k;
    s32 n;
    u32 mask;

    for (i = 0; i < 0x96; i++) {
        D_8018D140[(arg1 & 0xFF) * 0x12C / 2 + i] = 0xFFFF;
    }
    n = 0;
    for (j = 0; j < 8; j++) {
        mask = *(u32 *)((u8 *)D_8018D3A0 + ((arg0 & 0xFF) << 5) + j * 4);
        for (k = 0; k < 0x20; k++) {
            if (mask & 1) {
                D_8018D140[(arg1 & 0xFF) * 0x12C / 2 + n] = (j << 8) | k;
                n++;
            }
            mask >>= 1;
        }
    }
    D_8018D140[(arg1 & 0xFF) * 0x12C / 2 + n] = 0x3FFF;
    n++;
    if ((arg1 & 0xFF) == 1) {
        if (D_80189B36 & 0x20) {
            D_8018D140[(arg1 & 0xFF) * 0x12C / 2 + n] = 0x4FFF;
            n++;
        }
        for (i = 0; i < 8; i++) {
            D_8018D26C[n + i] = D_8018D26C[i];
        }
    } else {
        D_8018D140[n] = 0x2FFF;
        n++;
        for (i = 0; i < 8; i++) {
            D_8018D140[n + i] = D_8018D140[i];
        }
    }
    return n;
}
