void drawSpriteCell(void *, u16, u16, u16, s32, s32, u8, s32, s32, s32, s32);
/* Draws a 0xFFFF-terminated u16 string line by line, breaking runs of at most maxLen glyphs onto new lines. */ void drawWrappedText(s32 *gfxPtr, s32 x, s32 y, s32 advanceX, s32 colorArg, u16 *text, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, u32 maxRunLen, s32 lineHeight) {
    s32 gfxCur;
    s32 originX;
    s32 advance;
    u8 alpha;
    u16 textPos;
    s32 penX;
    s32 nextPenX;
    s32 penY;
    s32 i;
    s32 n;
    s32 runLen;
    s32 j;

    originX = x;
    advance = advanceX;
    alpha = arg6;
    gfxCur = *gfxPtr;
    textPos = 0;
    penX = originX;
    penY = y;
    while (text[textPos] != 0xFFFF) {
        i = textPos;
        n = 0;
        while (text[i] != 0xFFFF) {
            n++;
            i++;
            if (n >= maxRunLen) {
                break;
            }
        }
        runLen = n;
        if (runLen >= maxRunLen && text[i] != 0xFFFF && text[i] != 0) {
            for (j = 1; j < n; j++) {
                if (*(&text[i] - j) == 0) {
                    runLen = n - j + 1;
                    break;
                }
            }
        }
        if (text[textPos] == 0) {
            textPos++;
            runLen--;
        }
        for (j = 0; j < runLen; j++) {
            drawSpriteCell(&gfxCur, penX, penY, text[textPos], arg7, colorArg, alpha, arg8, arg9, arg10, arg11);
            nextPenX = advance + penX;
            penX = nextPenX;
            textPos++;
        }
        penY += lineHeight;
        penX = originX;
    }
    *gfxPtr = gfxCur;
}
