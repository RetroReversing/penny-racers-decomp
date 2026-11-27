extern u16 D_801D5960[];
extern s32 D_801CF4C8;
typedef struct { u16 v[5]; } Tab5;
void func_801CA528(u32 *, u16, u16, u16, void *, u32);

void func_801CB820(u32 *arg0, u16 a1, u16 a2, u16 a3, u32 a4, u8 a5, u16 a6)
{
    u16 d[2][8];
    u32 val;
    s32 i;
    u16 j;
    u16 x;
    u16 y;

    *(Tab5 *) d = *(Tab5 *) D_801D5960;
    val = *arg0;
    for (i = 0; i < 5; i++)
    {
        d[1][i] = a6 / d[0][i] + 0x10;
        a6 = a6 - (a6 / d[0][i]) * d[0][i];
    }
    i = 0;
    while (d[1][i] == 0x10 && i < 4)
    {
        d[1][i] = 0;
        i++;
    }
    x = a1;
    y = a2;
    for (j = 5 - a5; j < 5; j++)
    {
        func_801CA528(&val, x, y, d[1][j], &D_801CF4C8, a4);
        x = a3 + x;
    }
    *arg0 = val;
}
