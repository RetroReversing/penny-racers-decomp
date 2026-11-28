extern u16 decimalDivisors[];
extern s32 D_801CF4C8;
typedef struct { u16 v[5]; } Tab5;
void drawGlyphCell(u32 *, u16, u16, u16, void *, u32);

/* Draws an unsigned value as decimal digits (digitCount of them, leading zeros blanked), advancing x by xStep per glyph. */
void drawDecimalNumber(u32 *cursor, u16 x0, u16 y0, u16 xStep, u32 color, u8 digitCount, u16 value)
{
    u16 digits[2][8];
    u32 state;
    s32 i;
    u16 j;
    u16 x;
    u16 y;

    *(Tab5 *) digits = *(Tab5 *) decimalDivisors;
    state = *cursor;
    for (i = 0; i < 5; i++)
    {
        digits[1][i] = value / digits[0][i] + 0x10;
        value = value - (value / digits[0][i]) * digits[0][i];
    }
    i = 0;
    while (digits[1][i] == 0x10 && i < 4)
    {
        digits[1][i] = 0;
        i++;
    }
    x = x0;
    y = y0;
    for (j = 5 - digitCount; j < 5; j++)
    {
        drawGlyphCell(&state, x, y, digits[1][j], &D_801CF4C8, color);
        x = xStep + x;
    }
    *cursor = state;
}
