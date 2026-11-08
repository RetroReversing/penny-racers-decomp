inline static char *inline_fn(char *arg0)
{
  return arg0 + 0xC;
}

inline static u8 inline_fn2(char *arg0)
{
  return *((u8 *) arg0);
}

void _bnkfPatchWaveTable(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_v0;
  s32 temp_v1;
  s32 var_v0;
  u8 temp_a3;
  if ((*((u8 *) (((char *) arg0) + 9))) == 0)
  {
 do { temp_a3 = inline_fn2(((char *) arg0) + 8); *((u8 *) (((char *) arg0) + 9)) = 1U; *((s32 *) (((char *) arg0) + 0)) = (s32) ((*((s32 *) (((char *) arg0) + 0))) + arg2); } while (0);
    if (temp_a3 == 0)
    {
      temp_v1 = *((s32 *) (((char *) arg0) + 0xC));
      *((s32 *) (((char *) arg0) + 0x10)) = (s32) ((*((s32 *) (((char *) arg0) + 0x10))) + arg1);
      if (temp_v1 != 0)
      {
        var_v0 = temp_v1 + arg1;
        goto block_6;
      }
    }
    else
      if (temp_a3 == 1)
    {
      temp_v0 = *((s32 *) (((char *) arg0) + 0xC));
      var_v0 = temp_v0 + arg1;
      if (temp_v0 != 0)
      {
        block_6:
        *((s32 *) inline_fn((char *) arg0)) = var_v0;

      }
    }
  }
}
