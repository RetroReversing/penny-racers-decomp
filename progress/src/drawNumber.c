extern u16 decimalDivisors[];
typedef struct { u16 v[5]; } Tab5;
void drawText(s32 *arg0, s32 arg1, u16 arg2, s32 arg3, s32 arg4, u8 *arg5);

/* Draws a signed value as up to five decimal digits: leading zeros become spaces, a minus
   sign goes just before the first digit, and the text is right-aligned within the digit field. */
void drawNumber(u32 *valuePtr, u16 x, u16 y, u16 a3, u32 a4, u8 digitCount, s16 value)
{
    Tab5 divisors;
    u8 text[7];
    u32 val;
    s32 i;
    u16 isPositive;
    s32 signPos;
    s32 signedValue;

    divisors = *(Tab5 *) decimalDivisors;
    val = *valuePtr;
    signedValue = value;
    if ((s16) value < 0) {
        value = -(s16) signedValue;
        isPositive = 0;
    } else {
        isPositive = 1;
    }
    text[0] = 0x20;
    for (i = 0; i < 5; i++)
    {
        text[i + 1] = (s16) value / divisors.v[i] + 0x30;
        value -= ((s16) value / divisors.v[i]) * divisors.v[i];
    }
    text[i + 1] = 0;
    i = 1;
    while (text[i] == 0x30 && i < 5)
    {
        text[i] = 0x20;
        i++;
    }
    if (!isPositive) {
        signPos = 5;
        signPos -= digitCount;
        if (i - 1 < signPos) {
            text[signPos] = 0x2D;
        } else {
            text[i - 1] = 0x2D;
        }
    }
    drawText((s32 *) &val, x, y, a3, a4, &text[5 - digitCount + isPositive]);
    *valuePtr = val;
}
