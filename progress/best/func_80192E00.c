s32 func_8019A31C(void);
void func_8014B854(s32);
extern s8 D_801C6B22;
extern s8 D_801C6B23;
extern u8 D_801C6B25;
extern u8 D_801C6BB0;
extern u8 D_801C7062;
extern u8 D_801C7469;
extern u8 *D_801C7AB0;
inline static int inline_fn(u8 arg0)
{
  return arg0 + 1;
}

void func_80192E00(volatile int arg0)
{
  s32 v;
  u8 *a0;
  u8 *a1;
  u8 *__repair_phase_a1;
  if (arg0 == 0)
  {
    if (func_8019A31C() & 1)
    {
      D_801C7469 = 0;
      a0 = &D_801C6BB0;
      a1 = a0 + 2;
      if (D_801C7AB0[1] == 5)
      {
        *a1 = 5;
        D_801C7062 = *(a1 - 2);
        *((&D_801C7062) + 1) = inline_fn(*(a1 - 1));
        *((&D_801C7062) + 2) = 5;
        if (D_801C7AB0[0] == 4)
        {
          do {*a1 = 0x33;}while(0);
          *((&D_801C7062) + 2) = 0x33;
        }
      }
      else
      {
        *a1 = 0x2B;
        if (D_801C7AB0[0] == 4)
        {
          *a1 = 0x59;
        }
      }
      D_801C6B23 = -1;
      D_801C6B22 = 0;
      D_801C6B25 = arg0;
      func_8014B854(0x3B);
    }
  }
  else
    if (arg0 == 1)
  {
    if (func_8019A31C() & 4)
    {
      D_801C7469 = 1;
      a1 = (&D_801C6BB0) + 2;
      if (D_801C7AB0[1] != 5)
      {
        *a1 = 0x2D;
        if (D_801C7AB0[0] == 4)
        {
          *a1 = 0x5B;
        }
        v = -1;
      }
      else
      {
        *a1 = 0;
        {
          __repair_phase_a1 = (void *) (*(a1 - 2));
        }
        D_801C7062 = inline_fn((u32) __repair_phase_a1);
        *((&D_801C7062) + 1) = *(a1 - 1);
        *((&D_801C7062) + 2) = 0;
        v = -1;
        if (D_801C7AB0[0] == 4)
        {
          do
          {
            *a1 = 0x2E;
          }
          while (0);
          if (D_801C7AB0)
          {
            *((&D_801C7062) + 2) = 0x2E;
            goto block36;
          }
          else
          {
            *((&D_801C7062) + 2) = 0x2E;
            goto block36;
          }
        }
      }
      block36:
      D_801C6B22 = 0;

      D_801C6B25 = arg0;
      D_801C6B23 = v;
      func_8014B854(0x3B & 0xFF);
    }
  }
  else
    if (arg0 == 2)
  {
    if (func_8019A31C() & 2)
    {
      D_801C7469 = 2;
      a1 = (&D_801C6BB0) + 2;
      if (D_801C7AB0[1] == 5)
      {
        *a1 = 5;
        D_801C7062 = *(a1 - 2);
        a0 = (void *) (*(a1 - 1));
        *((&D_801C7062) + 1) = ((u32) a0) - 1;
        *((&D_801C7062) + 2) = 5;
        if (D_801C7AB0[0] == 4)
        {
          *a1 = 0x33;
          *((&D_801C7062) + 2) = 0x33;
        }
      }
      else
      {
        *a1 = 0x2A;
        if (D_801C7AB0[0] == 4)
        {
          *a1 = 0x58;
        }
      }
      D_801C6B23 = 1;
      D_801C6B22 = 0;
      D_801C6B25 = arg0;
      func_8014B854(0x3B);
    }
  }
  else
    if (arg0 == 3)
  {
    if (func_8019A31C() & 8)
    {
      if (__repair_phase_a1 || D_801C7AB0)
      {
        D_801C7469 = 3;
        __repair_phase_a1 = (&D_801C6BB0) + 2;
      }
      else
      {
        D_801C7469 = 3;
        __repair_phase_a1 = (&D_801C6BB0) + 2;
      }
      if (D_801C7AB0[1] == 5)
      {
        *__repair_phase_a1 = 0;
        a0 = (void *) (*(__repair_phase_a1 - 2)); D_801C7062 = ((u32) a0) - 1;
        *((&D_801C7062) + 1) = *(__repair_phase_a1 - 1);
        *((&D_801C7062) + 2) = 0;
        v = 1;
        if (D_801C7AB0[0] == 4)
        {
          *__repair_phase_a1 = 0x2E;
          *((&D_801C7062) + 2) = 0x2E;
          goto block35;
        }
      }
      else
      {
        *__repair_phase_a1 = 0x2C;
        v = 1;
        if (D_801C7AB0[0] == 4)
        {
          *__repair_phase_a1 = 0x5A;
        }
        block35:
        ;

        ;
        ;
        ;
        ;
        ;
        ;
        ;
      }
      D_801C6B22 = v;
      D_801C6B23 = 0;
      D_801C6B25 = arg0;
      func_8014B854(0x3B);
    }
  }
}

