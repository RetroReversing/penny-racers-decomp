extern u8 D_80189CC9[];
extern u8 D_8018A276;
extern u8 D_8018A277[];
extern u32 D_8018D3A0[][8];

void func_8014981C(u8 arg0)
{
    u8 i;
    u8 j;
    u8 k;
    u8 count;
    u32 mask;
    u32 bits;
    u32 row;

    for (i = 0; i < 3; i++) {
        D_80189CC9[i] = 0;
    }
    {
        for (i = 0; i < D_8018A276; i++) {
            count = 0;
            row = D_8018A277[i] & 0xF;
            for (j = 0; j < 8; j++) {
                mask = 1;
                bits = D_8018D3A0[row][j];
                bits &= ~D_8018D3A0[arg0][j];
                for (k = 0; k < 32; k++) {
                    if (bits & mask) {
                        count++;
                    }
                    mask <<= 1;
                }
            }
            k = 0;
            mask = 1;
            bits = D_8018D3A0[row][0];
            for (j = 0; j < 32; j++) {
                if (bits & mask) {
                    k++;
                }
                mask <<= 1;
            }
            if (k == 1) {
                if (!(bits & D_8018D3A0[arg0][0]) && count != 0) {
                    count--;
                }
            }
            D_80189CC9[i] = count;
        }
    }
}
