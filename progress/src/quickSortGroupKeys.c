extern f32 sGroupSortKeys[][6];
extern u8 sGroupSortValues[][6];

/* Quicksorts one group's float keys between lo and hi (inclusive), moving the matching
   byte from sGroupSortValues along with each key. */
void quickSortGroupKeys(u16 group, u16 lo, u16 hi)
{
  f32 pivot;
  u16 i;
  u16 j;
  u8 tmp;
  f32 ftmp;

  pivot = sGroupSortKeys[group][(lo + hi) >> 1];
  i = lo;
  j = hi;
  while (1)
  {
    while (sGroupSortKeys[group][i] < pivot)
    {
      i++;
    }
    while (pivot < sGroupSortKeys[group][j])
    {
      j--;
    }
    if (i >= j)
    {
      break;
    }
    tmp = sGroupSortValues[group][i];
    sGroupSortValues[group][i] = sGroupSortValues[group][j];
    sGroupSortValues[group][j] = tmp;
    ftmp = sGroupSortKeys[group][i];
    sGroupSortKeys[group][i] = sGroupSortKeys[group][j];
    sGroupSortKeys[group][j] = ftmp;
    i++;
    j--;
  }
  if (lo < (i - 1))
  {
    quickSortGroupKeys(group, lo, i - 1);
  }
  if ((j + 1) < hi)
  {
    quickSortGroupKeys(group, j + 1, hi);
  }
}
