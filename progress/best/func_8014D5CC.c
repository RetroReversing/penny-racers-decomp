#define F32(base, off) (*(f32 *)((u8 *)(base) + (off)))
extern u8 D_8011F314[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern f64 D_80183780;
extern f64 D_80183788;
void func_8013AE60(s32);
f32 __sinf(f32);
inline static u8 *inline_fn(u8 *arg0)
{
  return (u8 *) arg0;
}

inline static int inline_fn2(u16 arg0)
{
  return arg0 * 0x64;
}

void func_8014D5CC(s32 arg0)
{
  char *__repair_addr;
  u16 idx;
  s32 off;
  s32 __repair_result_off;
  f32 fv;
  idx = arg0;
  do
  {
    func_8013AE60(idx);
  }
  while (0);
  __repair_addr = (char *) (D_8011F32E + inline_fn2(idx));
  if ((*((u16 *) __repair_addr)) == 0)
  {
    *((f32 *) (((u8 *) D_8011F338) + (idx * 0x64))) = *((f32 *) (((u8 *) D_8011F314) + (idx * 0x64)));
    do
    {
      *((u16 *) (D_8011F32E + inline_fn2(idx))) = 1;
    }
    while (0);
  }
  do
  {
    off = (((u16) arg0) * 25) * 4;
 do { *((f32 *) (((u8 *) D_8011F334) + ((((u16) arg0) * 25) * 4))) = (*((f32 *) (((u8 *) D_8011F334) + off))) + 1.0f; } while (0);
  }
  while (0);
  fv = *((f32 *) (((u8 *) D_8011F334) + off));
  do
  {
    if (fv > 360.0f)
    {
      if (D_8011F334)
      {
        *((f32 *) (((u8 *) D_8011F334) + off)) = fv - 360.0f;
      }
      else
      {
        *((f32 *) (((u8 *) D_8011F334) + off)) = fv - 360.0f;
      }
    }
    __repair_result_off = inline_fn2((u16) arg0);
    *((f32 *) (((u8 *) D_8011F314) + __repair_result_off)) = (__sinf((f32) ((((f64) (*((f32 *) (inline_fn(D_8011F334) + __repair_result_off)))) * D_80183780) / D_80183788)) * (-20.0f)) - (*((f32 *) (((u8 *) D_8011F338) + __repair_result_off)));
  }
  while (0);
}
