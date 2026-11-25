extern short D_800DD2C0;
long long func_800DE41C();
extern char D_800DB1B8[];
extern char D_8011F350[];
extern u16 D_80189C96;
extern char D_801CE928[];
extern char D_801CEC2C[];
extern s8 D_801D59B2;
inline static u16 *inline_fn(char *arg0)
{
  return (u16 *) arg0;
}

inline static u16 inline_fn2(s32 arg0)
{
  return *((u16 *) (D_8011F350 + arg0));
}

void func_80134688(void)
{
  s8 *__base_D_801D59B2;
  s32 temp_v0;
  volatile unsigned int pad;
  s32 temp_a0;
  s32 temp_v0_2;
  do
  {
    D_80189C96 = func_800DE41C(0, 0, 3, 0, 0x80, 0xFF, 0, &D_801CE928, &D_801CEC2C, 0, 0, 0, 0, 0, (double) 0, 0);
    temp_v0 = D_80189C96 * 0x64; __base_D_801D59B2 = &D_801D59B2;
    *((u16 *) (D_8011F350 + (D_80189C96 * 0x64))) = &D_801D59B2;
    *__base_D_801D59B2 = 0;
    *((s16 *) (((char *) inline_fn2(D_80189C96 * 0x64)) + 2)) = 0x46;
    *((s16 *) (((char *) inline_fn2(D_80189C96 * 0x64)) + 4)) = 0;
    *((u8 *) (((char *) inline_fn2(D_80189C96 * 0x64)) + 6)) = 0xFF;
    *((u8 *) (((char *) inline_fn2(D_80189C96 * 0x64)) + 7)) = 0xFF;
    *((u8 *) (((char *) inline_fn2(D_80189C96 * 0x64)) + 8)) = 0xFF; temp_a0 = D_80189C96 * 0x64;
    *((u8 *) (((char *) inline_fn2(D_80189C96 * 0x64)) + 9)) = 0xC8;
    *((s16 *) (((char *) inline_fn2(temp_a0)) + 0xA)) = 0x6E;
    if (D_800DD2C0 == 1)
    {
      *((s16 *) (((char *) inline_fn2(temp_a0)) + 0xC)) = 0xDB;
    }
    else
    {
      *((s16 *) (((char *) inline_fn2(D_80189C96 * 0x64)) + 0xC)) = 0x75;
    }
    temp_v0_2 = 0x64 * D_80189C96;
    *((s16 *) (((char *) (*inline_fn(D_8011F350 + temp_v0_2))) + 0xE)) = 0x64;
    *((s16 *) (((char *) inline_fn2(temp_v0_2)) + 0x10)) = 5;
  }
  while (0);
}

