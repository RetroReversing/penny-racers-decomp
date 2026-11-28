typedef struct
{
  u8 f0;
  u8 pad[99];
} Row_D_8011F2FA;
extern Row_D_8011F2FA D_8011F2FA[];

/* Quicksorts the object index list in indices[lo..hi] by each object's group key (f0). */ void sortObjIndicesByGroup(s32 lo, s32 hi, u16 *indices)
{
  s32 left;
  s32 right;
  u8 pivotKey;
  u16 swapTmp;

  pivotKey = D_8011F2FA[indices[(lo + hi) / 2]].f0;
  left = lo;
  right = hi;
  for (;;)
  {
    while (D_8011F2FA[indices[left]].f0 < pivotKey)
    {
      left++;
    }
    while (pivotKey < D_8011F2FA[indices[right]].f0)
    {
      right--;
    }
    if (left < right)
    {
      swapTmp = indices[left];
      indices[left] = indices[right];
      indices[right] = swapTmp;
      left++;
      right--;
    }
    else
    {
      break;
    }
  }
  if (lo < left - 1)
  {
    sortObjIndicesByGroup(lo, left - 1, indices);
  }
  if (right + 1 < hi)
  {
    sortObjIndicesByGroup(right + 1, hi, indices);
  }
}
