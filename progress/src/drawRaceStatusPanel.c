typedef struct {
    u16 st;
    u8 pad[98];
} Slot;

void gfxDrawSprite(int a, int b, int c, int d, int e);
void gfxSetup2DState(int a);
void gfxSetPrimAlpha(int a, int b);
void gfxDrawText(int a, int b, int c, int d, char *e, int f, int g, char *h, int i, int j, int k, int l);
extern Slot playerSlots[];
extern s32 D_801C586C[];
extern s32 D_801C5B3C[];
extern u16 D_801C6BB4;
extern u16 D_801C7066;
extern u8 D_801C7070;
extern u16 hudSlotIndex;
extern u16 D_801C7078;
extern u8 hudVisible;
extern u8 *trackInfo;
extern u8 hudGlyph;
extern s8 D_801C7AB5;
extern u8 D_801C7ABC;
extern char D_801CF4C8[];
extern char D_801D4390[];

/* Draws the race status panel (frame sprites, current glyph text and indicator icons) for the HUD slot when it is visible. */ void drawRaceStatusPanel(int gfxArg) {
    u8 glyphIndex;

    if (playerSlots[hudSlotIndex].st == 0x10 && hudVisible == 1) {
        gfxSetup2DState(gfxArg);
        gfxSetPrimAlpha(gfxArg, 0xA0);
        gfxDrawSprite(gfxArg, 0x36, 0x45, 0xD, 0x17);
        gfxDrawSprite(gfxArg, 0x36, 0xA3, 0xD, 0x18);
        gfxDrawSprite(gfxArg, 0xB2, 0x45, 0xD, 0x19);
        gfxDrawSprite(gfxArg, 0xB2, 0xA3, 0xD, 0xB);
        gfxSetPrimAlpha(gfxArg, 0xFF);
        if (*trackInfo == 4) {
            glyphIndex = hudGlyph - 0x2E;
        } else {
            glyphIndex = hudGlyph;
        }
        if ((u32)(glyphIndex & 0xFF) < 0xA) {
            gfxDrawText(gfxArg, 0x43, 0x93, 0xA, D_801D4390, D_801C5B3C[(s8)glyphIndex], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        } else if ((u32)((glyphIndex - 0xA) & 0xFF) < 0x20) {
            gfxDrawText(gfxArg, 0x3E, 0x93, 0xA, D_801D4390, D_801C5B3C[(s8)glyphIndex], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        } else if ((u32)((glyphIndex - 0x2A) & 0xFF) < 4) {
            gfxDrawText(gfxArg, 0x48, 0x93, 0xA, D_801D4390, D_801C5B3C[(s8)glyphIndex], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        }
        gfxDrawText(gfxArg, 0x93, 0x93, 0xA, D_801D4390, D_801C586C[D_801C7070 / 60], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        if (D_801C7AB5 == 0) {
            if (D_801C7078 != D_801C6BB4 && D_801C7078 != D_801C7066) {
                gfxDrawSprite(gfxArg, 0x36, 0x6F, 0xD, 0xC);
                gfxDrawSprite(gfxArg, 0xB3, 0x6F, 0xD, 0xD);
            }
            if (D_801C7ABC & 1) {
                gfxDrawSprite(gfxArg, 0x71, 0x47, 0xD, 0xE);
            }
            if (D_801C7ABC & 2) {
                gfxDrawSprite(gfxArg, 0x71, 0x9F, 0xD, 0xF);
            }
        }
    }
}
