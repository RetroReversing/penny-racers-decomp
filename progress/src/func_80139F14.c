typedef struct { u32 w0; u32 w1; } Cmd;
typedef struct { s16 x0; s16 y0; s16 x1; s16 y1; u8 pad[0x20]; } Rect;
typedef struct { u8 pad0[0x40]; u16 f40; u8 pad42[0x22]; } Obj;

extern Obj D_8011F2F0[];
extern u16 D_8006FB10;
typedef struct { u8 pad[0x2108]; s16 count; u8 pad210a[0x1E]; Rect rect[4]; } Cfg;
extern Cfg D_800DB1B8;
#define RECT (D_800DB1B8.rect)
#define COUNT (D_800DB1B8.count)
extern f32 D_80183B54;
extern f32 D_80183B58;
extern f32 D_80183B5C;
extern f32 D_80183B60;
extern f32 D_80183B64;
extern f32 D_80183B68;
extern f32 D_80183B6C;
extern f32 D_80183B70;
extern s16 D_80183B74;
extern s16 D_80183B76;
extern s16 D_80183B78;
extern u8 D_8018A2C8[];
extern u8 D_80189CD0[];
extern u8 D_8018A150[];

#define SET(pkt, a, b) { Cmd *_g = (Cmd *) (pkt); _g->w0 = (a); _g->w1 = (b); }
#define SHL(v, s, w) (((u32) (v) & ((1 << (w)) - 1)) << (s))
#define RGB5551(r, g, b, a) ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7C0) | (((b) >> 2) & 0x3E) | ((a) & 1))
#define FILL(pkt, ulx, uly, lrx, lry) SET(pkt, 0xF6000000 | SHL(lrx, 14, 10) | SHL(lry, 2, 10), SHL(ulx, 14, 10) | SHL(uly, 2, 10))

void func_80139F14(Cmd **gfx, u16 arg1)
{
    s32 i;
    s32 j;
    f32 h;
    Rect *r;
    s16 *q;

    if (D_8011F2F0[arg1].f40 == 0) {
        D_8011F2F0[arg1].f40 = 1;
        D_80183B6C = 0.5f;
        D_80183B70 = 900.0f;
        switch (D_8006FB10) {
        case 0:
        case 1:
            D_80183B6C = 0.2f;
            D_80183B54 = 100.0f;
            D_80183B58 = 80.0f;
            D_80183B5C = 255.0f;
            D_80183B60 = 180.0f;
            D_80183B64 = 200.0f;
            D_80183B68 = 255.0f;
            D_80183B74 = 0xFF;
            D_80183B76 = 0xFF;
            D_80183B78 = 0xFF;
            break;
        case 2:
            D_80183B6C = 0.0f;
            D_80183B54 = 155.0f;
            D_80183B58 = 150.0f;
            D_80183B5C = 170.0f;
            D_80183B60 = 155.0f;
            D_80183B64 = 150.0f;
            D_80183B68 = 170.0f;
            D_80183B74 = 0x91;
            D_80183B76 = 0x8C;
            D_80183B78 = 0xA0;
            break;
        case 3:
            D_80183B6C = 0.3f;
            D_80183B54 = 100.0f;
            D_80183B58 = 80.0f;
            D_80183B5C = 255.0f;
            D_80183B60 = 210.0f;
            D_80183B64 = 230.0f;
            D_80183B68 = 255.0f;
            D_80183B74 = 0xFF;
            D_80183B76 = 0xFF;
            D_80183B78 = 0xFF;
            break;
        case 4:
            D_80183B6C = 0.3f;
            D_80183B54 = 126.0f;
            D_80183B58 = 140.0f;
            D_80183B5C = 224.0f;
            D_80183B60 = 251.0f;
            D_80183B64 = 251.0f;
            D_80183B68 = 216.0f;
            D_80183B74 = 0xFF;
            D_80183B76 = 0xFF;
            D_80183B78 = 0xFF;
            break;
        case 5:
            D_80183B6C = 0.2f;
            D_80183B54 = 4.0f;
            D_80183B58 = 1.0f;
            D_80183B5C = 45.0f;
            D_80183B60 = 32.0f;
            D_80183B64 = 21.0f;
            D_80183B68 = 115.0f;
            D_80183B74 = 0xFF;
            D_80183B76 = 0xFF;
            D_80183B78 = 0xFF;
            break;
        case 6:
            D_80183B6C = 0.2f;
            D_80183B54 = 21.0f;
            D_80183B58 = 33.0f;
            D_80183B5C = 3.0f;
            D_80183B60 = 195.0f;
            D_80183B64 = 45.0f;
            D_80183B68 = 16.0f;
            D_80183B74 = 0xBE;
            D_80183B76 = 0xBE;
            D_80183B78 = 0xBE;
            break;
        case 7:
            D_80183B6C = 0.0f;
            D_80183B70 = 920.0f;
            D_80183B54 = 170.0f;
            D_80183B58 = 170.0f;
            D_80183B5C = 170.0f;
            D_80183B60 = 170.0f;
            D_80183B64 = 170.0f;
            D_80183B68 = 170.0f;
            D_80183B74 = 0xBE;
            D_80183B76 = 0xBE;
            D_80183B78 = 0xBE;
            break;
        case 8:
            D_80183B6C = 0.2f;
            D_80183B54 = 120.0f;
            D_80183B58 = 156.0f;
            D_80183B5C = 230.0f;
            D_80183B60 = 255.0f;
            D_80183B64 = 255.0f;
            D_80183B68 = 255.0f;
            D_80183B74 = 0xFF;
            D_80183B76 = 0xFF;
            D_80183B78 = 0xFF;
            break;
        case 9:
            D_80183B6C = 0.3f;
            D_80183B54 = 5.0f;
            D_80183B58 = 109.0f;
            D_80183B5C = 176.0f;
            D_80183B60 = 195.0f;
            D_80183B64 = 246.0f;
            D_80183B68 = 248.0f;
            D_80183B74 = 0xFF;
            D_80183B76 = 0xFF;
            D_80183B78 = 0xFF;
            break;
        case 10:
            D_80183B6C = 0.8f;
            D_80183B54 = 50.0f;
            D_80183B58 = 100.0f;
            D_80183B5C = 250.0f;
            D_80183B60 = 255.0f;
            D_80183B64 = 255.0f;
            D_80183B68 = 255.0f;
            D_80183B74 = 0xFF;
            D_80183B76 = 0xFF;
            D_80183B78 = 0xFF;
            break;
        default:
            D_80183B54 = 0.0f;
            D_80183B58 = 0.0f;
            D_80183B5C = 250.0f;
            D_80183B60 = 0.0f;
            D_80183B64 = 0.0f;
            D_80183B68 = 0.0f;
            D_80183B74 = 0xFF;
            D_80183B76 = 0xFF;
            D_80183B78 = 0xFF;
            break;
        }
        do { r = RECT; } while (0);
        {
            s32 top = r->y0;

            h = (f32) (r->y1 - top) * D_80183B6C;
        }
    for (i = 0; i < h; i++) {
        if (D_80183B54 > D_80183B60) {
            D_8018A2C8[i] = (u32) (D_80183B54 - (D_80183B54 - D_80183B60) * i / h);
        } else {
            D_8018A2C8[i] = (u32) ((D_80183B60 - D_80183B54) * i / h + D_80183B54);
        }
        if (D_80183B58 > D_80183B64) {
            D_80189CD0[i] = (u32) (D_80183B58 - (D_80183B58 - D_80183B64) * i / h);
        } else {
            D_80189CD0[i] = (u32) ((D_80183B64 - D_80183B58) * i / h + D_80183B58);
        }
        if (D_80183B5C > D_80183B68) {
            D_8018A150[i] = (u32) (D_80183B5C - (D_80183B5C - D_80183B68) * i / h);
        } else {
            D_8018A150[i] = (u32) ((D_80183B68 - D_80183B5C) * i / h + D_80183B5C);
        }
    }
    }
    SET((*gfx)++, 0xE7000000, 0);
    SET((*gfx)++, 0xBA001402, 0x300000);
    SET((*gfx)++, 0xF7000000, (RGB5551((u32) D_80183B54, (u32) D_80183B58, (u32) D_80183B5C, 1) << 16)
                                  | RGB5551((u32) D_80183B54, (u32) D_80183B58, (u32) D_80183B5C, 1));
    for (j = 0; j < COUNT; j++) {
        f32 x = RECT[j].x0;
        f32 y = RECT[j].y0;
        f32 w = RECT[j].x1 - RECT[j].x0;
        f32 t = RECT[j].y1 - RECT[j].y0;

        h = t * D_80183B6C;
        for (i = 0; i < h; i++) {
            SET((*gfx)++, 0xF7000000, (RGB5551(D_8018A2C8[i], D_80189CD0[i], D_8018A150[i], 1) << 16)
                                          | RGB5551(D_8018A2C8[i], D_80189CD0[i], D_8018A150[i], 1));
            FILL((*gfx)++, x, y + i, x + w - 1.0f, y + i);
        }
        FILL((*gfx)++, x, y + i, RECT[j].x1 - 1, RECT[j].y1 - 1);
    }
    if (D_8006FB10 == 2 || D_8006FB10 == 7) {
        SET((*gfx)++, 0xF8000000, ((u8) D_80183B74 << 24) | ((u8) D_80183B76 << 16) | ((u8) D_80183B78 << 8) | 0xFF);
        SET((*gfx)++, 0xBC000008, 0x0C80F480);
    }
}
