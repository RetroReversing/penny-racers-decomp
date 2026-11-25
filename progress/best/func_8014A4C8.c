s32 func_801CC150();
s32 func_801CCE7C();
s32 func_801CDDB8();
s32 func_801CE3A0();
extern u8 D_80200300[];
extern char D_80202484[];
inline static s32 inline_fn(s16 arg0)
{
  return (s32) arg0;
}

void func_8014A4C8(s32 *arg0, volatile unsigned int arg1, s16 arg2, s32 arg3, s32 arg4)
{
  int pad;
  s32 sp48;
  void *temp_a0;
  void *temp_t0;
  sp48 = *arg0;
  do
  {
    do
    {
      temp_a0 = (*((s32 *) (D_80202484 + (arg3 * 4)))) + (arg4 * 0x16);
    }
    while (0);
    temp_t0 = (arg3 * 0xC) + D_80200300;
  }
  while (0);
  if (((*((u16 *) (((char *) temp_a0) + 8))) | (*((u16 *) (((char *) temp_a0) + 0xA)))) == 0)
  {
    if (((arg3 < 3) | (arg3 == 0xD)) != 0)
    {
      func_801CC150(&sp48, arg1, arg2, *((s16 *) (((char *) temp_a0) + 0)), (s32) (*((s16 *) (((char *) temp_a0) + 2))), (s32) (*((s16 *) (((char *) temp_a0) + 4))), (s32) (*((s16 *) (((char *) temp_a0) + 6))), (s32) (*((s16 *) (((char *) temp_t0) + 0))), (s32) (*((s16 *) (((char *) temp_t0) + 2))), (s32) (*((u8 *) (((char *) temp_a0) + 0xC))), (s32) (*((u8 *) (((char *) temp_a0) + 0xD))), (s32) (*((s16 *) (((char *) temp_a0) + 0xE))), (s32) (*((s16 *) (((char *) temp_a0) + 0x10))), (s32) (*((s16 *) (((char *) temp_a0) + 0x12))), (s32) (*((s16 *) (((char *) temp_a0) + 0x14))), *((s32 *) (((char *) temp_t0) + 4)), *((s32 *) (((char *) temp_t0) + 8)));
    }
    else
    {
      func_801CCE7C(&sp48, arg1, arg2, *((s16 *) (((char *) temp_a0) + 0)), (s32) (*((s16 *) (((char *) temp_a0) + 2))), (s32) (*((s16 *) (((char *) temp_a0) + 4))), (s32) (*((s16 *) (((char *) temp_a0) + 6))), (s32) (*((s16 *) (((char *) temp_t0) + 0))), (s32) (*((s16 *) (((char *) temp_t0) + 2))), (s32) (*((u8 *) (((char *) temp_a0) + 0xC))), (s32) (*((u8 *) (((char *) temp_a0) + 0xD))), (s32) (*((s16 *) (((char *) temp_a0) + 0xE))), (s32) (*((s16 *) (((char *) temp_a0) + 0x10))), (s32) (*((s16 *) (((char *) temp_a0) + 0x12))), (s32) (*((s16 *) (((char *) temp_a0) + 0x14))), *((s32 *) (((char *) temp_t0) + 4)), *((s32 *) (((char *) temp_t0) + 8)));
    }
  }
  else
    if (arg3 == 0xD)
  {
    func_801CE3A0(&sp48, arg1, arg2, *((u16 *) (((char *) temp_a0) + 8)), (s32) ((s16) (*((u16 *) (((char *) temp_a0) + 0xA)))), (s32) (*((s16 *) (((char *) temp_a0) + 0))), (s32) (*((s16 *) (((char *) temp_a0) + 2))), (s32) (*((s16 *) (((char *) temp_a0) + 4))), (s32) (*((s16 *) (((char *) temp_a0) + 6))), (s32) (*((s16 *) (((char *) temp_t0) + 0))), (s32) (*((s16 *) (((char *) temp_t0) + 2))), *((s32 *) (((char *) temp_t0) + 4)), *((s32 *) (((char *) temp_t0) + 8)), (s32) ((u16) (*((s16 *) (((char *) temp_a0) + 0xE)))), (s32) ((u16) (*((s16 *) (((char *) temp_a0) + 0x10)))), (s32) ((u16) (*((s16 *) (((char *) temp_a0) + 0x12)))), (s32) ((u16) (*((s16 *) (((char *) temp_a0) + 0x14)))));
  }
  else
  {
    func_801CDDB8(&sp48, arg1, arg2, *((u16 *) (((char *) temp_a0) + 8)), (s32) ((s16) (*((u16 *) (((char *) temp_a0) + 0xA)))), (s32) (*((s16 *) (((char *) temp_a0) + 0))), inline_fn(*((s16 *) (((char *) temp_a0) + 2))), (s32) (*((s16 *) (((char *) temp_a0) + 4))), (s32) (*((s16 *) (((char *) temp_a0) + 6))), (s32) (*((s16 *) (((char *) temp_t0) + 0))), (s32) (*((s16 *) (((char *) temp_t0) + 2))), *((s32 *) (((char *) temp_t0) + 4)), *((s32 *) (((char *) temp_t0) + 8)), (s32) ((u16) (*((s16 *) (((char *) temp_a0) + 0xE)))), (s32) ((u16) (*((s16 *) (((char *) temp_a0) + 0x10)))), (s32) ((u16) (*((s16 *) (((char *) temp_a0) + 0x12)))), (s32) ((u16) (*((s16 *) (((char *) temp_a0) + 0x14)))));
  }
  *arg0 = sp48;
}

