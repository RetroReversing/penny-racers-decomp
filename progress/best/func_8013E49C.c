#define NEXT(i) (*(u16 *)(D_8018D73A + (i) * 124))
#define PREV(i) (*(u16 *)(D_8018D738 + (i) * 124))
extern u16 D_80187BE0;
extern u16 D_80189DC2;
extern u8 D_8018D738[];
extern u8 D_8018D73A[];
extern u16 D_8018F5C2;
inline static u16 inline_fn()
{
  return D_80189DC2;
}

s32 func_8013E49C(u16 arg0)
{
  u16 *__base_D_80187BE0;
  u16 a0;
  u16 __repair_result_a0;
  s32 a1;
  s32 a2;
  u16 v0;
  D_8018F5C2 = arg0;
  a2 = 1;
  if (inline_fn() == 0xFFFF)
  {
    a1 = D_8018F5C2;
    v0 = NEXT(a1);
    if (v0 != 0xFFFF)
    {
      do
      {
        __repair_result_a0 = NEXT(a1);
        a1 = __repair_result_a0;
        v0 = NEXT(a1);
        a2++;
      }
      while (v0 != 0xFFFF);
    }
    D_80189DC2 = __repair_result_a0;
    __base_D_80187BE0 = &D_80187BE0;
    *__base_D_80187BE0 = a2;
    return v0;
  }
  a1 = __repair_result_a0;
  if (NEXT(a1) != 0xFFFF)
  {
    __repair_rows:
    {
      NEXT(inline_fn()) = __repair_result_a0;
      PREV(a1) = D_80189DC2;
      D_80189DC2 = __repair_result_a0;
      a0 = NEXT(a1);
      a1 = a0;
      a2++;
    }

    if (NEXT(a1) != 0xFFFF)
    {
      goto __repair_rows;
    }
  }
  NEXT(inline_fn()) = a0;
  PREV(a0) = inline_fn();
  D_80189DC2 = a0;
  *__base_D_80187BE0 += a2;
  return *__base_D_80187BE0;
}

