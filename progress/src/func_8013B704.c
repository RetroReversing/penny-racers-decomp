typedef struct { u32 w0; u32 w1; } Gfx;
extern u8 D_8011F2F0[][0x64];
extern u8 viewIndex;
extern u8 D_8018A264[];
extern u16 playerSlots[][0x32];
extern u8 D_8011F2FC[][0x64];

void func_8013B704(Gfx **pkt, s32 arg1)
{
    s32 r;
    s32 gr;
    s32 b;

    if (D_8011F2F0[(u16) arg1][0] == viewIndex) {
        if (D_8018A264[D_8011F2F0[(u16) arg1][0]] == 1) {
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
    switch (playerSlots[(u16) arg1][0]) {
    case 11:
    case 16:
    case 32:
    case 33:
        r = 0xFF;
        gr = 0xFF;
        b = 0;
        break;
    case 12:
    case 13:
    case 34:
    case 35:
    case 36:
    case 37:
        r = 0xFF;
        gr = 0xFF;
        b = 0xFF;
        break;
    case 15:
    case 44:
    case 45:
        r = 0;
        gr = 0x96;
        b = 0x32;
        break;
    case 17:
    case 40:
    case 41:
        r = 0xC8;
        gr = 0xC8;
        b = 0xFF;
        break;
    default:
        r = 0x64;
        gr = 0x64;
        b = 0x64;
        break;
    }
    {
                Gfx *_g = (*pkt)++;
                _g->w0 = 0xFA000000;
                _g->w1 = (r << 24) | (gr << 16) | (b << 8) | D_8011F2FC[(u16) arg1][0];
            }
}
