extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
inline static int inline_fn(unsigned char arg0)
{
  return arg0 & 0xFFFF;
}

void func_801B3E18(u16 arg0)
{
  s32 off;
  int __repair_phase_off;
  s32 __repair_phase___repair_phase_off;
  off = inline_fn(arg0) * 100;
  if (D_8011F2F0[inline_fn(arg0) * 100] < 0x1E)
  {
    D_8011F2FC[(unsigned short) off] -= 7;
  }
  else
  {
    __repair_phase_off = inline_fn(inline_fn(inline_fn(((inline_fn(inline_fn(inline_fn(arg0))) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) * 100;
    if (((u8) (D_8011F2F0[(unsigned short) __repair_phase_off] - 0x1E)) < 0x1E)
    {
      if (1)
      {
        D_8011F2FC[(unsigned short) __repair_phase_off] = ((0, D_8011F2FC[(unsigned short) __repair_phase_off])) + 7;
      }
    }
  }
  __repair_phase___repair_phase_off = inline_fn(arg0) * 100;
  D_8011F2F0[inline_fn(arg0) * 100] = D_8011F2F0[__repair_phase___repair_phase_off] + 1;
  if (D_8011F2F0[__repair_phase___repair_phase_off] == 0x3C)
  {
    D_8011F2F0[__repair_phase___repair_phase_off] = 0;
  }
}

