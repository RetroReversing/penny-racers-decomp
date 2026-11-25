extern u16 D_8011F068[];
extern u8 D_8011F2F0[];
extern u16 func_800E1850;
void func_800E1510(void);
void func_800E15CC(void);
void func_800E1688(void);
inline static u16 inline_fn()
{
  return D_8011F068[0];
}

inline static unsigned char inline_fn2(u16 arg0)
{
  return (unsigned char) arg0;
}

void func_800E1728(void)
{
  volatile unsigned char pad;
  u8 *__base_D_8011F2F0;
  u16 s0;
  u16 v;
  u8 *rec;
  u16 *q;
 do { if (func_800E1850 == 0xFFFF) { return; } func_800E1510(); s0 = 0; } while (0);
  func_800E15CC();
  if (inline_fn() == 0xFFFF)
  {
    return;
  }
  q = D_8011F068;
  do
  {
    __base_D_8011F2F0 = D_8011F2F0;
    rec = __base_D_8011F2F0 + (D_8011F068[inline_fn2(s0)] * 100);
    if (rec[0xD] != 0)
    {
      s0++;
    }
    else
      if (rec[1] == 1)
    {
      func_800E1688();
      s0++;
    }
    else
      if (!((*((s32 *) rec)) & 0x12))
    {
      v = q[s0];
      s0++;
      ((void (*)(u16)) (*((void **) (rec - (-0x54)))))(v);
    }
    else
    {
      s0++;
    }
    v = D_8011F068[inline_fn2(s0)];
  }
  while (v != 0xFFFF);
}
