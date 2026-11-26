void func_801CAF18(void *, u16, u16, u16, s32, s32, u8, s32, s32, s32, s32);
void func_801CAD00(s32 *gfxP, s32 x, s32 y, s32 dx, s32 arg4, u16 *str, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, u32 maxLen, s32 lineH) {
    s32 gfx;
    s32 startX;
    s32 width;
    u8 alpha;
    u16 pos;
    s32 curX;
    s32 nextX;
    s32 curY;
    s32 i;
    s32 n;
    s32 count;
    s32 j;

    startX = x;
    width = dx;
    alpha = arg6;
    gfx = *gfxP;
    pos = 0;
    curX = startX;
    curY = y;
    while (str[pos] != 0xFFFF) {
        i = pos;
        n = 0;
        while (str[i] != 0xFFFF) {
            n++;
            i++;
            if (n >= maxLen) {
                break;
            }
        }
        count = n;
        if (count >= maxLen && str[i] != 0xFFFF && str[i] != 0) {
            for (j = 1; j < n; j++) {
                if (*(&str[i] - j) == 0) {
                    count = n - j + 1;
                    break;
                }
            }
        }
        if (str[pos] == 0) {
            pos++;
            count--;
        }
        for (j = 0; j < count; j++) {
            func_801CAF18(&gfx, curX, curY, str[pos], arg7, arg4, alpha, arg8, arg9, arg10, arg11);
            nextX = width + curX;
            curX = nextX;
            pos++;
        }
        curY += lineH;
        curX = startX;
    }
    *gfxP = gfx;
}
