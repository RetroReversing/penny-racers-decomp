u8 func_80038164();
s32 func_800381F8();
inline static int inline_fn(s32 arg0, s32 arg1)
{
  return (arg0 != 0xC0) & (arg1 != 0xD0);
}

void func_80037D48(void *arg0, void *arg1)
{
  s32 temp_v0;
  s32 temp_v0_4;
  long long temp_v1;
  u8 temp_v0_2;
  u8 temp_v0_3;
  temp_v0 = func_800381F8();
  *((s32 *) (((char *) arg0) + 0xC)) += temp_v0;
  temp_v0_2 = func_80038164(arg0);
  if ((temp_v0_2 & 0xFF) == 0xFF)
  {
    temp_v0_3 = func_80038164(arg0);
    temp_v1 = temp_v0_3 & 0xFF;
    if (temp_v1 == 0x51)
    {
      *((s16 *) (((char *) arg1) + 0)) = 3;
      *((s32 *) (((char *) arg1) + 4)) = temp_v0;
      *((u8 *) (((char *) arg1) + 8)) = temp_v0_2;
      *((u8 *) (((char *) arg1) + 9)) = temp_v0_3;
      *((u8 *) (((char *) arg1) + 0xA)) = func_80038164(arg0);
      *((u8 *) (((char *) arg1) + 0xB)) = func_80038164(arg0);
      *((u8 *) (((char *) arg1) + 0xC)) = func_80038164(arg0);
      *((u8 *) (((char *) arg1) + 0xD)) = func_80038164(arg0);
      goto block_7;
    }
    if (temp_v1 != 0x2F)
    {
      *((u16 *) (((char *) arg0) + 0x1A)) = 0U;
      return;
    }
    *((s16 *) (((char *) arg1) + 0)) = 4;
    *((s32 *) (((char *) arg1) + 4)) = temp_v0;
    *((u8 *) (((char *) arg1) + 8)) = temp_v0_2;
    *((u8 *) (((char *) arg1) + 9)) = temp_v0_3;
    *((u8 *) (((char *) arg1) + 0xA)) = func_80038164(arg0);
    block_7:
    *((u16 *) (((char *) arg0) + 0x1A)) = 0U;

    return;
  }
  *((s16 *) (((char *) arg1) + 0)) = 1;
  *((s32 *) (((char *) arg1) + 4)) = temp_v0;
  if (temp_v0_2 & 0x80)
  {
    *((u8 *) (((char *) arg1) + 8)) = temp_v0_2;
    *((u8 *) (((char *) arg1) + 9)) = func_80038164(arg0);
    *((u16 *) (((char *) arg0) + 0x1A)) = (u16) (temp_v0_2 & 0xFF);
  }
  else
  {
    *((u8 *) (((char *) arg1) + 9)) = temp_v0_2;
    *((u8 *) (((char *) arg1) + 8)) = (u8) (*((u16 *) (((char *) arg0) + 0x1A)));
  }
  temp_v0_4 = (*((u8 *) (((char *) arg1) + 8))) & 0xF0;
  if (!inline_fn(temp_v0_4, temp_v0_4))
  {
    *((u8 *) (((char *) arg1) + 0xA)) = 0U;
    return;
  }
  *((u8 *) (((char *) arg1) + 0xA)) = func_80038164(arg0);
}

