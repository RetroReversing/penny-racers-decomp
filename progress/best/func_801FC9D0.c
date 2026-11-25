extern u8 D_8011F2F0[];
typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F330;
extern Slot_8011F330 D_8011F330[];
extern u8 D_801FFD6C[];
void func_801FC9D0(u32 **arg0, s32 arg1)
{
  u8 *p;
  u32 *g;
u32 *__repair_phase_g;
  
  u32 a;
  u32 b;
  u32 c;
  u32 d;
  u32 e;
  u32 f;
  u32 h;
  u32 idx = arg1 & 0xFFFF;
  u16 st = D_8011F330[(unsigned short) (arg1 & 0xFFFF)].f0;
  if (!st)
  {
    D_8011F330[(unsigned short) idx].f0 = 1;
    return;
  }
  if (st == 1)
  {
    register u32 v = *(D_8011F2F0 + (idx * 0x64));
    u32 q = (v / 7) & 0xFF;
    u32 r = (v - (q * 7)) & 0xFF;
    s32 x0 = r << 5;
    long x1 = x0 + 0x20;
    u32 w;
    u32 t0;
    u32 t1;
    u32 t2;
    u32 t3;
    if (x0 || t3)
    {
      g = *arg0;
      *arg0 = g + 2;
      g[0] = 0xFD4800EF;
      g[1] = D_801FFD6C;
      w = 0xF5480000 | (((((x1 - (x0 + 1)) + 8) >> 3) & 0x1FF) << 9);
      g[0] = w;
      g[1] = 0x07080200;
      g = *arg0;
    }
    else
    {
      g = *arg0;
      *arg0 = g + 2;
      g[0] = 0xFD4800EF;
      g[1] = D_801FFD6C;
      w = 0xF5480000 | (((((x1 - (x0 + 1)) + 8) >> 3) & 0x1FF) << 9);
      g[0] = w;
      g[1] = 0x07080200;
      g = *arg0;
    }
    {
      *arg0 = g + 2;
 do { g = *arg0; *arg0 = g + 2; g[0] = 0xE6000000; g[1] = 0; t0 = ((x0 * 4) & 0xFFF) << 12; t1 = (q << 7) & 0xFFF; g = *arg0; { *arg0 = g + 2; g[0] = 0xF4000000 | t0 | t1; t2 = (((x1 - 1) * 4) & 0xFFF) << 12; t3 = ((q << 7) | 0x7C) & 0xFFF; g[1] = 0x07000000 | t2 | ((short) t3); g = *arg0; *arg0 = g + 2; g[0] = 0xE7000000; g[1] = 0; { __repair_phase_g = *arg0; *arg0 = __repair_phase_g + 2; __repair_phase_g[0] = w; } if (arg0) { __repair_phase_g[1] = 0x80200; g = *arg0; } else { __repair_phase_g[1] = 0x80200; g = *arg0; } } *arg0 = g + 2; g[0] = 0xF2000000 | ((u32) t0) | t1; g[1] = t2 | t3; g = *arg0; *arg0 = g + 2; g[0] = 0xF2000000; } while (0);
      g[1] = 0x7C07C;
    }
  }
}
