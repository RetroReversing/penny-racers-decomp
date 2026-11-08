s32 func_800381F8();
s32 __alSeqNextDelta(void *arg0, s32 *arg1)
{
  u32 temp_s1;
  temp_s1 = *((u32 *) (((char *) arg0) + 8));
  if (temp_s1 < ((u32) ((*((s32 *) (((char *) arg0) + 0))) + (*((s32 *) (((char *) arg0) + 0x10))))))
  {
    *arg1 = func_800381F8();
    *((u32 *) (((char *) arg0) + 8)) = temp_s1;
    return 1;
  }
  if (arg1)
  {
    return 0;
  }
  else
  {
    return 0;
  }
}

