s32 func_8013AE60(s32);
extern s32 func_801153C8;
inline static s32 *inline_fn()
{
  return &func_801153C8;
}

void func_8010F0B8(s32 arg0)
{
  s32 temp_s0;
  s32 temp_v1;
  u16 temp_a0;
  temp_s0 = arg0 & 0xFFFF;
  func_8013AE60(temp_s0);
  temp_v1 = temp_s0 * 0x64;
  temp_a0 = *(((&func_801153C8) + 0x9F66) + temp_v1);
  *((inline_fn() + 0x9F66) + temp_v1) = temp_a0 + 7;
  if (((u16) (*(((&func_801153C8) + 0x9F66) + temp_v1))) >= 0x100U)
  {
    *(((&func_801153C8) + 0x9F66) + temp_v1) = temp_a0 - 0xF8;
  }
}

