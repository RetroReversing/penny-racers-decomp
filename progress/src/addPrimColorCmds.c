typedef struct { u32 w0; u32 w1; } Gwords;
typedef union { Gwords words; long long force; } Gfx;
#define _S(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))
#define gDma(pkt, w0v, w1v) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (w0v); _g->words.w1 = (u32)(w1v); }
#define gDPNoParam(pkt, cmd) gDma(pkt, _S(cmd, 24, 8), 0)
#define gDPPipeSync(pkt) gDPNoParam(pkt, 0xe7)

typedef struct { f32 v; u8 pad[0x60]; } ColorSlot;
extern ColorSlot D_8011F308[];
extern ColorSlot sPrimColorG[];
extern ColorSlot sPrimColorB[];
#define EMIT(w0v, w1v) gDma((*dlp)++, w0v, w1v)
#define PACK_RGBA5551(r, g, b, a) ((((r) << 8) & 0xf800) | (((g) << 3) & 0x7c0) | (((b) >> 2) & 0x3e) | ((a) & 0x1))
#define PRIM_R (u32)D_8011F308[colorId].v
#define PRIM_G (u32)sPrimColorG[colorId].v
#define PRIM_B (u32)sPrimColorB[colorId].v

/* Emits a pipe sync, then the combine and primitive-colour commands for the colour in slot colorId. */
void addPrimColorCmds(Gfx **dlp, u16 colorId)
{
    gDPPipeSync((*dlp)++);
    EMIT(0xBA001402, 0x300000);
    EMIT(0xF7000000, (PACK_RGBA5551(PRIM_R, PRIM_G, PRIM_B, 1) << 16) | PACK_RGBA5551(PRIM_R, PRIM_G, PRIM_B, 1));
    EMIT(0xF64FC3BC, 0);
}
