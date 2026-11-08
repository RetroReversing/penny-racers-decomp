inline static void *inline_fn(void *arg0)
{
  return *((void **) (((char *) arg0) + 8));
}

s16 func_80038178(void *arg0)
{
  void *temp_a1;
  if (temp_a1 || arg0)
  {
    temp_a1 = inline_fn(arg0);
    *((void **) (((char *) arg0) + 8)) = (void *) (temp_a1 + 1);
    *((void **) (((char *) arg0) + 8)) = (void *) (temp_a1 + 2);
    return (s16) (((*((u8 *) (((char *) temp_a1) + 0))) << 8) | (*((u8 *) (((char *) temp_a1) + 1))));
  }
  else
  {
    temp_a1 = inline_fn(arg0);
    *((void **) (((char *) arg0) + 8)) = (void *) (temp_a1 + 1);
    *((void **) (((char *) arg0) + 8)) = (void *) (temp_a1 + 2);
    return (s16) (((*((u8 *) (((char *) temp_a1) + 0))) << 8) | (*((u8 *) (((char *) temp_a1) + 1))));
  }
}

