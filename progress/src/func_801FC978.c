extern char playerSlots[];
inline static int inline_fn(s32 arg0)
{
  return (arg0 & 0xFFFF) * 0x64;
}

void func_801FC978(unsigned int arg0)
{
  if ((*((unsigned short *) (playerSlots + inline_fn((unsigned short) arg0)))) == 0)
  {
    *((unsigned short *) (playerSlots + inline_fn(arg0))) = 1;
  }
}

