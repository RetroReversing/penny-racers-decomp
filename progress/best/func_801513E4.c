extern f32 D_8011F338;
extern s32 D_8016D0B0;
extern u8 D_8016D0C4[];
inline static char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

inline static char *inline_fn2(void *arg0)
{
  return (char *) arg0;
}

inline static s32 *inline_fn23(char *arg0)
{
  return (s32 *) (arg0 + 0);
}

int func_801513E4(void **arg0, s32 arg1)
{
  f32 temp_fv1;
  s32 var_v0;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1;
  void *temp_v1_4;
  void *temp_v1_5;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  if (temp_v1_4)
  {
    temp_v1 = *arg0;
  }
  else
  {
    temp_v1 = *arg0;
  }
  __repair_rows:
  {
    *((s32 *) (inline_fn2(temp_v1) + 0)) = 0xFD900000;
    *arg0 = temp_v1 + 8;
    do
    {
      temp_fv1 = *((&D_8011F338) + ((arg1 & 0xFFFF) * 0x64));
      do
      {
        var_v0 = ((u32) temp_fv1) & 0xFFFF;
        *((s32 *) (inline_fn2(temp_v1) + 4)) = (s32) (*((&D_8016D0B0) + ((*(D_8016D0C4 + (((u32) temp_fv1) & 0xFFFF))) * 4)));
      }
      while (0);
      temp_v1_2 = *arg0;
      *arg0 = temp_v1_2 + 8;
      *((s32 *) (inline_fn2(temp_v1_2) + 0)) = 0xF5900000;
    }
    while (0);
    {
      *((s32 *) (inline_fn2(temp_v1_2) + 4)) = 0x07094250; temp_v1_3 = *arg0;
      *arg0 = 8 + temp_v1_3;
      *inline_fn23(inline_fn2(temp_v1_3)) = 0xE6000000;
      *((s32 *) (inline_fn2(temp_v1_3) + 4)) = (unsigned long) 0;
      temp_v1_4 = *arg0;
      *arg0 = temp_v1_4 + 8;
      do
      {
        *inline_fn23(inline_fn2(temp_v1_4)) = 0xF3000000;
 do { *((s32 *) (inline_fn2(temp_v1_4) + 4)) = 0x071FF200; temp_v1_5 = *arg0; } while (0);
      }
      while (0);
      *arg0 = temp_v1_5 + 8;
      *((s32 *) (inline_fn(temp_v1_5) + 0)) = 0xE7000000;
    }
    *((s32 *) (inline_fn(temp_v1_5) + 4)) = 0;
  }

  if (0)
  {
    goto __repair_rows;
  }
  temp_v1_6 = *arg0;
  *arg0 = temp_v1_6 - (-8);
  do
  {
    do
    {
      *((s32 *) (inline_fn(temp_v1_6) + 0)) = 0xF5880800;
    }
    while (0);
    *((s32 *) (inline_fn(temp_v1_6) + 4)) = 0x94250;
    *arg0 = (*arg0) + 8;
    *((s32 *) (inline_fn(*arg0) + 0)) = 0xF2000000;
    *((s32 *) (inline_fn(*arg0) + 4)) = 0x7C07C;
    temp_v1_8 = *arg0;
    if (1)
    {
      *arg0 = temp_v1_8 + 8;
      *((s32 *) (inline_fn(temp_v1_8) + 0)) = 0xFA000000;
    }
    if (arg0 || temp_v1_5)
    {
      *((s32 *) (inline_fn(temp_v1_8) + 4)) = 0xF87800FF;
    }
    else
    {
      *((s32 *) (inline_fn(temp_v1_8) + 4)) = 0xF87800FF;
    }
  }
  while (0);
}
