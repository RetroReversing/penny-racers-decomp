extern char D_8011F350[];
extern u16 D_8018BC3C;
inline static s32 inline_fn(int arg0)
{
  return *((s32 *) (D_8011F350 + arg0));
}

void func_801B77F8(void)
{
  u16 *__base_D_8018BC3C;
  s32 temp_v0;
  s32 temp_v0_2;
  __base_D_8018BC3C = &D_8018BC3C;
  *((s32 *) (*((s32 *) (D_8011F350 + ((*(&D_8018BC3C)) * 0x64))))) = 0;
  temp_v0 = (*__base_D_8018BC3C) * 0x64;
  *((s16 *) (((char *) inline_fn(temp_v0)) + 2)) = 5;
  *((s16 *) (((char *) inline_fn(temp_v0)) + 4)) = 0;
  *((s8 *) (((char *) (*((s32 *) (D_8011F350 + temp_v0)))) + 6)) = 0;
  do
  {
    *((s8 *) (((char *) inline_fn((*__base_D_8018BC3C) * 0x64)) + 7)) = 0;
  }
  while (0);
  *((s8 *) (((char *) inline_fn((*__base_D_8018BC3C) * 0x64)) + 8)) = 0;
  *((u8 *) (((char *) inline_fn((*__base_D_8018BC3C) * 0x64)) + 9)) = 0x99;
  temp_v0_2 = (*__base_D_8018BC3C) * 0x64;
  *((s16 *) (((char *) (*((s32 *) (D_8011F350 + temp_v0_2)))) + 0xA)) = 0;
  *((s16 *) (((char *) (*((s32 *) (D_8011F350 + temp_v0_2)))) + 0xC)) = 0;
  *((s16 *) (((char *) inline_fn(temp_v0_2)) + 0xE)) = 0x140;
  *((s16 *) (((char *) inline_fn(temp_v0_2)) + 0x10)) = 0xF0;
}

