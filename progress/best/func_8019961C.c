extern u8 D_8011F2FC[];
extern u8 D_8011F32E[];
extern u8 D_8011F330[];
extern u8 D_801C6B32;
extern u16 D_801C7074;
extern u8 D_801C707B;
extern u8 D_801C7469;
extern volatile unsigned int D_801C7AB8;
void func_8019961C(u32 **arg0, unsigned short arg1)
{
  u8 *__base_D_8011F330;
  u32 *p;
  u32 *__repair_phase_p;
  u32 t;
  u8 *__base_D_8011F32E;
  __base_D_8011F32E = D_8011F32E;
  __base_D_8011F330 = D_8011F330;
  if ((*((u16 *) (__base_D_8011F330 + (arg1 * 0x64)))) != 0)
  {
    if ((*((u16 *) (__base_D_8011F330 + (arg1 * 0x64)))) != 1)
    {
      return;
    }
    if ((((t = *((u16 *) (__base_D_8011F32E + ((*((u16 *) (&D_801C7074))) * 0x64)))) - 7) < 2) || (t == 6))
    {
      if (((D_801C7469 != 4) && (((short) D_801C7469) != 2)) && (D_801C6B32 != 0))
      {
        goto b20;
      }
      do
      {
        goto b19;
      }
      while (0);
    }
    if (!((((t = *((u16 *) (__base_D_8011F32E + (D_801C7074 * 0x64)))) - 9) >= 2) && (t != 13)))
    {
      b19:
      p = *arg0;

      *arg0 = p + 2;
      p[0] = (unsigned char) 0xFA000000;
      (*arg0)[1] = (*((u8 *) (D_8011F2FC + (25 * (4 * arg1))))) | 0xFF00;
    }
    else
      if (((*((u16 *) (__base_D_8011F32E - (-(D_801C7074 * 0x64))))) - 15) < 2)
    {
      if (D_801C707B != 0)
      {
        if (D_801C707B == 1)
        {
          goto b20;
        }
      }
      else
      {
        goto b19;
      }
    }
    else
    {
      if (((D_801C7AB8 == 4) || (D_801C7AB8 == 2)) || (D_801C6B32 == 0))
      {
        goto b19;
      }
      b20:
      p = *arg0;

      *arg0 = p + 2;
      { u32 *__fence_p; do { __fence_p = p; } while (0); __fence_p[0] = 0xFA000000; } p[1] = 0x96969664;
    }
    __repair_phase_p = *arg0;
    *arg0 = __repair_phase_p + 2;
    __repair_phase_p[0] = 0xF9000000; __repair_phase_p[1] = 1;
    return;
  }
  *((u16 *) (__base_D_8011F330 + (arg1 * 0x64))) = 1;
}

