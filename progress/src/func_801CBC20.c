void func_801CA4DC(u8 *, u8 *, u16);
void drawGlyphCell(s32 *, u16, u16, u16, s32, s32);
extern u8 D_801CF4C8[];

typedef struct { u8 pad[0xA]; u8 num[4]; u8 name[16]; } Rec801CBC20;
void func_801CBC20(s32 *arg0, s32 arg1, s32 arg2, u16 arg3, s32 arg4, Rec801CBC20 *arg5) {
    s32 dl;
    u8 text[17];
    u8 num[5];
    u16 i;
    u16 j;
    u16 x;
    u16 y;

    dl = *arg0;
    i = 0;
    x = arg1;
    y = arg2;
    for (j = 0; j < 17; j++) {
        text[j] = 0;
    }
    for (j = 0; j < 5; j++) {
        num[j] = 0;
    }
    func_801CA4DC(arg5->name, text, 0x10);
    func_801CA4DC(arg5->num, num, 4);
    for (; (arg5->name[i] != 0) & (i < 0x10); i++) {
        drawGlyphCell(&dl, x, y, text[i], D_801CF4C8, arg4);
        do { x += arg3; } while (0);
    }
    if (arg5->num[0] != 0) {
        drawGlyphCell(&dl, x, y, 0xE, D_801CF4C8, arg4);
        x += arg3 >> 1;
        drawGlyphCell(&dl, x, y, num[0], D_801CF4C8, arg4);
    }
    *arg0 = dl;
}
