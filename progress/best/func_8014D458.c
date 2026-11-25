#define F32(base, off) (*(f32 *)((u8 *)(base) + (off)))
extern u8 D_8011F314[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern f64 D_80183770;
extern f64 D_80183778;
void func_8013AE60(s32);
f32 __sinf(f32);
inline static f32 *inline_fn(u8 *arg0)
{
  return (f32 *) arg0;
}

inline static int inline_fn2(u16 arg0)
{
  return arg0 * 0x64;
}

void func_8014D458(s32 arg0)
{
  char *__repair_addr;
  u16 idx;
  s32 off;
  s32 __repair_phase_off;
  f32 fv;
  idx = arg0;
  do
  {
    func_8013AE60(idx);
  }
  while (0);
  __repair_addr = (char *) (D_8011F32E + inline_fn2(idx));
 { if ((*((u16 *) __repair_addr)) == 0) { do { *((f32 *) (((u8 *) D_8011F338) + inline_fn2(idx))) = *((f32 *) (((u8 *) D_8011F314) + (idx * 0x64))); } while (0); *((u16 *) (D_8011F32E + inline_fn2(idx))) = 1; } if (fv) { off = ((u16) arg0) * 0x64; *inline_fn(((u8 *) D_8011F334) + off) = (*((f32 *) (((u8 *) D_8011F334) + off))) + 1.0f; fv = *((f32 *) (((u8 *) D_8011F334) + off)); } else { off = ((u16) arg0) * 0x64; *inline_fn(((u8 *) D_8011F334) + off) = (*((f32 *) (((u8 *) D_8011F334) + off))) + 1.0f; fv = *((f32 *) (((u8 *) D_8011F334) + off)); } if (fv > 360.0f) { do { *inline_fn(((u8 *) D_8011F334) + off) = fv - 360.0f; } while (0); } __repair_phase_off = ((u16) arg0) * 0x64; }
  *inline_fn(((u8 *) D_8011F314) + __repair_phase_off) = (__sinf((f32) ((((f64) (*((f32 *) (((u8 *) D_8011F334) + __repair_phase_off)))) * D_80183770) / D_80183778)) * 20.0f) - (*inline_fn(((u8 *) D_8011F338) + __repair_phase_off));
}
