/* Partial candidate from function #273623 in project #72; rechecked locally. */
void func_8000F020(void);
void func_8003EBF0(u32 arg0, s32 arg1)
{
  u32 t0;
  u32 t1;
  u32 t2;
  u32 t3;
  if (arg1 <= 0)
  {
    return;
  }
  t1 = arg0;
  t3 = 0x2000;
  if (((u32) arg1) < t3)
  {
    t0 = t1;
    t1 = t1 + arg1;
    if (t0 >= t1)
    {
      return;
    }
    t1 -= 16;
    t2 = t0 & 15;
    t0 -= t2;
    do
    {
      t0 += 16;
    }
    while (t0 < t1);
  }
  else
  {
    func_8000F020();
  }
}

extern void *D_800129D4;
s32 func_800072E0(void);
s32 func_80007300(s32);
void func_8000E980(s32 arg0);
