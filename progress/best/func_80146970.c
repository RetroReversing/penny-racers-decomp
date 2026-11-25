extern u16 D_80183BD4;
extern u8 D_80189B36;
extern u16 D_80189C98;
extern u8 D_80189CBE;
extern u8 D_80190CB0;
extern u8 D_80190CAE;
s32 func_8014A870(s32, s32, u8);
void func_80148688(s32, u8);
void func_8014B854(s32);
void func_80146970(void)
{
  u8 *__base_D_80189B36;
  s32 temp_v0;
  s32 var_a0;
  s32 var_v0;
  u8 *p;
  do
  {
    p = &D_80190CB0; temp_v0 = func_8014A870(0x14, 3, D_80189CBE);
    if (temp_v0 & 3)
    {
      if (((unsigned long) (&D_80190CB0)) & 0x100)
      {
        func_8014B854(0x3B);
      }
      else
      {
        func_8014B854(0x3B);
      }
    }
    func_80148688(temp_v0 & 0xFF, *(&D_80190CB0));
    var_v0 = temp_v0 & 0x20;
    if (temp_v0 & 0x10)
    {
      var_a0 = 0x3E;
      if (1)
      {
        if (!(D_80183BD4 & 0x1000))
        {
          var_a0 = 0x3D;
 do { __base_D_80189B36 = &D_80189B36; *__base_D_80189B36 &= 0xEF; } while (0);
          D_80189C98 = *((u16 *) ((&D_80190CB0) - 4));
        }
        func_8014B854(var_a0);
      }
      var_v0 = 0;
    }
    if (var_v0 != 0)
    {
      func_8014B854(0x3A);
      do
      {
        *__base_D_80189B36 &= 0xEF;
      }
      while (0);
      D_80189C98 = *((u16 *) (&D_80190CAE));
    }
  }
  while (0);
}
