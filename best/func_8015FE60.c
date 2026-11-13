extern s32 D_8011F2FC;
inline static s32 inline_fn(s32 *arg0)
{
  return *arg0;
}

void func_8015FE60(void **arg0, s32 arg1)
{
  s32 temp_a1;
  void *temp_v1;
  temp_a1 = (arg1 & 0xFFFF) * 0x64;
  if (inline_fn((&D_8011F2FC) + temp_a1) != 0xFA)
  {
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    *((s32 *) (((char *) temp_v1) + (0x64 * 0))) = 0xFA000000;
    *((s32 *) (((char *) temp_v1) + 4)) = (s32) inline_fn((&D_8011F2FC) + temp_a1);
  }
}

