inline static char *inline_fn(char *arg0, int arg1)
{
  return arg0 + arg1;
}

volatile unsigned long long func_802241E8(void *arg0)
{
  f32 temp_ft1;
  char *__repair_addr;
  if ((*((u8 *) inline_fn((char *) arg0, 0x860))) != 0)
  {
    u8 temp_v1;
    temp_v1 = *((u8 *) inline_fn((char *) arg0, 0x7CC));
    if (((*((u8 *) inline_fn((char *) arg0, 0x878))) != temp_v1) && ((*((u8 *) inline_fn((char *) arg0, 0x8A1))) == 0))
    {
      __repair_addr = (char *) inline_fn(arg0, temp_v1 * 0x10);
      do
      {
        *((f32 *) inline_fn((char *) arg0, 0x874)) = (f32) (*((f32 *) inline_fn((char *) __repair_addr, 0x24C)));
      }
      while (0);
      *((u8 *) inline_fn((char *) arg0, 0x871)) = (u8) (*((u8 *) inline_fn((char *) inline_fn(arg0, (*((u8 *) inline_fn((char *) arg0, 0x7CC))) * 0x10), 0x250)));
    }
    if ((*((u8 *) inline_fn((char *) arg0, 0x871))) != 0)
    {
      if (1)
      {
        *((f32 *) inline_fn((char *) arg0, 0x7B4)) = (f32) ((*((f32 *) inline_fn((char *) arg0, 0x7B4))) * (*((f32 *) inline_fn((char *) arg0, 0x874))));
        do
        {
          *((u8 *) inline_fn((char *) arg0, 0x871)) = (u8) ((*((u8 *) inline_fn((char *) arg0, 0x871))) - 1);
 do { *((f32 *) inline_fn((char *) arg0, 0x7B8)) = (f32) ((*((f32 *) inline_fn((char *) arg0, 0x7B8))) * (*((f32 *) inline_fn((char *) arg0, 0x874)))); } while (0);
          {
            *((f32 *) inline_fn((char *) arg0, 0x7BC)) = (f32) ((*((f32 *) inline_fn((char *) arg0, 0x7BC))) * (*((f32 *) inline_fn((char *) arg0, 0x874))));
            do
            {
              *((f32 *) inline_fn((char *) arg0, 0x7C0)) = (f32) ((*((f32 *) inline_fn((char *) arg0, 0x7C0))) * (*((f32 *) inline_fn((char *) arg0, 0x874))));
            }
            while (0);
            *((f32 *) inline_fn((char *) arg0, 0x7C4)) = (f32) ((*((f32 *) inline_fn((char *) arg0, 0x7C4))) * (*((f32 *) inline_fn((char *) arg0, 0x874))));
          }
        }
        while (0);
      }
      *((f32 *) inline_fn((char *) arg0, 0x7C8)) = (f32) ((*((f32 *) inline_fn((char *) arg0, 0x7C8))) * (*((f32 *) inline_fn((char *) arg0, 0x874))));
    }
  }
  if (arg0 || __repair_addr)
  {
    temp_ft1 = *((f32 *) inline_fn((char *) arg0, 0x770));
  }
  else
  {
    temp_ft1 = *((f32 *) inline_fn((char *) arg0, 0x770));
  }
  if (temp_ft1 > 140.0f)
  {
    *((f32 *) inline_fn((char *) arg0, 0x764)) = (f32) (((temp_ft1 * 0.1f) + 50.0f) + ((temp_ft1 + (-140.0f)) * 0.1f));
    return;
  }
  if (__repair_addr || arg0)
  {
    *((f32 *) inline_fn((char *) arg0, 0x764)) = (f32) (((*((f32 *) inline_fn((char *) arg0, 0x770))) * 0.1f) + 50.0f);
  }
  else
  {
    *((f32 *) inline_fn((char *) arg0, 0x764)) = (f32) (((*((f32 *) inline_fn((char *) arg0, 0x770))) * 0.1f) + 50.0f);
  }
}
