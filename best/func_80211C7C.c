extern u8 D_8021B650[];
extern u8 D_8021B651[];
extern u8 D_8021B652[];
extern u8 D_8021B653[];
extern u8 D_8021F264;

void func_80211C7C(s32 arg0) {
    u8 *p;
    u32 n;
    u32 frac;
    u32 i;
    s32 j;

    p = &D_8021F264;
    n = arg0 & 0xFF;
    frac = (p[0] % n) & 0xFF;
    i = (p[0] / n) & 0xFF;
    j = i + 1;
    j = (-(j < 4) & j) * 4;
    i = i * 4;
    p[-4] = (s8)(D_8021B650[i] - ((s32)(frac * (D_8021B650[i] - D_8021B650[j])) / (s32)n));
    p[-3] = (s8)(D_8021B651[i] - ((s32)(frac * (D_8021B651[i] - D_8021B651[j])) / (s32)n));
    p[-2] = (s8)(D_8021B652[i] - ((s32)(frac * (D_8021B652[i] - D_8021B652[j])) / (s32)n));
    p[-1] = (s8)(D_8021B653[i] - ((s32)(frac * (D_8021B653[i] - D_8021B653[j])) / (s32)n));
    p[0] = p[0] + 1;
    if ((p[0] & 0xFF) >= n * 4) {
        p[0] = 0;
    }
}
