extern u8 D_8011F2FC[];
extern u8 D_8011F32E[];
extern u8 D_802D9CD8[];
void func_80154128(u32 **arg0_in, u32 arg1)
{
  u32 **arg0;
  u32 *q;
  u32 *__repair_phase_q;
  u32 *p;
  register int off;
  arg0 = arg0_in;
  p = *arg0;
  *arg0 = p + 2;
  {
    p[0] = 0xFA000000;
    do
    {
      (*arg0)[1] = D_8011F2FC[off = (arg1 & 0xFFFF) * 0x64] | 0xFFFFFF00; q = *arg0;
      *arg0 = q + 2;
    }
    while (0);
    {
      q[0] = 0xFD88003F; q[1] = (u32) D_802D9CD8;
      do
      {
        q[0] = 0xF5881000;
        do
        {
          q[1] = 0x07014060; q = *arg0;
          *arg0 = q + 2;
        }
        while (0);
      }
      while (0);
      q = *arg0;
      *arg0 = q + 2;
    }
    q[0] = 0xE6000000; q[1] = 0;
    q = *arg0;
  }
  *arg0 = q + 2;
  q[0] = 0xF4000000;
  do
  {
    q[1] = 0x070FC07C;
    q = *arg0;
    *arg0 = q + 2;
    q[0] = 0xE7000000; q[1] = 0;
    q = *arg0;
    *arg0 = q + 2;
    do
    {
      q[0] = 0xF5881000; q[1] = 0x14060;
      do
      {
        q[0] = 0xF2000000;
 do { q[1] = 0xFC07C; __repair_phase_q = *arg0; } while (0);
        *arg0 = __repair_phase_q + 2; q = *arg0;
        *arg0 = q + 2; q[0] = ((*((u16 *) (D_8011F32E + ((s32) off)))) & 0xFFF) | 0xF2000000;
      }
      while (0);
    }
    while (0);
    q[1] = 0xFC07C;
  }
  while (0);
}
