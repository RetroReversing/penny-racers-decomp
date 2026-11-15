extern u8 D_80189CC9[];
extern u8 D_8018A276;
extern u8 D_8018A277[];
extern u32 D_8018D3A0[];

#define ROW_WORD(row, w) (*(u32 *)((u8 *)D_8018D3A0 + ((row) << 5) + ((w) << 2)))

void func_8014981C(s32 arg0) {
    
    u32 t2;
    u8 a1;
    u32 mask;
    u32 bits;
    u32 a2;
    u32 a3;
    u8 k;
    u8 cnt;

    for (a1 = 0; a1 < 3; a1++) {
        D_80189CC9[a1] = 0;
    }
    if (D_8018A276 != 0) {
        for (k = 0; k < D_8018A276; k++) {
            t2 = D_8018A277[k] & 0xF;
            a3 = 0;
            for (a1 = 0; a1 < 8; a1++) {
                bits = ROW_WORD(t2, a1) & ~ROW_WORD(arg0 & 0xFF, a1);
                for (mask = 1, cnt = 0; cnt < 32; cnt++, mask <<= 1) {
                    if (bits & mask) {
                        a3++;
                    }
                }
            }
            a2 = ROW_WORD(t2, 0);
            cnt = 0;
            for (mask = 1, a1 = 0; a1 < 32; a1++, mask <<= 1) {
                if (a2 & mask) {
                    cnt++;
                }
            }
            if (cnt == 1) {
                if (!(a2 & ROW_WORD(arg0 & 0xFF, 0)) && a3 != 0) {
                    a3--;
                }
            }
            D_80189CC9[k] = a3;
        }
    }
}
