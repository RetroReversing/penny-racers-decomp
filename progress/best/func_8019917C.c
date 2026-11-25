extern s32 D_8011F2FC;
extern s32 D_8011F32E;
extern s32 D_8011F330;
extern u8 D_801C6B30;
extern volatile short D_801C7074;
extern u8 D_801C707B;
extern volatile char D_801C7469;
extern u8 D_801C7AB8;
void func_8019917C(void **arg0_in, s16 arg1)
{
  void **arg0;
  u16 temp_v1;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 *__base_D_8011F330;
  void *temp_v1_4;
  s32 *__base_D_8011F2FC;
  s32 *__base_D_8011F32E;
  __base_D_8011F32E = &D_8011F32E;
  arg0 = arg0_in;
  __base_D_8011F2FC = &D_8011F2FC;
  __base_D_8011F330 = &D_8011F330;
  temp_v1 = *(__base_D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
  if (temp_v1 != 0)
  {
    void *temp_a0;
    if (temp_v1 != 1)
    {
      if (D_801C7469)
      {
        return;
      }
      else
      {
        return;
      }
    }
    temp_v1_2 = D_801C7074 * 0x64;
    if ((((u32) ((*(__base_D_8011F32E + temp_v1_2)) - 7)) < 2U) || ((*(__base_D_8011F32E + temp_v1_2)) == 6))
    {
      if (((D_801C7469 != 4) && (D_801C7469 != 0)) && (D_801C6B30 != 0))
      {
        goto block_20;
      }
      goto block_19;
    }
    temp_v1_3 = D_801C7074 * 0x64;
    if ((((u32) ((*(__base_D_8011F32E + temp_v1_3)) - 9)) >= 2U) && ((*(__base_D_8011F32E + temp_v1_3)) != 0xD))
    {
      if (((u32) ((*(__base_D_8011F32E + (D_801C7074 * 0x64))) - 0xF)) < 2U)
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
        if (((D_801C7AB8 == 4) || (((short) D_801C7AB8) == 0)) || (D_801C6B30 == 0))
        {
          if (arg0)
          {
            goto block_19;
          }
          else
          {
            goto block_19;
          }
        }
        block_20:
        temp_v1_4 = *arg0;

        *arg0 = temp_v1_4 + 8;
        *((s32 *) (((char *) temp_v1_4) + 0)) = 0xFA000000;
        *((s32 *) (((char *) temp_v1_4) + 4)) = 0x96969664;
      }
    }
    else
    {
      block_19:
      temp_a0 = *arg0;

      *arg0 = temp_a0 + 8;
      *((s32 *) (((char *) temp_a0) + 4)) = (unsigned char) ((s32) ((*(__base_D_8011F2FC + ((arg1 & 0xFFFF) * 0x64))) | 0xFF00));
      *((s32 *) (((char *) temp_a0) + 0)) = 0xFA000000;
    }
    temp_a0 = *arg0;
    *arg0 = temp_a0 + 8;
    *((s32 *) (((char *) temp_a0) + 0)) = 0xF9000000;
    *((s32 *) (((char *) temp_a0) + 4)) = 1;
    return;
  }
  *(__base_D_8011F330 + ((((int) arg1) & 0xFFFF) * 0x64)) = 1;
}

