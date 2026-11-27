typedef struct
{
  u8 f0;
  u8 pad[99];
} Row_D_8011F2FA;
extern Row_D_8011F2FA D_8011F2FA[];

void sortObjIndicesByGroup(s32 lo, s32 hi, u16 *arr)
{
  s32 i;
  s32 j;
  u8 pivot;
  u16 tmp;

  pivot = D_8011F2FA[arr[(lo + hi) / 2]].f0;
  i = lo;
  j = hi;
  for (;;)
  {
    while (D_8011F2FA[arr[i]].f0 < pivot)
    {
      i++;
    }
    while (pivot < D_8011F2FA[arr[j]].f0)
    {
      j--;
    }
    if (i < j)
    {
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
    }
    else
    {
      break;
    }
  }
  if (lo < i - 1)
  {
    sortObjIndicesByGroup(lo, i - 1, arr);
  }
  if (j + 1 < hi)
  {
    sortObjIndicesByGroup(j + 1, hi, arr);
  }
}
