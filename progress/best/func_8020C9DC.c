s32 func_801CA140();
s32 func_801CA494(s32, u8, u8, u8);
s32 func_801CABF4(s32, s32, s32, s32, s32 *, s32, s32, s32 *, s32, s32, s32, s32);
s32 func_8020557C(s32, s32);
extern s32 D_800DE080;
extern u8 D_8021B068;
extern s32 D_8021E1BC;
extern s32 D_8021F260;
extern s32 D_802D6898;
extern s32 D_802D92A0;
void func_8020C9DC(s32 arg0)
{
  s32 *__base_D_800DE080;
  unsigned short temp_s1;
  u8 var_a1;
  u8 var_a2;
  void *temp_v1;
  func_801CA140();
  __base_D_800DE080 = &D_800DE080;
  temp_v1 = *((void **) (((char *) __base_D_800DE080) + 0x64));
  do
  {
    *((void **) (((char *) __base_D_800DE080) + 0x64)) = (void *) (temp_v1 + 8);
  }
  while (0);
  *((s32 *) (((char *) temp_v1) + 0)) = 0xED0002B4;
 do { *((s32 *) (((char *) temp_v1) + 4)) = 0x500380; } while (0);
  temp_s1 = func_8020557C(D_8021E1BC, 0xF) & 0xFFFF;
  if (D_8021B068 == 0)
  {
    do
    {
      do
      {
        var_a1 = *((u8 *) (((char *) (&D_8021F260)) + 0));
      }
      while (0);
      var_a2 = *((u8 *) (((char *) (&D_8021F260)) + 1));
    }
    while (0);
    func_801CA494(arg0, var_a1, var_a2, *((u8 *) (((char *) (&D_8021F260)) + 2)));
  }
  else
  {
    var_a1 = 0xFF;
    var_a2 = 0xFF;
    func_801CA494(arg0, var_a1, var_a2, 0xFF);
  }
  func_801CABF4(arg0, temp_s1 & 0xFFFF, 0xC6, 0xF, &D_802D92A0, D_8021E1BC, 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
}
