extern u16 decimalDivisors[];
typedef struct { u16 v[5]; } Tab5;
s32 drawText();

void func_801CBDE8(u32 *arg0, u16 a1, u16 a2, u16 a3, u32 a4, u8 a5, u16 a6)
{
    Tab5 tab;
    u8 buf[6];
    u32 val;
    s32 i;

    tab = *(Tab5 *) decimalDivisors;
    val = *arg0;
    for (i = 0; i < 5; i++)
    {
        buf[i] = a6 / tab.v[i] + 0x30;
        a6 = a6 - (a6 / tab.v[i]) * tab.v[i];
    }
    buf[i] = 0;
    i = 0;
    while (buf[i] == 0x30 && i < 4)
    {
        buf[i] = 0x20;
        i++;
    }
    drawText(&val, a1, a2, a3, a4, buf + (5 - a5));
    *arg0 = val;
}
