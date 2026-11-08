extern u16 func_800E1850;
extern s32 func_801153C8;
void func_800DF094(void)
{
  s32 temp_v0;
  s32 var_v1;
  u16 temp_a0;
  var_v1 = func_800E1850 & 0xFFFF;
  if (var_v1 != 0xFFFF)
  {
    do
    {
 do { { temp_v0 = var_v1 * 0x64; *(((&func_801153C8) + 0x9F2A) + (var_v1 * 0x64)) = (*(((&func_801153C8) + 0x9F2A) + temp_v0)) & 0xFFEF; temp_a0 = *(((&func_801153C8) + 0x9F38) + temp_v0); temp_v0 = temp_a0 & 0xFFFF; var_v1 = temp_v0; } } while (0);
    }
    while ((temp_a0 & 0xFFFF) != 0xFFFF);
  }
}
