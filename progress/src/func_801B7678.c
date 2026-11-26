typedef struct { u32 w0; u32 w1; } Cmd;
typedef struct { u16 x; u16 y; u16 w; u16 h; } Rect;
extern s32 D_8006F9D0;
extern s32 D_800DB1B0;
extern u8 D_800DB1B8[];
s32 osVirtualToPhysical(s32);

#define CMD(a, b) { Cmd *_g = (Cmd *)((*gfx)++); _g->w0 = (a); _g->w1 = (b); }
#define RECT ((Rect *)(D_800DB1B8 + 0x2138))

void func_801B7678(Cmd **gfx)
{
  CMD(0xE7000000, 0);
  CMD(0xB900031D, 0x550208);
  CMD(0xBA001402, 0x300000);
  CMD(0xFF10013F, D_8006F9D0 - 0x80000000);
  CMD(0xF7000000, 0xFFFCFFFC);
  {
    Cmd *_g = (Cmd *)((*gfx)++);
    Rect *r = RECT;
    _g->w0 = 0xF6000000 | (((r->x + r->w - 1) & 0x3FF) << 14) | (((r->y + r->h - 1) & 0x3FF) << 2);
    _g->w1 = ((r->x & 0x3FF) << 14) | ((r->y & 0x3FF) << 2);
  }
  CMD(0xE7000000, 0);
  CMD(0xBA001402, 0);
  CMD(0xFF10013F, osVirtualToPhysical(D_800DB1B0));
}
