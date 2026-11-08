extern volatile unsigned short D_8011F2F2[];
void func_800DF170(s32 arg0)
{
  s32 temp_v0;
  temp_v0 = (arg0 & 0xFFFF) * 0x64;
  *(D_8011F2F2 + temp_v0) = (*(D_8011F2F2 + temp_v0)) | 0x20;
}

