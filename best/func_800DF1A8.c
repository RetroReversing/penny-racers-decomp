extern short func_801153C8;
void func_800DF1A8(s32 arg0)
{
  s32 temp_v0;
  temp_v0 = (arg0 & 0xFFFF) * 0x64;
  *(((&func_801153C8) + 0x9F2A) - (-temp_v0)) &= 0xFFDF;
}

