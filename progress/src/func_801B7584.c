extern u8 menuCursorPos[4];
extern char trackPointTable[];

void func_801B7584(void *arg0, s32 arg1)
{
    u8 *src;
    s8 *dst;
    u8 i;
    u32 k;

    menuCursorPos[0] = ((u8 *) arg0)[0];
    menuCursorPos[1] = ((u8 *) arg0)[1];
    menuCursorPos[2] = ((u8 *) arg0)[2];
    menuCursorPos[3] = ((u8 *) arg0)[3];
    i = 0;
    if (menuCursorPos[2] != 0) {
        do {
            dst = trackPointTable + (i & 0xFF) * 5;
            src = (u8 *) ((i & 0xFF) * 5 + arg1);
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
            dst[3] = src[3];
            dst[4] = src[4];
            i++;
        } while ((u32) (i & 0xFF) < menuCursorPos[2]);
    }
    while ((i & 0xFF) < 200) { s8 *p; k = i & 0xFF;  p = trackPointTable + k * 5; p[0] = 4; p[1] = 0; p[2] = -1; p[3] = -1; p[4] = -1;  i++; }
}
