inline static s32 inline_fn(int arg0)
{
  return *((s32 *) arg0);
}

s32 func_80039630(void)
{
  do
  {
    return inline_fn((float) 0xA4500004);
  }
  while (0);
}

