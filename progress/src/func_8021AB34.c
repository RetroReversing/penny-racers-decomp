typedef struct { s16 *f0; u8 pad[96]; } Rec100;
extern u8 sRowBoard[];
extern Rec100 D_8011F350[];
extern u8 D_80190CAA;
extern u16 D_80190CB4;

void func_8021AB34(void)
{
  s16 *p = (s16 *) (sRowBoard + 0x2108);
  s16 v = 0;
  s16 w;
  if (D_80190CAA) {
    switch (D_80190CAA) {
    case 1: v = 2; break;
    case 3: v = 0x50; break;
    case 2: v = 0xA0; break;
    }
    w = v; p[4] = (s32) ((w - p[4]) / 8.0f) + p[4]; if (p[4] > w - 2 && p[4] < w + 2) { p[4] = v; D_80190CAA = 0; }
    p[16] = p[4];
    p[17] = p[5];
    p[18] = p[4] + p[6];
    p[19] = p[5] + p[7];
    D_8011F350[D_80190CB4].f0[5] = p[4];
  }
}
