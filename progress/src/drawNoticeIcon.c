extern void gfxSetup2DState(void);
extern void gfxSetPrimAlpha(s32, s32);
extern void gfxSetPrimColor(s32, s32, s32, s32, s32);
extern void gfxDrawSprite(s32, s32, s32, s32, s32);
extern u8 noticeStates[];
extern f32 sPrimColorG[];
extern f32 D_8011F308[];
extern u8 D_80189C9A;
extern u16 D_80190CB4;

/* Draws the notice icon for the current notice state on the given layer. */ void drawNoticeIcon(s32 layer, u32 frame)
{
    u8 red;
    u8 green;
    u8 blue;
    s16 iconY;
    u16 state;
    u16 rawState;

    gfxSetup2DState();
    gfxSetPrimAlpha(layer, 0xFF);
    state = *(u16 *)(noticeStates + D_80190CB4 * 100);
    switch (state) {
    case 0x20:
        gfxSetPrimColor(layer, 0xE2, 0x38, 0x73, 0xFF);
        gfxDrawSprite(layer, 0x8E, (s16)(D_80189C9A * 37 + 0x58), 7, 0x1A);
        break;
    case 0x30:
    case 0x40:
    case 0x50:
    {
        red = 0xE2;
        green = 0x38;
        blue = 0x73;
        iconY = 0x7C;
        rawState = *(u16 *)(noticeStates + D_80190CB4 * 100);
        if (rawState == 0x40 || rawState == 0x50) {
            gfxSetPrimColor(layer, 0xE2, 0x38, 0x73, 0xFF);
            gfxDrawSprite(layer, (s16)sPrimColorG[(frame & 0xFFFF) * 25], 0x8E, 7, 0x1B);
            red = 0x71;
            green = 0;
            blue = 0x38;
            iconY = 0x70;
        }
        gfxSetPrimColor(layer, red & 0xFF, green & 0xFF, blue & 0xFF, 0xFF);
        gfxDrawSprite(layer, (s16)D_8011F308[(frame & 0xFFFF) * 25], iconY, 7, 0x1A);
    }
        break;
    default:
        break;
    }
}

