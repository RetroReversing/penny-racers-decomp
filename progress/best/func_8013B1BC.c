extern unsigned int D_8011F2FC[];
extern u8 D_8011F2FD[];
extern u16 D_8011F2FE[];
extern float D_8011F308[];
extern float D_8011F30C[];
extern float D_8011F310[];
extern float D_8011F320[];
extern float D_8011F324[];
extern float D_8011F328[];
extern u16 D_8011F32E[];
extern float D_8011F334[];
extern float D_8011F338[];
extern float D_8011F33C[];
extern void *D_8011F350[];
inline static int inline_fn(s32 arg0)
{
  return ((u32) (arg0 & 0xFFFF)) * 10;
}

void func_8013B1BC(s32 a0)
{
  int __repair_constant = 2;
  u32 off = inline_fn(a0) * 10;
  u32 st;
  if (D_8011F2FC[off] < 0x33)
  {
    if (!off)
    {
      if (a0)
      {
        D_8011F2FD[off] = __repair_constant;
        return;
      }
      else
      {
        D_8011F2FD[off] = __repair_constant;
        return;
      }
    }
    else
      if (off || (a0 & 0xFFFF))
    {
      D_8011F2FD[off] = __repair_constant;
      return;
    }
    else
      if (off)
    {
      D_8011F2FD[off] = __repair_constant;
      return;
    }
    else
    {
      D_8011F2FD[off] = __repair_constant;
      return;
    }
  }
  st = D_8011F32E[off] - 0xB;
  (void) st;
}

