inline static int __repair_inline(s32 a, s32 b)
{
  return a < b;
}

extern u8 D_8006FAF0[];
extern u8 D_8022A770[];
extern u8 D_800DA260[];
extern u8 D_800DA26A[];
extern u8 D_801E9698[];
extern u8 D_801E96B4[];
extern u8 D_801E9738[];
extern u8 D_801E9740[];
extern u8 D_801E97A0[];
extern u8 D_801E97A1[];
extern u8 D_801E97A2[];
extern u8 D_801E97A4[];
extern u8 D_801E97A6[];
extern u8 D_801E97B8[];
extern s32 D_801E9D58;
void func_8003DE60(void *, u8, s32, void *);
s32 func_80029790(u8, u16 *, s32, void *);
void func_800297C8(void);
s32 func_801E2F38(s32);
void func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
inline static u8 inline_fn(u8 arg0)
{
  return arg0;
}

inline static int inline_fn2(int arg0)
{
  return arg0;
}

inline static int inline_fn23(s32 arg0)
{
  return arg0 + 1;
}

void func_801E3FE8(void)
{
  s32 idx;
  s32 a2;
  s32 __repair_phase_a2;
  s32 s1;
  s32 k;
  s32 a1f;
  s32 v;
  u8 *s0;
  do
  {
    *((u8 *) D_801E9740) = 0;
  }
  while (0);
  *((u8 *) D_801E9738) = 0;
  do
  {
    s0 = (void *) (*((u16 *) (D_8006FAF0 + 0x20))); idx = ((u32) s0) - 1; s0 = D_8022A770 + 0x562; s1 = 1;
    if (D_8022A770[0x562] == 0)
    {
      {
        s32 __repair_value;
        do
        {
          __repair_value = idx * 48;
          if (1)
          {
          }
        }
        while (0);
        a2 = __repair_value;
      }
      if (D_8022A770[0x563] > D_801E97A2[inline_fn23(a2)])
      {
        goto L4174;
      }
      a1f = D_8022A770[0x563] < D_801E97A2[inline_fn23(a2)];
      if (!(a1f | inline_fn2(inline_fn(D_8022A770[0x564]) <= (D_801E97A4 + 2)[a2])))
      {
        goto L4174;
      }
      if (D_8022A770[0x564] < D_801E97A4[a2])
      {
        a1f = 1;
      }
      __repair_phase_a2 = idx * 48;
      do
      {
      }
      while (0);
      if (!(a1f | (D_8022A770[0x566] < D_801E97A4[__repair_phase_a2 + 1])))
      {
        s1 = 1;
        goto L4174;
      }
      func_8003DE60(D_801E9698, 1, 0, 0);
      *((u8 *) D_801E9738) = 1; D_801E97A2[inline_fn23(__repair_phase_a2)] = (D_8022A770 + 0x562)[1]; D_801E97A4[__repair_phase_a2] = s0[2]; D_801E97A4[__repair_phase_a2 + 1] = (D_8022A770 + 0x562)[4];
      for (k = 0; __repair_inline(k, 8); k++)
      {
        ;
      }

      s1 = 0;
    }
  }
  while (0);
  L4174:
  __repair_phase_a2 = idx * 48;

  if (v)
  {
    (void) __repair_phase_a2;
    (void) s1;
    (void) k;
    (void) a1f;
    (void) v;
    func_800297C8();
  }
  else
    if (idx)
  {
    (void) __repair_phase_a2;
    (void) s1;
    (void) k;
    (void) a1f;
    (void) v;
    func_800297C8();
  }
  else
  {
    (void) __repair_phase_a2;
    (void) s1;
    (void) k;
    (void) a1f;
    (void) v;
    func_800297C8();
  }
}

