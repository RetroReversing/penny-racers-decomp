s32 drawAtlasCell(s32 *, s32, s32, u16, s32 *, s32); /* extern */
extern s32 D_802D6898;

void func_801CB404(s32 *arg0, s32 arg1, u16 arg2, s32 arg3, s32 arg4, u16 *arg5) {
    s32 sp18;
    u16 i;
    s32 pos;
    s32 next_pos;
    u16 w;
    s32 step;

    step = arg3;
    sp18 = *arg0;
    i = 0;
    pos = arg1;
    w = arg2;
    if (arg5[0] != 0xFFFF) {
        do {
            drawAtlasCell(&sp18, pos & 0xFFFF, w, arg5[i], &D_802D6898, arg4);
            i++;
            next_pos = step + pos; pos = next_pos;
        } while (arg5[i] != 0xFFFF);
    }
    *arg0 = sp18;
}
