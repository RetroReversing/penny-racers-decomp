extern u16 D_801D5960[5];
void drawSpriteCell(s32 *, u16, u16, u16, s32, s32, u8, s16, s16, s16, s16);
void func_801CB9EC(s32 *arg0, s16 arg1, s32 arg2, u16 arg3, s32 arg4, s32 arg5, u8 arg6, u8 arg7, u8 arg8, u16 arg9, u16 arg10, u16 arg11, u16 arg12, u16 arg13) {
    u16 div[5];
    u16 digit[5];
    s32 sp50;
    u16 x;
    u16 y;
    s32 i;
    u16 k;

    memcpy(div, D_801D5960, 10);
    sp50 = *arg0;
    for (i = 0; i < 5; i++) {
        digit[i] = arg13 / div[i];
        arg13 -= (arg13 / div[i]) * div[i];
    }
    if (arg8) {
        i = 0;
        while (digit[i] == 0 && i < 4) {
            digit[i] = 0xFFFF;
            i++;
        }
    }
    x = arg1;
    y = arg2;
    for (k = 5 - arg7; k < 5; k++) {
        if (digit[k] != 0xFFFF) {
            drawSpriteCell(&sp50, x, y, digit[k], arg4, arg5, arg6, arg9, arg10, arg11, arg12);
        }
        x += arg3;
    }
    *arg0 = sp50;
}
