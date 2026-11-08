/* Partial candidate from function #273527 in project #72; rechecked locally. */
s32 func_800403E0(void *arg0);
s32 func_800404A4(void *arg0, u16 *arg1, s32 arg2, s32 arg3);
s32 __osPfsDeclearPage(u8 *arg0, u16 *arg1, s32 arg2, s32 *arg3, u8 arg4, s32 *arg5, s32 *arg6);
static inline int inline_fn(s32 arg0, int arg1)
{
  return arg0 & arg1;
}

s32 osPfsAllocateFile(void *arg0, u16 arg1, s32 arg2, u8 *arg3, u8 *arg4, s32 arg5, s32 *arg6)
{
  u8 *p = arg0;
  s32 ret = 5;
  s32 base;
  s32 limit;
  s32 remain;
  s32 i;
  s32 cnt;
  s32 idx;
  s32 t;
  s32 n;
  s32 a;
  s32 b;
  s32 c;
  s32 scratch[1];
  u8 buf[0x200];
  u8 temp[0x40];
  u16 list[128];
  u8 pair[2];
  s32 size;
  if ((!arg1) || (!arg2))
  {
    goto fail;
  }
  base = *((s32 *) arg6);
  if (base >= 0)
  {
    limit = (base + 0xFF) >> 8;
  }
  else
  {
    limit = (base + 0x1FE) >> 8;
  }
  if (inline_fn(*((s32 *) p), 1) == 0)
  {
    goto fail;
  }
  if (func_800403E0(p) == 2)
  {
    return 2;
  }
  ret = osPfsFindFile(p, arg1, arg2, arg3, arg4, arg5, arg6);
  if (ret && (ret != 5))
  {
    return ret;
  }
  if ((*arg6) != (-1))
  {
    return 9;
  }
  osPfsFreeBlocks(p, &size);
  if (size < base)
  {
    return 7;
  }
  if (limit == 0)
  {
    goto fail;
  }
  ret = osPfsFindFile(p, 0, 0, 0, 0, arg5, arg6);
  if (ret && (ret != 5))
  {
    return ret;
  }
  if ((*arg6) == (-1))
  {
    return 8;
  }
  remain = limit;
  cnt = 0;
  idx = 0;
  p[0x267] = 0;
  if (p[0x64])
  {
    i = 0;
    do
    {
      ret = func_800404A4(p, (u16 *) temp, 0, inline_fn(i, 255));
      if (ret)
      {
        goto done;
      }
      a = __osPfsDeclearPage(temp, list, remain, &base, inline_fn(i, 255), &b, &c);
      if (a)
      {
        goto done;
      }
      if (base != (-1))
      {
        if (cnt == 0)
        {
          *((u16 *) (p + 0x26e)) = (i << 8) | inline_fn(base, 255);
        }
        else
        {
          pair[0] = i;
          pair[1] = base;
          ret = func_800404A4(p, (u16 *) pair, 1, p[0x267]);
          if (ret)
          {
            return ret;
          }
        }
        for (idx = 0; idx < 128; idx++)
        {
          ((u16 *) (buf + 0x100))[idx] = list[idx];
        }

        cnt++;
        idx = c;
        p[0x267] = i;
        if (b < remain)
        {
          remain -= b;
        }
        else
        {
          remain = 0;
        }
      }
      i++;
    }
    while (inline_fn(i, 255) < p[0x64]);
  }
  if (remain > 0)
  {
    return 3;
  }
  if (base == (-1))
  {
    return 3;
  }
  pair[0] = idx;
  pair[1] = base;
  ret = func_800404A4(p, (u16 *) pair, 1, p[0x267]);
  if (ret)
  {
    return ret;
  }
  for (i = 0; i < 16; i++)
  {
    buf[i] = arg3[i];
  }

  for (i = 0; i < 4; i++)
  {
    temp[i] = arg4[i];
  }

  return func_8003F980(*((s32 *) (p + 4)), *((s32 *) (p + 8)), inline_fn((*((s32 *) (p + 0x5c))) + (*arg6), 65535), buf, 0);
  fail:
  return 5;

  done:
  return ret;

}

