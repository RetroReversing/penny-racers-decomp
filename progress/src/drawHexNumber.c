extern u32 func_8014A79C(s32);
extern s32 func_8014A080(s32, s32, s32, s32);
extern void gfxDrawText(u32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 sHexGlyphs[];
extern s32 D_802D92A0[];
extern s32 D_802D6898[];
extern s32 D_801D4390[];
extern s32 D_801CF4C8[];

/* Draws a hex value digit by digit, most significant first, using the small glyph set
   when isSmall is nonzero and the normal set otherwise. The value is shifted left one
   nibble per step with func_8014A080, and digits below 10 are drawn. */
void drawHexNumber(u32 *gfxState, s32 x, s32 y, s32 value, u8 digitCount, u8 isSmall)
{
    u32 local = *gfxState;
    u32 s1;
    s32 i;
    u32 v;

    s1 = func_8014A79C((u16)value);
    {
        u32 mask = 0xF0000000;
        for (i = 0; i < 7; i++) {
            if (s1 & mask) {
                break;
            }
            s1 |= mask;
            mask >>= 4;
        }
    }

    for (i = 0; i < (digitCount & 0xFF); i++) {
        s1 = func_8014A080(s1, (((digitCount & 0xFF) * 4) - 1) & 0xFF, 4, 1);
        v = s1 & 0xF;
        if (v < 10) {
            if (isSmall == 0) {
                gfxDrawText(&local, (u16)(x + i * 13), (u16)y, 0xF,
                              (s32)D_802D92A0, sHexGlyphs[v], 0, (s32)D_802D6898,
                              0xE, 0x10, 0xE0, 0x60);
            } else {
                gfxDrawText(&local, (u16)(x + i * 10), (u16)y, 0xA,
                              (s32)D_801D4390, sHexGlyphs[s1 & 0xF], 0, (s32)D_801CF4C8,
                              0xA, 0xE, 0xA0, 0xFC);
            }
        }
    }

    *gfxState = local;
}
