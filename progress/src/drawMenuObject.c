typedef struct { u32 w0; u32 w1; } Gwords;
typedef union { Gwords words; long long force; } Gfx;
typedef struct { u8 kind; u8 pad1[0xB]; u8 alpha; u8 padD[0x31]; u16 model; u8 pad40[0x24]; } Ob17;
extern Ob17 D_8011F2F0[];
extern u16 D_801C57D0[], D_801C57E8[], D_801C57FC[], D_801C5810[], D_801C5824[];
extern u8 D_801D4390[], D_801CF4C8[];
void gfxSetup2DState(Gfx **);
void gfxSetPrimAlpha(Gfx **, s32);
s32 textWidth(u16 *, s32);
void gfxDrawText(Gfx **, u16, s32, s32, u8 *, u16 *, s32, u8 *, s32, s32, s32, s32);
void gfxDrawSprite(Gfx **, s32, s32, s32, s32);

/* Menu object labels, one set per model. Each label is measured, then drawn
 * at its y position in the text font; the trailing icons follow the object's kind. */
#define DRAW_LABEL(y, str) \
    width = textWidth(str, 0xA); \
    gfxDrawText(gfxp, width, y, 0xA, D_801D4390, str, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC)
#define DRAW_ICONS() \
    gfxSetPrimAlpha(gfxp, D_8011F2F0[id].alpha); \
    gfxDrawSprite(gfxp, 0x4B, D_8011F2F0[id].kind, 0xD, 0x10); \
    gfxDrawSprite(gfxp, 0xE1, D_8011F2F0[id].kind, 0xD, 0x11)

void drawMenuObject(Gfx **gfxp, u16 id) {
    s32 width;

    switch (D_8011F2F0[id].model) {
    case 1:
        gfxSetup2DState(gfxp);
        gfxSetPrimAlpha(gfxp, 0xFF);
        DRAW_LABEL(0x64, D_801C5810);
        DRAW_LABEL(0x74, D_801C5824);
        DRAW_ICONS();
        break;
    case 2:
        gfxSetup2DState(gfxp);
        gfxSetPrimAlpha(gfxp, 0xFF);
        DRAW_LABEL(0x54, D_801C57D0);
        DRAW_LABEL(0x64, D_801C5810);
        DRAW_LABEL(0x74, D_801C5824);
        DRAW_ICONS();
        break;
    case 3:
        gfxSetup2DState(gfxp);
        gfxSetPrimAlpha(gfxp, 0xFF);
        DRAW_LABEL(0x64, D_801C57E8);
        DRAW_LABEL(0x74, D_801C57FC);
        DRAW_LABEL(0x84, D_801C5810);
        DRAW_LABEL(0x94, D_801C5824);
        DRAW_ICONS();
        break;
    case 0:
    case 4:
    case 5:
        break;
    }
}
