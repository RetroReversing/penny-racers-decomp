/* Partial candidate from function #273498 in project #72; rechecked locally. */
extern s32 func_8003EA20(void);
extern s32 __osDisableInt(void);
extern void func_8003EAE0(s32);
extern s32 D_80017820;
extern s32 D_80017828;
extern s32 D_8001782C;
s32 osGetTime(void)
{
  s32 a = __osDisableInt();
  s32 b = func_8003EA20();
  u32 new_var2;
  s32 x = b - D_80017820;
  s32 c = D_80017828;
  int new_var;
  s32 d = D_8001782C;
  if (new_var2 || b)
  {
    func_8003EAE0(a);
    x = x;
    b = d + x;
    new_var2 = (u32) b;
    new_var = c + (new_var2 < ((u32) x));
    return new_var;
  }
  else
  {
    func_8003EAE0(a);
    x = x;
    b = d + x;
    new_var2 = (u32) b;
    new_var = c + (new_var2 < ((u32) x));
    return new_var;
  }
}

