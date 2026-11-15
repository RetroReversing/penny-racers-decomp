s32 func_801E435C(s32, s32);
extern u8 D_8021B079;
extern u16 D_8021E1AC;

void func_80207DC8(void) {
    s32 i;
    s32 cnt;
    s32 k;
    u16 *p;

    D_8021E1AC = 0;
    k = 0;
    cnt = 0;
    p = &D_8021E1AC;
    do {
        i = 0;
        do {
            if ((u8) func_801E435C((u8) i, (u8) k) < 4) {
                cnt += 1;
            }
            i += 1;
        } while ((u8) i < 9);
        k += 1;
        if ((u8) cnt == 9) {
            *p += 1;
        }
        cnt = 0;
    } while ((u8) k < 4);
    if ((s16) D_8021E1AC >= 4) {
        D_8021E1AC = 3;
    }
    if (D_8021B079 == 1) {
        D_8021E1AC = 3;
    }
}
