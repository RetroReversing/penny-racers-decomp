/* identical to func_8010A1FC (matched), with its names changed by decompdecomp */
extern unsigned char func_801153C8;
void func_80112130(void **arg0, s32 arg1)
{
  void *temp_a2;
  temp_a2 = *arg0;
  *arg0 = temp_a2 + 8;
  *((s32 *) (((char *) temp_a2) + 0)) = 0xFA000000;
  *((s32 *) (((char *) temp_a2) + 4)) = (s32) ((*(((&func_801153C8) + 0x9F34) + ((arg1 & 0xFFFF) * 0x64))) | 0x14141400);
}

