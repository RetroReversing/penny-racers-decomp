s32 func_8012A384(void *, s32);
extern s32 D_8011F2F0;
extern s32 D_80232840;
extern u16 D_80233EC0;
void func_8012A950(s32 arg0)
{
  s32 temp_a1;
  s32 var_s0;
  var_s0 = 0;
  if ((*((&D_80232840) + ((arg0 & 0xFFFF) * 2))) != 0)
  {
    do
    {
      ;
      func_8012A384(((D_80233EC0 + (var_s0 & 0xFFFF)) * 0x64) + (&D_8011F2F0), var_s0 & 0xFFFF);
      var_s0 += 1;
    }
    while (((u32) (var_s0 & 0xFFFF)) < ((u16) (*(((arg0 & 0xFFFF) * 2) + (&D_80232840)))));
  }
}

