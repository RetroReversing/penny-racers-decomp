extern u16 decimalDivisors[5];
void drawSpriteCell(s32 *, u16, u16, u16, s32, s32, u8, s16, s16, s16, s16);
/* Draws a decimal value as up to five sprite-cell digits, optionally blanking leading zeros. */ void drawNumberDigits(s32 *dl, s16 x0, s32 y0, u16 xStep, s32 sx, s32 sy, u8 alpha, u8 digitCount, u8 blankZeros, u16 tx0, u16 ty0, u16 tx1, u16 ty1, u16 value) {
    u16 divisors[5];
    u16 digits[5];
    s32 dlCopy;
    u16 x;
    u16 y;
    s32 idx;
    u16 col;

    memcpy(divisors, decimalDivisors, 10);
    dlCopy = *dl;
    for (idx = 0; idx < 5; idx++) {
        digits[idx] = value / divisors[idx];
        value -= (value / divisors[idx]) * divisors[idx];
    }
    if (blankZeros) {
        idx = 0;
        while (digits[idx] == 0 && idx < 4) {
            digits[idx] = 0xFFFF;
            idx++;
        }
    }
    x = x0;
    y = y0;
    for (col = 5 - digitCount; col < 5; col++) {
        if (digits[col] != 0xFFFF) {
            drawSpriteCell(&dlCopy, x, y, digits[col], sx, sy, alpha, tx0, ty0, tx1, ty1);
        }
        x += xStep;
    }
    *dl = dlCopy;
}
