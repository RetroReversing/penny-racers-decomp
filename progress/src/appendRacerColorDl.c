typedef struct { u32 w0; u32 w1; } Gfx;
extern u8 D_8011F2F0[][0x64];
extern u8 viewIndex;
extern u8 D_8018A264[];
extern u16 playerSlots[][0x32];
extern u8 racerTimerFlags[][0x64];

/* Appends the display-list commands that colour one racer's primitives: a state reset when the racer is the viewed one and flagged, then a primitive colour picked from the racer's slot class. */
void appendRacerColorDl(Gfx **pkt, s32 slot)
{
    s32 red;
    s32 green;
    s32 blue;

    if (D_8011F2F0[(u16) slot][0] == viewIndex) {
        if (D_8018A264[D_8011F2F0[(u16) slot][0]] == 1) {
            {
                Gfx *_g = (*pkt)++;
                _g->w0 = 0xE7000000;
                _g->w1 = 0;
            }
            {
                Gfx *_g = (*pkt)++;
                _g->w0 = 0xB6000000;
                _g->w1 = 1;
            }
            {
                Gfx *_g = (*pkt)++;
                _g->w0 = 0xB900031D;
                _g->w1 = 0x504340;
            }
        }
    }
    switch (playerSlots[(u16) slot][0]) {
    case 11:
    case 16:
    case 32:
    case 33:
        red = 0xFF;
        green = 0xFF;
        blue = 0;
        break;
    case 12:
    case 13:
    case 34:
    case 35:
    case 36:
    case 37:
        red = 0xFF;
        green = 0xFF;
        blue = 0xFF;
        break;
    case 15:
    case 44:
    case 45:
        red = 0;
        green = 0x96;
        blue = 0x32;
        break;
    case 17:
    case 40:
    case 41:
        red = 0xC8;
        green = 0xC8;
        blue = 0xFF;
        break;
    default:
        red = 0x64;
        green = 0x64;
        blue = 0x64;
        break;
    }
    {
                Gfx *_g = (*pkt)++;
                _g->w0 = 0xFA000000;
                _g->w1 = (red << 24) | (green << 16) | (blue << 8) | racerTimerFlags[(u16) slot][0];
            }
}
