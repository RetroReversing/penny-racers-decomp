extern u8 D_80046DB0[];
extern s8 D_80046DB1[];
void nuContPakN64ToJis(u8 *arg0, u8 *arg1, u32 arg2)
{
  u32 i;
  u8 *src = arg0;
  u8 *dst2;
  u8 *dst = arg1;
  u8 c;
  u8 *kp;
  u8 key;
  s32 off;
  for (i = 0; i < arg2; i++)
  {
    c = *src;
    if (c == 0)
    {
      *dst = c;
    }
    else
      if (((u8) (c - 0x1A)) < 0x1A)
    {
      *dst = c + 0x27;
    }
    else
      if (((u8) (c - 0x10)) < 0xA)
    {
      *dst = c + 0x20;
    }
    else
      if (((u8) (c - 0x50)) < 0x2C)
    {
      *dst = c + 0x61;
    }
    else
      if (((u8) (c - 0x7C)) < 0xF)
    {
      *dst = c + 0x3A;
      *(dst2++) = 0xDE;
      dst++;
    }
    else
      if (((u8) (c + 0x75)) < 5)
    {
      *dst = c + 0x3F;
      *dst2 = 0xDE;
    }
    else
      if (((u8) (c + 0x70)) < 5)
    {
      *dst = c + 0x3A;
      *dst2 = 0xDF;
    }
    else
      if (D_80046DB1[0] == 0)
    {
      *dst = 0xF;
    }
    else
    {
      kp = D_80046DB1;
      off = 0;
      key = *kp;
      do
      {
        if (key == c)
        {
 do { break; } while (0);
        }
        kp += 2;
        off += 2;
        key = *kp;
      }
      while (key != 0);
      if (key != 0)
      {
        *dst = D_80046DB0[off];
      }
      else
      {
        *dst = 0xF;
      }
    }
    dst2++;
    dst++;
    src++;
  }

}
