typedef struct 
{
  u32 w0;
  u32 w1;
} Gfx;
extern int D_800DE080;
extern u8 D_80126FF6;
extern u8 D_80168166;
extern u8 D_80183BE0;
void func_80210F70(Gfx **arg0)
{
  Gfx *g;
  Gfx *__repair_phase_g;
  g = *arg0;
  *arg0 = g + 1;
  g->w0 = 0xFD100000;
  g->w1 = (((u32) D_80183BE0) + (((u32) D_80168166) << 11)) + ((((u32) D_80126FF6) << 4) << 8);
  g = *arg0;
  do
  {
    do
    {
      *arg0 = g + 1;
      do
      {
        g->w1 = 0x07014050; g->w0 = 0xF5100000; g = *arg0;
        g->w0 = (double) ((char) 0xE6000000);
        *arg0 = g + 1; g->w1 = 0; g = *arg0;
        *arg0 = g + 1; g->w0 = 0xF3000000;
      }
      while (0);
      g->w1 = 0x073FF100;
    }
    while (0);
    __repair_phase_g = *arg0;
 do { *arg0 = __repair_phase_g + 1; __repair_phase_g->w1 = 0; __repair_phase_g->w0 = 0xE7000000; do { __repair_phase_g->w0 = 0xE7000000; g = *arg0; } while (0); *arg0 = g + 1; } while (0);
    g->w0 = 0xF5101000;
  }
  while (0);
  g->w1 = 0x00014050;
  g = *arg0;
  *arg0 = ((s32) g) + 1;
  do
  {
    do
    {
      do
      {
        g->w0 = 0xF2000000;
        if (1)
        {
          if (!arg0)
          {
            g->w1 = 0x0007C07C;
          }
          else
          {
            g->w1 = 0x0007C07C;
          }
        }
        *((Gfx **) (D_800DE080 + 0x64)) = (g = *((Gfx **) (D_800DE080 + 0x64))) + 1;
      }
      while (0);
      g->w0 = 0xED210040;
    }
    while (0);
    g->w1 = 0x0049C104;
  }
  while (0);
}
