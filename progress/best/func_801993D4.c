extern s32 D_8011F2FC;
extern s32 D_8011F32E;
extern s32 D_8011F330;
extern u8 D_801C6B31;
extern u16 D_801C7074;
extern u8 D_801C707B;
extern u8 D_801C7469;
extern u8 D_801C7AB8;
inline static int inline_fn()
{
  return D_801C7469 != 4;
}

void func_801993D4(void **arg0, u16 arg1)
{
  u8 *__base_D_801C6B31;
  s32 *__base_D_8011F330;
  s32 temp_v1_2;
  char temp_v1_3;
  u16 temp_v1;
  void *temp_a0;
  s32 *__base_D_8011F2FC;
  void *temp_v1_4;
  s32 *__base_D_8011F32E;
  __base_D_8011F32E = &D_8011F32E;
  __base_D_8011F2FC = &D_8011F2FC;
  __base_D_8011F330 = &D_8011F330;
  temp_v1 = *(__base_D_8011F330 + (arg1 * 0x64));
  if (temp_v1 != 0)
  {
    if (temp_v1 != 1)
    {
      return;
    }
    temp_v1_2 = D_801C7074 * 0x64;
    if ((((u32) ((*(__base_D_8011F32E + temp_v1_2)) - 7)) < 2U) || ((*(__base_D_8011F32E + temp_v1_2)) == 6))
    {
      if ((inline_fn() && (D_801C7469 != 1)) && ((*(__base_D_801C6B31 = &D_801C6B31)) != 0))
      {
        if (arg0)
        {
          goto block_20;
        }
        else
        {
          do
          {
            goto block_20;
          }
          while (0);
        }
      }
      do
      {
        goto block_19;
      }
      while (0);
    }
    if (D_801C7074 || temp_v1_3)
    {
      temp_v1_3 = ((u32) D_801C7074) * 0x64;
    }
    else
    {
      temp_v1_3 = ((u32) D_801C7074) * 0x64;
    }
    if ((((u32) ((*(__base_D_8011F32E + temp_v1_3)) - 9)) >= 2U) && ((*(__base_D_8011F32E + temp_v1_3)) != 0xD))
    {
      if (((u32) ((*(__base_D_8011F32E + ((unsigned short) (D_801C7074 * 0x64)))) - 0xF)) < 2U)
      {
        if (D_801C707B != 0)
        {
          if (D_801C707B != 1)
          {
          }
          else
          {
            goto block_20;
          }
        }
        else
        {
          goto block_19;
        }
      }
      else
      {
        if (((D_801C7AB8 == 4) || (D_801C7AB8 == ((double) 1))) || ((*__base_D_801C6B31) == 0))
        {
          goto block_19;
        }
        block_20:
        temp_v1_4 = *arg0;

        *((s32 *) (((char *) temp_v1_4) + 4)) = 0x96969664;
        *arg0 = temp_v1_4 + 8;
        *((s32 *) (((char *) temp_v1_4) + 0)) = 0xFA000000;
      }
    }
    else
    {
      do
      {
        block_19:
        temp_a0 = *arg0;

        *arg0 = temp_a0 + 8;
        *((s32 *) (((char *) temp_a0) + 0)) = 0xFA000000;
      }
      while (0);
      *((s32 *) (((char *) temp_a0) + 4)) = (s32) ((*(__base_D_8011F2FC + ((((((((arg1 * 0x64) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF))) | 0xFF00);
    }
    temp_a0 = *arg0;
    *arg0 = temp_a0 + 8;
    *((s32 *) (((char *) temp_a0) + 0)) = 0xF9000000;
    *((s32 *) (((char *) temp_a0) + 4)) = 1;
    return;
  }
  *(__base_D_8011F330 + (arg1 * 0x64)) = 1;
}

