inline static u16 __repair_inline(u16 a)
{
  return a;
}

extern u8 D_8011F2F2[];
extern u8 D_8011F340[];
inline static u16 inline_fn(u8 *arg0)
{
  return *((u16 *) (arg0 + 8));
}

inline static u16 inline_fn2(u16 *arg0)
{
  return *arg0;
}

void func_80129C88(u8 *arg0, u16 arg1, s32 arg2)
{
  s32 __index_D_8011F2F2;
  u8 *__base_D_8011F340;
  unsigned char *__repair_loop_constant;
  int repair_scratch;
  u8 *__base_D_8011F2F2;
  u16 a3;
  u16 __repair_a3_1;
  u16 __repair_result___repair_a3_1;
  u16 __repair_result_a3;
  u16 __repair_result___repair_result_a3;
  u16 t1;
  u16 i;
  u16 n;
  u8 *p;
  u8 *__repair_phase_p;
  a3 = *((u16 *) (arg0 + 4));
  t1 = inline_fn2((u16 *) (arg0 + 6));
  i = a3;
  do
  {
    *((u16 *) ((__base_D_8011F2F2 + (i * 100)) + ((arg2 & 0xFF) * 2))) |= 8;
    __base_D_8011F340 = D_8011F340;
    __repair_loop_constant = __base_D_8011F340;
    if (t1 == 0)
    {
      p = *((u8 **) (__repair_loop_constant + (i * 100)));
      repair_scratch = *((u16 *) (p + 0xA));
      if (repair_scratch != 0xFFFF)
      {
        a3 = inline_fn2((u16 *) (p + 0xA));
      }
      else
        if (i)
      {
        a3 = *((u16 *) ((*((u8 **) (__repair_loop_constant + (a3 * 100)))) + 0xE));
        t1 = 1;
      }
      else
      {
        a3 = inline_fn2((u16 *) ((*((u8 **) (__repair_loop_constant + (a3 * 100)))) + 0xE));
        t1 = 1;
      }
    }
    else
    {
      if (arg2)
      {
        p = *((u8 **) (__repair_loop_constant + (a3 * 100)));
      }
      else
      {
        p = *((u8 **) (__repair_loop_constant + (a3 * 100)));
      }
      if (inline_fn2((u16 *) (p + 0xE)) == 0xFFFF)
      {
        a3 = *((u16 *) ((*((u8 **) (__repair_loop_constant + (a3 * 100)))) + 0xA));
        t1 = 0;
      }
      else
      {
        a3 = inline_fn2((u16 *) (p + 0xE));
      }
    }
    i = a3;
  }
  while (inline_fn2((u16 *) (arg0 + 4)) != a3);
  __repair_a3_1 = inline_fn2((u16 *) (arg0 + 4));
  t1 = *((u16 *) (arg0 + 6));
  n = 0;
  i = __repair_a3_1;
  repair_scratch = (int) __base_D_8011F340;
  do
  {
    __index_D_8011F2F2 = i * 100;
    __base_D_8011F2F2 = D_8011F2F2;
    *((u16 *) ((__base_D_8011F2F2 + __index_D_8011F2F2) + ((arg2 & 0xFF) * 2))) &= 0xFFF7;
    if (t1 == 0)
    {
      p = *((u8 **) (((unsigned char *) repair_scratch) + (i * 100)));
      if (inline_fn2((u16 *) (p + 0xA)) != 0xFFFF)
      {
        __repair_result___repair_a3_1 = __repair_inline(*((u16 *) (p + 0xA)));
        n++;
      }
      else
      {
        __repair_a3_1 = inline_fn2((u16 *) ((*((u8 **) (((unsigned char *) repair_scratch) + (__repair_a3_1 * 100)))) + 0xE));
        t1 = 1;
        n++;
      }
    }
    else
    {
      if (arg2)
      {
        p = *((u8 **) (__base_D_8011F340 + (__repair_a3_1 * 100)));
      }
      else
      {
        p = *((u8 **) (__base_D_8011F340 + (__repair_a3_1 * 100)));
      }
      if (inline_fn2((u16 *) (p + 0xE)) != 0xFFFF)
      {
        __repair_a3_1 = *((u16 *) (p + 0xE));
        n++;
      }
      else
      {
        __repair_a3_1 = *((u16 *) ((*((u8 **) (((unsigned char *) repair_scratch) + (__repair_a3_1 * 100)))) + 0xA));
        t1 = 0;
        n++;
      }
    }
    i = __repair_a3_1;
  }
  while (n < arg1);
  a3 = *((u16 *) (arg0 + 4));
  t1 = inline_fn2((u16 *) (arg0 + 6));
  n = 0;
  i = a3;
  do
  {
    *((u16 *) ((__base_D_8011F2F2 + (i * 100)) + ((arg2 & 0xFF) * 2))) &= 0xFFF7;
    if (t1 == 0)
    {
      p = *((u8 **) (__base_D_8011F340 + (i * 100)));
      if (inline_fn(p) != 0xFFFF)
      {
        __repair_result___repair_result_a3 = inline_fn(p);
        n++;
      }
      else
      {
        a3 = *((u16 *) ((*((u8 **) (__base_D_8011F340 + (a3 * 100)))) + 0xC));
        t1 = 1;
        n += 1;
      }
    }
    else
    {
      __repair_phase_p = *((u8 **) (__base_D_8011F340 - (-(a3 * 100))));
      if ((*((u16 *) (__repair_phase_p + 0xC))) != 0xFFFF)
      {
        a3 = *((u16 *) (__repair_phase_p + 0xC));
        n++;
      }
      else
      {
        if (1)
        {
          __repair_result_a3 = inline_fn(*((u8 **) (__base_D_8011F340 + (__repair_result_a3 * 100))));
          t1 = 0;
        }
        n++;
      }
    }
    i = __repair_result_a3;
  }
  while (n < arg1);
}

