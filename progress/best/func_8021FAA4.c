extern s32 D_800DB1B8;
extern u8 D_8011F2E8;
extern u8 D_80126FF6;
extern s32 D_80220ED8;
extern s32 D_80220EF0;
extern s32 D_80220F08;
extern s32 D_80220F20;
extern s32 D_80220F38;
extern s32 D_80220F50;
extern s32 D_80220F68;
void func_8021FAA4(void **arg0)
{
  s16 temp_v1_2;
  void *temp_v1;
  s32 *__base_D_80220EF0;
  s32 *__base_D_80220F08;
  s32 *__base_D_80220F20;
  s32 *var_v0;
  register void *temp_v1_12;
  void *temp_v1_6;
  void *temp_v1_7;
  void *temp_v1_8;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 8;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xE7000000;
  *((s32 *) (((char *) temp_v1) + 4)) = 0;
  temp_v1_2 = *((s32 *) ((((s8 *) (&D_800DB1B8)) + 0x2108) + (D_80126FF6 * 0x28)));
  switch (temp_v1_2)
  {
    case 2:
      if (!D_8011F2E8)
    {
      temp_v1 = *arg0;
      do
      {
        *arg0 = temp_v1 + 8;
      }
      while (0);
      *((s32 *) (((char *) temp_v1) + 0)) = 0x06000000;
      var_v0 = &D_80220F50;
    }
    else
    {
      temp_v1 = *arg0;
      *arg0 = temp_v1 + 8;
      *((s32 *) (((char *) temp_v1) + 0)) = 0x06000000;
      var_v0 = &D_80220F68;
    }
      break;

    case 3:
      if (!D_8011F2E8)
    {
      temp_v1 = *arg0;
      *((s32 *) (((char *) temp_v1) + 0)) = 0x06000000;
      *arg0 = temp_v1 + 8;
      __base_D_80220EF0 = &D_80220EF0;
      var_v0 = __base_D_80220EF0;
    }
    else
      if (((u32) D_8011F2E8) == 1)
    {
      *arg0 = temp_v1_6 + 8;
      temp_v1_6 = *arg0;
      *((s32 *) (((char *) temp_v1_6) + 0)) = 0x06000000;
      var_v0 = __base_D_80220F08;
      __base_D_80220F08 = &D_80220F08;
    }
    else
    {
      *arg0 = temp_v1_7 + 8;
      temp_v1_7 = *arg0;
      *((s32 *) (((char *) temp_v1_7) + 0)) = 0x06000000;
      __base_D_80220F20 = &D_80220F20;
      var_v0 = __base_D_80220F20;
    }
      break;

    case 4:
      switch ((u32) D_8011F2E8)
    {
      case 0:
        *arg0 = temp_v1_8 + 8;
        temp_v1_8 = *arg0;
        *((s32 *) (((char *) temp_v1_8) + 0)) = 0x06000000;
        var_v0 = __base_D_80220EF0;
        break;

      case 1:
        temp_v1 = *arg0;
        *arg0 = temp_v1 + 8;
        *((s32 *) (((char *) temp_v1) + 0)) = 0x06000000;
        var_v0 = __base_D_80220F08;
        break;

      case 2:
        temp_v1 = *arg0;
        *arg0 = temp_v1 + 8;
        *((s32 *) (((char *) temp_v1) + 0)) = 0x06000000;
        var_v0 = __base_D_80220F20;
        break;

      default:
        temp_v1 = *arg0;
        *arg0 = temp_v1 + 8;
        *((s32 *) (((char *) temp_v1) + 0)) = 0x06000000;
        do
      {
        var_v0 = &D_80220F38;
      }
      while (0);
        break;

    }

      break;

    default:
 do { temp_v1_12 = *arg0; *arg0 = temp_v1_12 + 8; } while (0);
      *((s32 *) (((char *) temp_v1_12) + 0)) = 0x06000000;
      var_v0 = &D_80220ED8;
      break;

  }

  *((s32 **) (((char *) (*arg0)) + 4)) = var_v0;
}
