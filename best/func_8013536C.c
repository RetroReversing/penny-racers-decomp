s32 func_801CA140();
s32 func_801CC150(void **, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32 *, s32 *);
extern s32 D_8006FB14;
extern s32 D_800DB1B8;
extern s32 D_8011F2F0;
extern s32 D_8011F2FC;
extern u8 D_80126FF6;
extern s32 D_80167F58;
extern s32 D_80167F60;
extern s32 D_80174A68;
extern s32 D_80175250;
extern s32 D_80220ED8;
void func_8013536C(void **arg0, s32 arg1)
{
  s32 temp_v0;
  s32 temp_v0_2;
  u16 var_a1;
  u16 var_a2;
  u8 temp_s1;
  void *temp_v1;
  if ((D_80126FF6 == ((*((s16 *) (((char *) (&D_800DB1B8)) + 0x2108))) - 1)) && ((*((&D_8011F2FC) + ((arg1 & 0xFFFF) * 0x64))) != 0))
  {
    temp_s1 = *((u8 *) (((char *) (&D_8006FB14)) + 4));
    if (temp_s1 == 1)
    {
      *((u8 *) (((char *) (&D_8006FB14)) + 4)) = 1U;
      temp_v1 = *arg0;
      *arg0 = temp_v1 + 8;
      *((s32 *) (((char *) temp_v1) + 0)) = 0x06000000;
      *((s32 **) (((char *) temp_v1) + 4)) = &D_80220ED8;
      func_801CA140();
      if ((*((s16 *) (((char *) (&D_800DB1B8)) + 0x2108))) == temp_s1)
      {
        if (arg1)
        {
          var_a1 = 0x70;
          var_a2 = 0x63;
        }
        else
        {
          var_a1 = 0x70;
          var_a2 = 0x63;
        }
      }
      else
      {
        temp_v0 = arg1 & 0xFFFF;
        if ((*((s16 *) (((char *) (&D_800DB1B8)) + 0x2108))) == 2)
        {
          var_a1 = 0x70;
          var_a2 = ((*((&D_8011F2F0) + (temp_v0 * 0x64))) * 0x6C) + 0x32;
        }
        else
        {
          temp_v0_2 = (*((&D_8011F2F0) + (temp_v0 * 0x64))) * 2;
          var_a1 = *((&D_80167F58) + temp_v0_2);
          var_a2 = *((&D_80167F60) + temp_v0_2);
        }
      }
      func_801CC150(arg0, (s16) var_a1, (s16) var_a2, 0, 0, 0x60, 0x2A, 0x60, 0x2A, 0x60, 0x15, 0, 0, 0x13F, 0xEF, &D_80174A68, &D_80175250);
    }
  }
}

