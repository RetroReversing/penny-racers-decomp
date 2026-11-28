void func_801CA4DC(u8 *, u8 *, u16);
void drawGlyphCell(s32 *, u16, u16, u16, s32, s32);
extern u8 D_801CF4C8[];

typedef struct { u8 pad[0xA]; u8 num[4]; u8 name[16]; } Rec801CBC20;
/* Draws an entry's name followed by its number, one glyph cell at a time, advancing the pen by charAdvance. */ void drawNameAndNumber(s32 *dlPtr, s32 startX, s32 startY, u16 charAdvance, s32 palette, Rec801CBC20 *arg5) {
    s32 dl;
    u8 text[17];
    u8 num[5];
    u16 i;
    u16 j;
    u16 penX;
    u16 penY;

    dl = *dlPtr;
    i = 0;
    penX = startX;
    penY = startY;
    for (j = 0; j < 17; j++) {
        text[j] = 0;
    }
    for (j = 0; j < 5; j++) {
        num[j] = 0;
    }
    func_801CA4DC(arg5->name, text, 0x10);
    func_801CA4DC(arg5->num, num, 4);
    for (; (arg5->name[i] != 0) & (i < 0x10); i++) {
        drawGlyphCell(&dl, penX, penY, text[i], D_801CF4C8, palette);
        do { penX += charAdvance; } while (0);
    }
    if (arg5->num[0] != 0) {
        drawGlyphCell(&dl, penX, penY, 0xE, D_801CF4C8, palette);
        penX += charAdvance >> 1;
        drawGlyphCell(&dl, penX, penY, num[0], D_801CF4C8, palette);
    }
    *dlPtr = dl;
}
