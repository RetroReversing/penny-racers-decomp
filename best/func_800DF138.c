extern s32 func_801153C8;
void func_800DF138(s32 arg0)
{
  short temp_v0;
 do { temp_v0 = (arg0 & 0xFFFF) * 0x64; } while (0);
  *(((&func_801153C8) + ((short) 0x9F2A)) + temp_v0) = (*(((&func_801153C8) + 0x9F2A) + temp_v0)) & 0xFFEF;
}
