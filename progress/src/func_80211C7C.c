typedef struct { u8 r, g, b, a; } Col;
extern Col D_8021B650[];
extern u8 D_8021F264[];

void func_80211C7C(u8 n)
{
    s32 i;
    s32 j;
    s32 frac;
    u8 *p = D_8021F264;
    Col *c = (Col *)(p - 4);

    frac = p[0] % n;
    i = p[0] / n;
    j = i + 1;
    if (j >= 4) j = 0;
    c->r = D_8021B650[i].r - frac * (D_8021B650[i].r - D_8021B650[j].r) / n;
    c->g = D_8021B650[i].g - frac * (D_8021B650[i].g - D_8021B650[j].g) / n;
    c->b = D_8021B650[i].b - frac * (D_8021B650[i].b - D_8021B650[j].b) / n;
    c->a = D_8021B650[i].a - frac * (D_8021B650[i].a - D_8021B650[j].a) / n;
    if (++p[0] >= n * 4) p[0] = 0;
}
