typedef struct { u32 w0; u32 w1; } Cmd;
typedef struct { s16 count; u8 pad[0x26]; } View;
typedef struct { u8 pad[0x2108]; View view[4]; } Cfg;

extern u16 D_8006FB10;
extern u8 viewIndex;
extern Cfg sRowBoard;

#define SET(pkt, a, b) { Cmd *_g = (Cmd *) (pkt); _g->w0 = (a); _g->w1 = (b); }
#define SHL(v, s, w) (((u32) (v) & ((1 << (w)) - 1)) << (s))
#define RGB5551(r, g, b, a) ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7C0) | (((b) >> 2) & 0x3E) | ((a) & 1))
#define FILL(pkt, ulx, uly, lrx, lry) SET(pkt, 0xF6000000 | SHL(lrx, 14, 10) | SHL(lry, 2, 10), SHL(ulx, 14, 10) | SHL(uly, 2, 10))
#define COLOR(r, g, b) SET((*gfx)++, 0xF7000000, (RGB5551((u32) (r), (u32) (g), (u32) (b), 1) << 16) | RGB5551((u32) (r), (u32) (g), (u32) (b), 1))
#define MIX(out, a, b) if ((a) > (b)) { out = (a) - ((a) - (b)) * i / h; } else { out = (a) + ((b) - (a)) * i / h; }

void func_80138CC0(Cmd **gfx)
{
    s32 i;
    f32 h;
    f32 scale;
    f32 r0, g0, b0, r1, g1, b1;
    f32 r, g, b;
    f32 x, y, w;
    s32 fr, fg, fb;

    scale = 0.5f;
    switch (D_8006FB10) {
    case 0:
        r0 = 50.0f;
        g0 = 100.0f;
        b0 = 250.0f;
        g1 = 255.0f;
        r1 = 255.0f;
        b1 = 255.0f;
        fr = fg = fb = 0xFF;
        break;
    case 5:
        scale = 0.2f;
        g0 = 10.0f;
        r0 = 10.0f;
        b0 = 50.0f;
        g1 = 0.0f;
        r1 = 0.0f;
        b1 = 0.0f;
        fr = fg = fb = 0xFF;
        break;
    case 6:
        scale = 0.2f;
        r0 = 236.0f;
        g0 = 152.0f;
        b0 = 0.0f;
        r1 = 196.0f;
        b1 = 38.0f;
        g1 = 0.0f;
        fb = 0xBE;
        fg = 0xBE;
        fr = 0xBE;
        break;
    case 2:
        scale = 0.0f;
        g0 = 150.0f;
        r0 = 150.0f;
        b0 = 150.0f;
        r1 = 150.0f;
        g1 = 150.0f;
        b1 = 150.0f;
        fb = 0xA0;
        fg = 0xA0;
        fr = 0xA0;
        break;
    case 7:
        scale = 0.0f;
        g0 = 170.0f;
        r0 = 170.0f;
        b0 = 170.0f;
        r1 = 170.0f;
        g1 = 170.0f;
        b1 = 170.0f;
        fb = 0xBE;
        fg = 0xBE;
        fr = 0xBE;
        break;
    case 8:
        r0 = 50.0f;
        g0 = 100.0f;
        b0 = 250.0f;
        g1 = 255.0f;
        r1 = 255.0f;
        b1 = 255.0f;
        fr = fg = fb = 0xFF;
        break;
    case 10:
        g0 = 50.0f;
        r0 = 50.0f;
        b0 = 100.0f;
        r1 = 100.0f;
        b1 = 250.0f;
        g1 = 100.0f;
        fr = fg = fb = 0xFF;
        break;
    default:
        g0 = 0.0f;
        r0 = 0.0f;
        b0 = 250.0f;
        r1 = 0.0f;
        g1 = 0.0f;
        b1 = 0.0f;
        fr = fg = fb = 0xFF;
        break;
    }
    SET((*gfx)++, 0xE7000000, 0);
    SET((*gfx)++, 0xBA001402, 0x300000);
    COLOR(r0, g0, b0);
    if (sRowBoard.view[viewIndex].count == 1) {
        do { x = 16.0f; } while (0);
        y = 12.0f;
        w = 288.0f;
        h = scale * 216.0f;
        for (i = 0; i < h; i++) {
            MIX(r, r0, r1);
            MIX(g, g0, g1);
            MIX(b, b0, b1);
            COLOR(r, g, b);
            FILL((*gfx)++, x, y + i, x + w - 1.0f, y + i);
        }
        FILL((*gfx)++, x, y + i, x + w - 1.0f, 227);
    } else {
        x = 16.0f;
        y = 12.0f;
        w = 288.0f;
        h = scale * 108.0f;
        for (i = 0; i < h; i++) {
            MIX(r, r0, r1);
            MIX(g, g0, g1);
            MIX(b, b0, b1);
            COLOR(r, g, b);
            FILL((*gfx)++, x, y + i, x + w - 1.0f, y + i);
            FILL((*gfx)++, x, i + 120, x + w - 1.0f, i + 120);
        }
        FILL((*gfx)++, x, y + i, x + w - 1.0f, 119);
        FILL((*gfx)++, x, y + i + 120.0f - 12.0f, x + w - 1.0f, 227);
    }
    if (D_8006FB10 == 2 || D_8006FB10 == 7) {
        SET((*gfx)++, 0xF8000000, (fr << 24) | (fg << 16) | (fb << 8) | 0xFF);
        SET((*gfx)++, 0xBC000008, 0x0500FC00);
    }
}
