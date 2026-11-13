s32 __alSeqNextDelta(s32, s32 *);
s32 func_8002D164(void *, s16 *, s32);
s32 func_80038124(s32);
s32 func_8003812C(s32, s32);
inline static char *inline_fn(void *arg0)
{
  return ((char *) arg0) + 0x84;
}

void func_80031EC8(void *arg0)
{
  volatile short sp10;
  s32 sp20;
  s32 temp_s1;
  s32 temp_v1;
  volatile long long pad;
  temp_s1 = *((s32 *) (((char *) arg0) + 0x18));
  if (((((*((s32 *) (((char *) arg0) + 0x2C))) != 1) | (temp_s1 == 0)) == 0) && ((__alSeqNextDelta(temp_s1, &sp20) << 0x18) != 0))
  {
    if (((*((s32 *) inline_fn(arg0))) != 0) && ((func_80038124(temp_s1) + sp20) >= (*((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x80)))) + 8)))))
    {
      func_8003812C(temp_s1, *((s32 *) (((char *) arg0) + 0x7C)));
      temp_v1 = *((s32 *) (((char *) arg0) + 0x84));
      if (temp_v1 != (-1))
      {
        *((s32 *) inline_fn(arg0)) = (s32) (temp_v1 - 1);
      }
    }
    sp10 = 0;
    func_8002D164(arg0 + 0x48, &sp10, sp20 * (*((s32 *) (((char *) arg0) + 0x24))));
  }
}

