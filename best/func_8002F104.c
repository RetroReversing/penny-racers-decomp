inline static int inline_fn(s32 arg0, int arg1)
{
  return ((arg0 - arg1) & 0xFFF) << 0xC;
}

void *func_8002F104(void *arg0, void *arg1, s32 arg2, s32 arg3, u16 arg4, s32 arg5, s32 arg6)
{
  s32 temp_s0;
  s32 temp_v0;
  s32 var_t0;
  void *temp_a0;
  void *temp_a2;
  void *var_s1;
  var_s1 = arg0;
  if (arg3 > 0)
  {
    temp_v0 = (*((s32 (**)(s32, s32, s32)) (((char *) arg1) + 0x28)))(*((s32 *) (((char *) arg1) + 0x3C)), arg3, *((s32 *) (((char *) arg1) + 0x2C)));
    var_t0 = temp_v0 & 7;
    do
    {
      do
      {
        do
        {
          temp_s0 = arg3 + var_t0;
        }
        while (0);
      }
      while (0);
    }
    while (0);
    temp_a2 = var_s1;
    do
    {
      if (temp_s0)
      {
        var_s1 += 8;
      }
      else
      {
        var_s1 += 8;
      }
    }
    while (0);
    *((s32 *) (((char *) temp_a2) + 0)) = (s32) (inline_fn(temp_s0, (temp_s0 & 7) - 8) | ((unsigned short) ((arg5 & 0xFFF) | 0x04000000)));
    *((s32 *) (((char *) temp_a2) + 4)) = (s32) (temp_v0 - var_t0);
  }
  else
  {
    var_t0 = 0;
  }
  temp_a0 = var_s1;
  if (arg6 & 2)
  {
    var_s1 += 8;
    *((s32 *) (((char *) temp_a0) + 0)) = 0x0F000000;
    *((s32 *) (((char *) temp_a0) + 4)) = (s32) ((*((s32 *) (((char *) arg1) + 0x10))) & 0x1FFFFFFF);
  }
  *((s32 *) (((char *) var_s1) + 4)) = (s32) ((((arg6 << 0x1C) | (((arg2 * 2) & 0xFFF) << 0x10)) | (var_t0 << 0xC)) | (arg4 & 0xFFF));
  *((s32 *) (((char *) var_s1) + 0)) = (s32) (((*((s32 *) (((char *) arg1) + 0xC))) & 0xFFFFFF) | 0xffffff);
  *((s32 *) (((char *) arg1) + 0x38)) = 0;
  return var_s1 + 8;
}

