typedef struct { u32 w0; u32 w1; } Gfx;

extern u8 D_800DE080;
extern u8 D_80126FF6;
extern u8 D_80168166;
extern u8 D_80183BE0;

void func_80210F70(Gfx **arg0)
{
  Gfx *g;

  g = *arg0;
  *arg0 = g + 1;
  g->w0 = 0xFD100000;
  g->w1 = ((u32)D_80183BE0 + (((u32)D_80168166) << 11)) + ((((u32)D_80126FF6) << 12));

  g = *arg0;
  *arg0 = g + 1;
  g->w0 = 0xF5100000;
  g->w1 = 0x07014050;

  g = *arg0;
  g->w0 = 0xE6000000;
  *arg0 = g + 1;
  g->w1 = 0;

  g = *arg0;
  *arg0 = g + 1;
  g->w0 = 0xF3000000;
  g->w1 = 0x073FF100;

  g = *arg0;
  *arg0 = g + 1;
  g->w0 = 0xE7000000;
  g->w1 = 0;

  g = *arg0;
  *arg0 = g + 1;
  g->w0 = 0xF5101000;
  g->w1 = 0x00014050;

  g = *arg0;
  *arg0 = (s32)g + 1;
  g->w0 = 0xF2000000;
  g->w1 = 0x0007C07C;

  g = *(Gfx **)(D_800DE080 + 0x64);
  *(Gfx **)(D_800DE080 + 0x64) = g + 1;
  g->w0 = 0xED210040;
  g->w1 = 0x0049C104;
}
