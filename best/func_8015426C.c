s32 func_8013AE60(s32);
extern s32 D_8011F32E;
inline static int inline_fn(s32 *arg0)
{
  return (*arg0) + 1;
}

void func_8015426C(s32 arg0)
{
  s32 temp_s0;
  s32 temp_v1;
  do
  {
    func_8013AE60(temp_s0 = arg0 & 0xFFFF);
  }
  while (0);
  temp_v1 = temp_s0 * 0x64;
  *((&D_8011F32E) + temp_v1) = inline_fn((&D_8011F32E) + temp_v1);
  if (((u16) (*((&D_8011F32E) + temp_v1))) >= 0x80U)
  {
    *((&D_8011F32E) + temp_v1) = (*((&D_8011F32E) + temp_v1)) - 0x7F;
  }
}

