extern u8 D_8011F2FC;
extern u8 D_8011F32E;
extern u8 D_8011F330;
extern u8 D_801C6B33;
extern s16 D_801C7074;
extern u8 D_801C707B;
extern u8 D_801C7469;
extern u8 D_801C7AB8;
inline static u8 *inline_fn(u8 *arg0, u16 *arg1)
{
  return ((u8 *) arg0) + ((*arg1) * 0x64);
}

inline static int inline_fn2(u8 arg0)
{
  return arg0 == 4;
}

inline static int inline_fn23(u16 arg0)
{
  return arg0 != 1;
}

void func_80199864(u32 **arg0, unsigned int arg1_in)
{
  unsigned int arg1;
  u32 *p;
  u32 *__repair_phase_p;
  u8 *__base_D_8011F32E;
  u32 idx;
  u16 st;
  __base_D_8011F32E = &D_8011F32E;
  arg1 &= 0xFFFF;
  idx = arg1 * 0x64;
  arg1 = arg1_in;
  st = *((u16 *) (((u8 *) (&D_8011F330)) + idx));
  if (st == 0)
  {
    *((u16 *) (((u8 *) (&D_8011F330)) + idx)) = 1;
    return;
  }
  if (inline_fn23(st))
  {
    return;
  }
  if ((((u32) ((*((u16 *) inline_fn(__base_D_8011F32E, (u16 *) (&D_801C7074)))) - 7)) < 2) || ((*((u16 *) inline_fn(__base_D_8011F32E, (u16 *) (&D_801C7074)))) == 6))
  {
    if (((D_801C7469 != 4) && (D_801C7469 != 3)) && (D_801C6B33 != 0))
    {
      if (0)
      {
      }
      goto block20;
    }
    do
    {
      goto block19;
    }
    while (0);
  }
  if ((((u32) ((*((u16 *) inline_fn(&D_8011F32E, (u16 *) (&D_801C7074)))) - 9)) >= 2) && ((*((u16 *) inline_fn(__base_D_8011F32E, (u16 *) (&D_801C7074)))) != 0xD))
  {
    if (((u32) ((*((u16 *) (((u8 *) __base_D_8011F32E) - (-((*((u16 *) (&D_801C7074))) * 0x64))))) - 0xF)) < 2)
    {
      switch (D_801C707B)
      {
        case 0:
          goto block19;

        case 1:
          goto block20;

      }

      goto tail;
    }
    if ((inline_fn2(D_801C7AB8) || (D_801C7AB8 == 3)) || (D_801C6B33 == 0))
    {
      goto block19;
    }
    goto block20;
  }
  goto block19;
  block20:
  p = *arg0;

  *arg0 = p + 2;
  p[0] = 0xFA000000;
  do
  {
    p[1] = 0x96969664;
    goto tail;
    block19:
    p = *arg0;

    *arg0 = p + 2;
  }
  while (0);
  p[0] = 0xFA000000;
  p[1] = (s32) ((*(((u8 *) (&D_8011F2FC)) + (arg1 * 0x64))) | 0xFF00);
  tail:
  __repair_phase_p = *arg0;

  *arg0 = __repair_phase_p + 2;
  __repair_phase_p[0] = 0xF9000000;
  (*arg0)[1] = 1;
}

