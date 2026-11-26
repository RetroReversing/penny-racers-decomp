typedef struct { u32 w0; u32 w1; } Gfx;
typedef struct { u8 unk0; u8 pad[99]; } A64;
typedef struct { u16 unk0; u8 pad[98]; } B64;
extern A64 D_8011F2F0[];
extern B64 D_8011F330[];
extern u8 D_801FFD6C[];

#define SHIFTL(v, s, w) ((u32)(((u32)(v) & ((1 << (w)) - 1)) << (s)))

#define gDPSetTextureImage(pkt, f, s, w, i) \
{ Gfx *_g = (Gfx *)(pkt); _g->w0 = SHIFTL(0xFD, 24, 8) | SHIFTL(f, 21, 3) | SHIFTL(s, 19, 2) | SHIFTL((w) - 1, 0, 12); _g->w1 = (u32)(i); }
#define gDPSetTile(pkt, fmt, siz, line, tmem, tile, palette, cmt, maskt, shiftt, cms, masks, shifts) \
{ Gfx *_g = (Gfx *)(pkt); _g->w0 = SHIFTL(0xF5, 24, 8) | SHIFTL(fmt, 21, 3) | SHIFTL(siz, 19, 2) | SHIFTL(line, 9, 9) | SHIFTL(tmem, 0, 9); \
  _g->w1 = SHIFTL(tile, 24, 3) | SHIFTL(palette, 20, 4) | SHIFTL(cmt, 18, 2) | SHIFTL(maskt, 14, 4) | SHIFTL(shiftt, 10, 4) | SHIFTL(cms, 8, 2) | SHIFTL(masks, 4, 4) | SHIFTL(shifts, 0, 4); }
#define gDPNoParam(pkt, cmd) { Gfx *_g = (Gfx *)(pkt); _g->w0 = SHIFTL(cmd, 24, 8); _g->w1 = 0; }
#define gDPLoadTileGeneric(pkt, c, tile, uls, ult, lrs, lrt) \
{ Gfx *_g = (Gfx *)(pkt); _g->w0 = SHIFTL(c, 24, 8) | SHIFTL(uls, 12, 12) | SHIFTL(ult, 0, 12); _g->w1 = SHIFTL(tile, 24, 3) | SHIFTL(lrs, 12, 12) | SHIFTL(lrt, 0, 12); }

#define gDPLoadTextureTile(pkt, timg, fmt, width, uls, ult, lrs, lrt, pal, cms, cmt, masks, maskt, shifts, shiftt) \
{ \
    gDPSetTextureImage(pkt, fmt, 1, width, timg); \
    gDPSetTile(pkt, fmt, 1, (((((lrs) - (uls) + 1) * 1) + 7) >> 3), 0, 7, 0, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPNoParam(pkt, 0xE6); \
    gDPLoadTileGeneric(pkt, 0xF4, 7, (uls) << 2, (ult) << 2, (lrs) << 2, (lrt) << 2); \
    gDPNoParam(pkt, 0xE7); \
    gDPSetTile(pkt, fmt, 1, (((((lrs) - (uls) + 1) * 1) + 7) >> 3), 0, 0, pal, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPLoadTileGeneric(pkt, 0xF2, 0, (uls) << 2, (ult) << 2, (lrs) << 2, (lrt) << 2); \
}

void func_801FC9D0(Gfx **dl, u16 idx)
{
    switch (D_8011F330[idx].unk0) {
    case 0:
        D_8011F330[idx].unk0 = 1;
        break;
    case 1:
        {
            u8 s = D_8011F2F0[idx].unk0 % 7;
            s16 x0 = s * 32;
            u8 t = D_8011F2F0[idx].unk0 / 7;
            s16 x1 = x0 + 32;
            s16 y0 = t * 32;
            s16 y1 = y0 + 32;
            gDPLoadTextureTile((*dl)++, D_801FFD6C, 2, 240, x0, y0, x1 - 1, y1 - 1, 0, 2, 2, 0, 0, 0, 0);
            gDPLoadTileGeneric((*dl)++, 0xF2, 0, 0, 0, 31 << 2, 31 << 2);
        }
        break;
    }
}
