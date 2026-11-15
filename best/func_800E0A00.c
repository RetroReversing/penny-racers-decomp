extern u8 D_8011F2FA[];

void func_800E0A00(s32 arg0, s32 arg1, u16 *arg2)
{
  s32 i;
  s32 j;
  u8 pivot;
  u16 tmp;

  i = arg0;
  j = arg1;
  pivot = D_8011F2FA[arg2[(arg0 + arg1) / 2] * 100];
  while (1)
  {
    while ((u8) D_8011F2FA[arg2[i] * 100] < pivot)
    {
      i++;
    }
    while (pivot < (u8) D_8011F2FA[arg2[j] * 100])
    {
      j--;
    }
    if (i < j)
    {
      tmp = arg2[i];
      arg2[i] = arg2[j];
      arg2[j] = tmp;
      i++;
      j--;
    }
    else
    {
      break;
    }
  }
  if (arg0 < i - 1)
  {
    func_800E0A00(arg0, i - 1, arg2);
  }
  if (j + 1 < arg1)
  {
    func_800E0A00(j + 1, arg1, arg2);
  }
}
