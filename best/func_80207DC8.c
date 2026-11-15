s32 func_801E435C(s32, s32);
extern u8 D_8021B079;
extern u16 D_8021E1AC;

void func_80207DC8(void) {
    u16 *p;
    u8 i;
    u8 j;
    u8 count;

    D_8021E1AC = 0;
    j = 0;
    count = 0;
    p = &D_8021E1AC;
    do {
        i = 0;
        do {
            if ((u8)func_801E435C(i, j) < 4) {
                count++;
            }
            i++;
        } while (i < 9);
        j++;
        if (count == 9) {
            (*p)++;
        }
        count = 0;
    } while (j < 4);
    {
        u16 *q = &D_8021E1AC;
        if ((s16)*q >= 4) {
            *q = 3;
        }
    }
    if (D_8021B079 == 1) {
        D_8021E1AC = 3;
    }
}
