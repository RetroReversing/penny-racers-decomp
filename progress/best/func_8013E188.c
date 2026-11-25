extern s16 D_80187BE0;
extern s16 D_80189DC2;
extern u8 D_8018D6C0[];
extern u8 D_8018D6C8[];
extern u8 D_8018D6D4[];
extern u8 D_8018D736[];
extern u8 D_8018D738[];
extern u8 D_8018D73A[];
extern s16 D_8018F5C2;
void func_8013E188(void)
{
  f32 __repair_fzero = 0.0f;
  u8 *__base_D_8018D738;
  u8 *__base_D_8018D73A;
  union 
  {
    u8 *pointer;
    s32 value;
  } __repair_phase_storage;
  u16 i;
  s32 off;
  if (__base_D_8018D73A || __repair_phase_storage.pointer)
  {
    D_80187BE0 = 0x40;
  }
  else
    if (__base_D_8018D738)
  {
    D_80187BE0 = 0x40;
  }
  else
  {
    D_80187BE0 = 0x40;
  }
  for (i = 0; i < 0x40; i++)
  {
    off = i * 0x7C;
    __base_D_8018D73A = D_8018D6C0;
    *((f32 *) ((char *) ((char *) ((__base_D_8018D73A + off) + 0x10)))) = __repair_fzero;
    *((f32 *) ((__base_D_8018D73A + off) + 0xC)) = __repair_fzero;
    __base_D_8018D73A = D_8018D6C8;
    *((f32 *) (__base_D_8018D73A + off)) = __repair_fzero;
    __base_D_8018D73A = D_8018D6D4;
    *((s16 *) (__base_D_8018D73A + off)) = 0;
    __repair_phase_storage.pointer = D_8018D736;
    *((s16 *) (__repair_phase_storage.pointer + off)) = i;
  }

  do
  {
    D_80189DC2 = 0x3F;
  }
  while (0);
  D_8018F5C2 = 0;
  for (i = 1; i < 0x3F; i++)
  {
    if (__base_D_8018D738)
    {
      __repair_phase_storage.value = i * 0x7C;
      *((s16 *) ((__base_D_8018D738 = D_8018D738) + __repair_phase_storage.value)) = i - 1;
    }
    else
    {
      __repair_phase_storage.value = i * 0x7C;
      *((s16 *) ((__base_D_8018D738 = D_8018D738) + __repair_phase_storage.value)) = i - 1;
    }
    do
    {
      *((s16 *) ((__base_D_8018D73A = D_8018D73A) + __repair_phase_storage.value)) = i + 1;
    }
    while (0);
  }

  *((s16 *) (__base_D_8018D738 + 0)) = 0xFFFF;
  do
  {
    *((s16 *) (__base_D_8018D738 + 2)) = 1;
    if (1)
    {
      if (D_8018D6C0)
      {
        *((s16 *) (__base_D_8018D738 + 0x1E84)) = 0x3E;
        *((s16 *) (__base_D_8018D738 + 0x1E86)) = 0xFFFF;
      }
      else
      {
        *((s16 *) (__base_D_8018D738 + 0x1E84)) = 0x3E;
        *((s16 *) (__base_D_8018D738 + 0x1E86)) = 0xFFFF;
      }
    }
  }
  while (0);
}

