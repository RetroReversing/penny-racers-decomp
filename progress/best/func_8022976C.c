extern u32 D_8022A720;
extern u32 D_8022E620;
inline static int inline_fn(unsigned int arg0)
{
  return arg0 & 0xFFFF;
}

void func_8022976C(s32 arg0, s32 arg1, unsigned short arg2)
{
  u32 *__base_D_8022E620;
  f32 *keys;
  u8 tmp;
  register u32 *__base_D_8022A720;
  register unsigned int i;
  u8 *ids;
  f32 ftmp;
  f32 pivot;
  int j;
  s32 temp;
  temp = (arg0 & 0xFFFF) * 0x18;
  __base_D_8022A720 = &D_8022A720;
  ids = ((arg0 & 0xFFFF) * 6) + ((u8 *) __base_D_8022A720);
  j = arg2 & 0xFFFF;
  pivot = keys[((s32) ((arg1 & 0xFFFF) + (arg2 & 0xFFFF))) >> 1];
  __base_D_8022E620 = &D_8022E620;
  keys = (f32 *) (temp + ((u8 *) __base_D_8022E620));
  i = arg1 & 0xFFFF;
  do
  {
    while (((f32 *) (((arg0 & 0xFFFF) * 0x18) + ((u8 *) __base_D_8022E620)))[i & 0xFFFF] < pivot)
    {
      i += 1;
    }

    while (keys[((s32) ((arg1 & 0xFFFF) + (arg2 & 0xFFFF))) >> 1] < keys[j & 0xFFFF])
    {
      j--;
    }

    if ((i & 0xFFFF) < (j & 0xFFFF))
    {
      tmp = (((arg0 & 0xFFFF) * 6) + ((u8 *) __base_D_8022A720))[i & 0xFFFF];
      (((arg0 & 0xFFFF) * 6) + ((u8 *) __base_D_8022A720))[i & 0xFFFF] = (((arg0 & 0xFFFF) * 6) + ((u8 *) __base_D_8022A720))[j & 0xFFFF];
      do
      {
        (((arg0 & 0xFFFF) * 6) + ((u8 *) __base_D_8022A720))[j & 0xFFFF] = tmp; ftmp = ((f32 *) (((arg0 & 0xFFFF) * 0x18) + ((u8 *) __base_D_8022E620)))[i & 0xFFFF]; keys[j & 0xFFFF] = ftmp;
      }
      while (0);
      ((f32 *) (((arg0 & 0xFFFF) * 0x18) + ((u8 *) __base_D_8022E620)))[0xFFFF & i] = keys[j & 0xFFFF];
      i++;
      j -= 1;
    }
    else
    {
      break;
    }
  }
  while (1);
  if ((arg1 & 0xFFFF) < (inline_fn(i) - 1))
  {
    func_8022976C(arg0 & 0xFFFF, arg1 & 0xFFFF, (i - 1) & 0xFFFF);
  }
  if (((j & 0xFFFF) + 1) < (arg2 & 0xFFFF))
  {
    func_8022976C(arg0 & 0xFFFF, (j + 1) & 0xFFFF, arg2 & 0xFFFF);
  }
}

