/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK gfxSetup2DState();                            /* extern */
M2C_UNK gfxSetPrimAlpha(s32, M2C_UNK);                /* extern */
M2C_UNK drawText(s32, M2C_UNK, s32, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK drawNumber(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32, s32); /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK fontPalette;
extern s32 creditsFrame;
extern M2C_UNK strStageNo;
extern M2C_UNK strDivider;
extern M2C_UNK strVersion;
extern M2C_UNK strGameN64;
extern M2C_UNK strEditor;
extern M2C_UNK strBaba;
extern M2C_UNK strKuroki;
extern M2C_UNK D_80232BC4;
extern M2C_UNK D_80232BCC;
extern M2C_UNK D_80232BD4;
extern M2C_UNK D_80232BE0;
extern M2C_UNK D_80232BEC;
extern M2C_UNK D_80232BFC;
extern M2C_UNK D_80232C08;
extern u16 creditsCursor;

/* Draws the credits screen: title, stage number, staff names, and a blinking selection arrow beside the current row. */ void drawCreditsScreen(s32 gfxp) {
    creditsFrame += 1;
    gfxSetup2DState();
    gfxSetPrimAlpha(gfxp, 0xFF);
    drawText(gfxp, 0x78, 0x46, 8, &fontPalette, &strStageNo);
    drawNumber(gfxp, 0xC8, 0x46, 8, &fontPalette, 1, (s32) M2C_FIELD(&D_8006FAF0, s16 *, 0x20));
    drawText(gfxp, 0x70, 0x50, 8, &fontPalette, &strDivider);
    drawText(gfxp, 0x70, 0xC8, 8, &fontPalette, &strDivider);
    drawText(gfxp, 0x18, 0x10, 8, &fontPalette, &strVersion);
    drawText(gfxp, 0x78, 0x64, 8, &fontPalette, &strGameN64);
    drawText(gfxp, 0x78, 0x6E, 8, &fontPalette, &strEditor);
    drawText(gfxp, 0x78, 0x78, 8, &fontPalette, &strBaba);
    drawText(gfxp, 0x78, 0x82, 8, &fontPalette, &strKuroki);
    drawText(gfxp, 0x78, 0x8C, 8, &fontPalette, &D_80232BC4);
    drawText(gfxp, 0x78, 0x96, 8, &fontPalette, &D_80232BCC);
    drawText(gfxp, 0x78, 0xA0, 8, &fontPalette, &D_80232BD4);
    drawText(gfxp, 0x78, 0xAA, 8, &fontPalette, &D_80232BE0);
    drawText(gfxp, 0x78, 0xB4, 8, &fontPalette, &D_80232BEC);
    drawText(gfxp, 0x78, 0xBE, 8, &fontPalette, &D_80232BFC);
    if (!(creditsFrame & 8)) {
        drawText(gfxp, 0x5C, ((creditsCursor * 0xA) + 0x64) & 0xFFFF, 8, &fontPalette, &D_80232C08);
    }
}
