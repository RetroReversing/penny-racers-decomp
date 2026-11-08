extern s32 func_801153C8;
inline static s32 *inline_fn(s32 arg0)
{
  return ((&func_801153C8) + 0x9F2A) + arg0;
}

void func_800DF100(s32 arg0)
{
  s32 temp_v0;
  temp_v0 = (arg0 & 0xFFFF) * 0x64;
  *inline_fn(temp_v0) = (*inline_fn(temp_v0)) | 0x10;
}

