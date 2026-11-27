s32 drawGlyphCell(s32 *, s32, s32, u8, s32 *, s32); /* extern */
extern s32 D_801CF4C8;

void func_801CA9B4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    s32 sp18;
    u16 i;
    s32 pos;
    s32 step;
    s32 next_pos;
    u16 w;

    step = arg3;
    sp18 = *arg0;
    i = 0;
    pos = arg1;
    w = arg2;
    if (arg5[0] != 0xFF) {
        do {
            drawGlyphCell(&sp18, pos & 0xFFFF, w, arg5[i], &D_801CF4C8, arg4);
            i++;
            next_pos = step + pos;
            pos = next_pos;
        } while (arg5[i] != 0xFF);
    }
    *arg0 = sp18;
}
