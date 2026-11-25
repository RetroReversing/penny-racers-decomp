extern char D_8011F2F0[];
extern char D_8011F2FD[];
extern char D_8011F32E[];
extern long long D_8011F4E4[];
extern char D_8022A770[];
void func_8016221C(s32 arg0)
{
  u8 __repair_frame[8];
  f32 temp_fv0;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  int temp_a0;
  u16 temp_v0;
  void *temp_a1;
  void *temp_a2;
  if (temp_a0)
  {
    temp_a0 = arg0 * 0x64;
    temp_a2 = ((*((u16 *) (D_8011F2F0 + temp_a0))) * 0x8F0) + D_8022A770;
    temp_a1 = ((char *) ((*((u16 *) (((char *) temp_a2) + 2))) * 0x64)) + ((s32) D_8011F4E4);
  }
  else
  {
    temp_a0 = arg0 * 0x64;
    temp_a2 = ((*((u16 *) (D_8011F2F0 + temp_a0))) * 0x8F0) + D_8022A770;
    temp_a1 = ((char *) ((*((u16 *) (((char *) temp_a2) + 2))) * 0x64)) + ((s32) D_8011F4E4);
  }
  switch ((*((u16 *) (D_8011F32E + temp_a0))))
  {
    case 0:
      temp_fv1 = *((f32 *) (((char *) temp_a1) + 0x34));
      temp_fv1_2 = *((f32 *) (((char *) temp_a1) + 0x30));
      *((f32 *) (((char *) temp_a1) + 0x34)) = (f32) (((3.0f - temp_fv1) * 0.4f) + temp_fv1);
      do
    {
      *((f32 *) (((char *) temp_a1) + 0x30)) = (f32) (((0.3f - temp_fv1_2) * 0.4f) + temp_fv1_2);
      do
      {
        if ((*((f32 *) (((char *) temp_a1) + 0x34))) > 2.8f)
        {
          if (temp_a2 || temp_a0)
          {
            *((u16 *) (D_8011F32E + (arg0 * 0x64))) = 1;
            return;
          }
          else
          {
            *((u16 *) (D_8011F32E + (arg0 * 0x64))) = 1;
            return;
          }
        }
      }
      while (0);
    }
    while (0);
      return;

    case 1:
      temp_fv1_3 = *((f32 *) (((char *) temp_a1) + 0x34));
      *((f32 *) (((char *) temp_a1) + 0x34)) = (f32) (((0.3f - temp_fv1_3) * 0.4f) + temp_fv1_3);
      do
    {
      temp_fv1_4 = *((f32 *) (((char *) temp_a1) + 0x30)); temp_fv0 = ((3.0f - temp_fv1_4) * 0.4f) + temp_fv1_4;
      *((f32 *) (((char *) temp_a1) + 0x30)) = temp_fv0;
      if (temp_fv0 > 2.8f)
      {
        *((u16 *) (D_8011F32E + ((((unsigned short) arg0) & 0xFFFF) * 0x64))) = 2;
        return;
      }
    }
    while (0);
      break;

    case 2:
      *((f32 *) (((char *) temp_a1) + 0x34)) = 1.0f;
 do { *((u16 *) (D_8011F2FD + (arg0 * 0x64))) = 2; *((f32 *) (((char *) temp_a1) + 0x30)) = 1.0f; } while (0);
      *((s32 *) (((char *) (*((void **) (((char *) temp_a1) + 0x50)))) + 4)) = 0;
      temp_a0 = (u16) (*((u16 *) (((char *) temp_a2) + 0x560)));
      *((u16 *) (((char *) temp_a2) + 0x560)) = (u16) ((temp_a0 & 0xF8) | ((temp_a0 & 7) - 1));
      break;

  }

}
