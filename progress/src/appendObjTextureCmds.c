typedef struct { u32 w0; u32 w1; } Gw;
typedef union { Gw words; long long int force_structure_alignment; } Gfx;
typedef struct { f32 frame; u8 pad[0x60]; } Anim;
extern Anim D_8011F338[];
extern u8 objFrameToTexture[];
extern u32 objTexImages[];
extern u32 objPalettes[];
#define CMD(pkt, a, b) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (a); _g->words.w1 = (u32)(b); }

/* Appends the RDP commands that load an object's current frame texture (image and palette) into the display list. */
void appendObjTextureCmds(Gfx **gfx, u16 id)
{
    CMD((*gfx)++, 0xB6000000, 0x2000);
    CMD((*gfx)++, 0xFD100000, objTexImages[objFrameToTexture[(u16)(u32)D_8011F338[id].frame]]);
    CMD((*gfx)++, 0xE8000000, 0);
    CMD((*gfx)++, 0xF5000100, 0x07000000);
    CMD((*gfx)++, 0xE6000000, 0);
    CMD((*gfx)++, 0xF0000000, 0x073FC000);
    CMD((*gfx)++, 0xE7000000, 0);
    CMD((*gfx)++, 0xFD500000, objPalettes[objFrameToTexture[(u16)(u32)D_8011F338[id].frame]]);
    CMD((*gfx)++, 0xF5500000, 0x07098260);
    CMD((*gfx)++, 0xE6000000, 0);
    CMD((*gfx)++, 0xF3000000, 0x073FF200);
    CMD((*gfx)++, 0xE7000000, 0);
    CMD((*gfx)++, 0xF5400800, 0x00098260);
    CMD((*gfx)++, 0xF2000000, 0x000FC0FC);
}
