void func_801D65BC(u8, s32);
extern volatile unsigned char D_80232868[];
void func_8022FDF0(s32 arg0, s32 arg1)
{
  if (((u16) arg0) >= 10)
  {
    arg0 = 9;
  }
  if (((u16) arg1) >= 2)
  {
    arg1 = 1;
  }
  func_801D65BC(D_80232868[(u16) (arg0 + (((u16) arg1) * 10))], arg1);
}

