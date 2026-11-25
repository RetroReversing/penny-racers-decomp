extern u8 D_8011F314[];
extern u8 D_8011F31C[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern f64 D_80183760;
extern f64 D_80183768;
void func_8013AE60(s32);
f32 __sinf(f32);
f32 __cosf(f32);
inline static f32 *inline_fn(s32 arg0)
{
  return (f32 *) (D_8011F334 + arg0);
}

inline static int inline_fn2(s32 arg0)
{
  return !arg0;
}

inline static int inline_fn23(s32 arg0)
{
  return ((u16) arg0) * 0x64;
}

void func_8014D2B4(s32 arg0)
{
  union 
  {
    u8 *pointer;
    s32 value;
  } __repair_phase_storage;
  f32 temp_fs0;
  f32 temp_fv0;
  u16 idx;
  
  s32 __repair_phase_off;
  idx = arg0;
  do
  {
    do
    {
      func_8013AE60(idx);
    }
    while (0);
    __repair_phase_off = idx * 0x64; __repair_phase_storage.pointer = D_8011F32E;
    if ((*((u16 *) (D_8011F32E + __repair_phase_off))) == 0)
    {
      *((f32 *) (D_8011F338 + __repair_phase_off)) = *((f32 *) (D_8011F314 + __repair_phase_off));
      *((u16 *) (__repair_phase_storage.pointer + __repair_phase_off)) = 1;
    }
    __repair_phase_off = inline_fn23(arg0);
    *inline_fn(inline_fn23(arg0)) = (*((f32 *) (D_8011F334 + inline_fn23(arg0)))) + 1.0f;
  }
  while (0);
  temp_fv0 = *((f32 *) (D_8011F334 + __repair_phase_off));
  if (temp_fv0 > 360.0f)
  {
    if (inline_fn2(__repair_phase_off))
    {
      *((f32 *) (D_8011F334 + __repair_phase_off)) = temp_fv0 - 360.0f;
    }
    else
    {
      *((f32 *) (D_8011F334 + __repair_phase_off)) = temp_fv0 - 360.0f;
    }
  }
  __repair_phase_storage.value = inline_fn23(arg0);
  temp_fs0 = (f32) ((((f64) (*inline_fn(__repair_phase_storage.value))) * D_80183760) / D_80183768);
  *((f32 *) (D_8011F314 + inline_fn23(arg0))) = (__sinf(temp_fs0) * 20.0f) - (*((f32 *) (D_8011F338 + inline_fn23(arg0))));
  *((f32 *) (D_8011F31C + inline_fn23(arg0))) = __cosf(temp_fs0) * 30.0f;
}

