extern u8 D_8011F32E[];
extern u8 D_802E3B10[];
void func_80153F74(s32 **arg0, u16 arg1)
{
  s32 *a;
  s32 *b;
  s32 *c;
  s32 *d;
  s32 *e;
  s32 *f;
  s32 *g;
  s32 *h;
  a = *arg0;
  *arg0 = a + 2; do { a[0] = 0xFD48000F; a[1] = (s32) D_802E3B10;
  do
  {
    b = *arg0;
    do
    {
      *arg0 = b + 2;
      b[0] = (float) 0xF5480400;
    }
    while (0);
  }
  while (0);
  b[1] = 0x07014050;
  c = *arg0;
  *arg0 = c + 2; c[0] = 0xE6000000; c[1] = 0;
  d = *arg0;
  *arg0 = d + 2; } while (0); d[0] = 0xF4000000; d[1] = 0x0703E07C;
  e = *arg0;
  do
  {
    *arg0 = e + 2; e[0] = 0xE7000000;
    do
    {
      e[1] = 0;
 do { f = *arg0; *arg0 = f + 2; } while (0);
      f[0] = 0xF5400400;
    }
    while (0);
    f[1] = 0x14050; g = *arg0;
    *arg0 = g + 2;
    do
    {
      g[0] = 0xF2000000;
      do
      {
        g[1] = 0x7C07C; h = *arg0;
        *arg0 = h + 2;
        do
        {
          h[0] = (((*((u16 *) (D_8011F32E + (arg1 * 0x64)))) & 0xFFF) << 0xC) | 0xF2000000;
          do
          {
            if (f || arg0)
            {
              h[1] = 0x7C07C;
            }
            else
            {
              h[1] = 0x7C07C;
            }
          }
          while (0);
        }
        while (0);
      }
      while (0);
    }
    while (0);
  }
  while (0);
}
