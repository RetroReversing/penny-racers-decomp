inline static u8 inline_fn(u8 arg0)
{
  return arg0;
}

s32 func_800381A8(void *arg0)
{
  void *temp_a1;
  temp_a1 = *((void **) (((char *) arg0) + 8));
  *((void **) (((char *) arg0) + 8)) = (void *) (temp_a1 + 1);
  *((void **) (((char *) arg0) + 8)) = (void *) (temp_a1 + 2);
  *((void **) (((char *) arg0) + 8)) = (void *) (temp_a1 + 3);
  *((void **) (((char *) arg0) + 8)) = (void *) (temp_a1 + 4);
  return ((((*((u8 *) (((char *) temp_a1) + 0))) << 0x18) | ((*((u8 *) (((char *) temp_a1) + 1))) << 0x10)) | ((*((u8 *) (((char *) temp_a1) + 2))) << 8)) | inline_fn(*((u8 *) (((char *) temp_a1) + 3)));
}

