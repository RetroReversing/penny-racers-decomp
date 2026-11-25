extern u8 D_8011F2FC[];
extern u8 D_8011F32E[];
extern u8 D_802E6320[];
void func_8015601C(s32 **arg0, s32 arg1)
{
  s32 temp_a3;
  s32 *dl;
  s32 *__repair_phase_dl;
  *arg0 = dl + 2;
  do
  {
    dl = *arg0; dl[0] = 0xB6000000; dl[1] = 0x2000; dl = *arg0;
    *arg0 = dl + 2; dl[0] = 0xFA000000;
    do
    {
      temp_a3 = (((unsigned) arg1) & 0xFFFF) * 0x64; dl[1] = D_8011F2FC[10 * (10 * (((unsigned) arg1) & 0xFFFF))] | 0x5CC7BF00;
      do
      {
        do
        {
          dl = *arg0;
          *arg0 = dl + 2;
          dl[0] = (float) 0xFD88001F; dl[1] = (s32) D_802E6320; dl = *arg0;
          *arg0 = dl - (-2);
        }
        while (0);
        do
        {
          dl[0] = 0xF5880800;
        }
        while (0);
        dl[1] = 0x07018050;
        do
        {
          dl = *arg0;
          *arg0 = dl + 2;
          do
          {
            dl[0] = 0xE6000000; dl[1] = 0; dl = *arg0;
            *arg0 = dl + 2;
            do
            {
              dl[0] = 0xF4000000; dl[1] = 0x0707C0FC; __repair_phase_dl = *arg0; __repair_phase_dl[0] = 0xE7000000;
              *arg0 += 2; __repair_phase_dl[1] = 0; dl = *arg0;
              *arg0 = dl + 2; dl[0] = 0xF5880800; dl = *arg0;
            }
            while (0);
            dl[1] = 0x18050;
            do
            {
              *arg0 = dl + 2;
            }
            while (0);
            dl[0] = 0xF2000000;
          }
          while (0);
          dl[1] = 0x7C0FC;
        }
        while (0);
      }
      while (0);
      dl = *arg0;
      *arg0 = dl + 2; dl[0] = ((*((u16 *) (D_8011F32E + ((s32) temp_a3)))) & 0xFFF) | 0xF2000000;
      do
      {
        do
        {
          do
          {
            dl[1] = 0x7C0FC;
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

