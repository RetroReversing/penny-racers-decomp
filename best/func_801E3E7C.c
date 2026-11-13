s32 func_801CA140();
s32 func_801CB74C();
s32 func_801CBF48();
extern char D_8011F330[];
extern char D_801D4FC0[];
extern char D_801E9668[];
extern u8 D_801E979A;
inline static char inline_fn(s32 arg0)
{
  return *(D_8011F330 + ((arg0 & 0xFFFF) * 0x64));
}

void func_801E3E7C(s32 arg0, s32 arg1)
{
  s32 var_a1;
  s32 var_a2;
  u16 temp_v1;
  func_801CA140();
  temp_v1 = inline_fn(arg1);
  switch (temp_v1)
  {
    case 1:
      goto block_13;

    case 2:
      func_801CB74C(arg0, 0x18, 0x20, 8, &D_801D4FC0, &D_801E9668);
      func_801CBF48(arg0, 0x18, 0x30, 8, &D_801D4FC0, 1, (s32) D_801E979A);
      var_a1 = 0x28;
      var_a2 = 0x30;
    {
      func_801CB74C(arg0, var_a1, var_a2, 8);
      return;
    }

    case 3:
      goto block_13;

    case 0:
      block_13:
    var_a1 = 0x18;

      var_a2 = 0x20;
      block_14:
    func_801CB74C(arg0, var_a1, var_a2, 8);

      return;

  }

}

