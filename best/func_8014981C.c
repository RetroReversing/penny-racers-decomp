extern u8 D_80189CC9[];
extern u8 D_8018A276;
extern u8 D_8018A277[];
extern u32 D_8018D3A0[];

#define ROW_WORD(row, w) (*(u32 *)((u8 *)D_8018D3A0 + ((row) << 5) + ((w) << 2)))

void func_8014981C(s32 arg0) {
    u32 t2;
    u8 k;
    u8 w;
    u8 cnt;
    u32 mask;
    u32 bits;
    u8 a3;
    u8 n;

    for (k = 0; k < 3; k++) {
        D_80189CC9[k] = 0;
    }
    if (D_8018A276 != 0) {
        for (k = 0; k < D_8018A276; k++) {
            t2 = D_8018A277[k] & 0xF;
            a3 = 0;
            for (w = 0; w < 8; w++) {
                bits = ROW_WORD(t2, w) & ~ROW_WORD(arg0 & 0xFF, w);
                mask = 1;
                for (cnt = 0; cnt < 32; cnt++) {
                    if (bits & mask) {
                        a3++;
                    }
                    mask <<= 1;
                }
            }
            bits = ROW_WORD(t2, 0);
            mask = 1;
            n = 0;
            for (w = 0; w < 32; w++) {
                if (bits & mask) {
                    n++;
                }
                mask <<= 1;
            }
            if (n == 1) {
                if (!(bits & ROW_WORD(arg0 & 0xFF, 0)) && a3 != 0) {
                    a3--;
                }
            }
            D_80189CC9[k] = a3;
        }
    }
}
