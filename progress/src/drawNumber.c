extern u16 decimalDivisors[];
typedef struct { u16 v[5]; } Tab5;
void drawText(s32 *arg0, s32 arg1, u16 arg2, s32 arg3, s32 arg4, u8 *arg5);

void drawNumber(u32 *arg0, u16 a1, u16 a2, u16 a3, u32 a4, u8 a5, s16 a6)
{
    Tab5 tab;
    u8 buf[7];
    u32 val;
    s32 i;
    u16 positive;
    s32 lim;
    s32 w;

    tab = *(Tab5 *) decimalDivisors;
    val = *arg0;
    w = a6;
    if ((s16) a6 < 0) {
        a6 = -(s16) w;
        positive = 0;
    } else {
        positive = 1;
    }
    buf[0] = 0x20;
    for (i = 0; i < 5; i++)
    {
        buf[i + 1] = (s16) a6 / tab.v[i] + 0x30;
        a6 -= ((s16) a6 / tab.v[i]) * tab.v[i];
    }
    buf[i + 1] = 0;
    i = 1;
    while (buf[i] == 0x30 && i < 5)
    {
        buf[i] = 0x20;
        i++;
    }
    if (!positive) {
        lim = 5;
        lim -= a5;
        if (i - 1 < lim) {
            buf[lim] = 0x2D;
        } else {
            buf[i - 1] = 0x2D;
        }
    }
    drawText((s32 *) &val, a1, a2, a3, a4, &buf[5 - a5 + positive]);
    *arg0 = val;
}
