extern char D_8011F32E[];
inline static int inline_fn(s32 arg0)
{
  return (arg0 & 0xFFFF) * 0x64;
}

void func_801FC978(unsigned int arg0)
{
  if (*(unsigned short *)(D_8011F32E + inline_fn(arg0)) == 0)
  {
    *(unsigned short *)(D_8011F32E + inline_fn(arg0)) = 1;
  }
}
