void *__n_allocParam();
s32 _n_timeToSamples(s32);
s32 func_8002E6E4(void *, s32, void *);
extern void *D_80046DF4;
long func_80030540(void *arg0, s32 arg1, f32 arg2, s16 arg3, u8 arg4, u8 arg5, s32 arg6)
{
  void *temp_v0;
  if ((*((void **) (((char *) arg0) + 8))) != NULL)
  {
    temp_v0 = __n_allocParam();
    if (temp_v0 != NULL)
    {
      *((s32 *) (((char *) temp_v0) + 0)) = 0;
      *((s16 *) (((char *) temp_v0) + 8)) = 0xD;
      *((s32 *) (((char *) temp_v0) + 4)) = (s32) ((*((s32 *) (((char *) D_80046DF4) + 0x28))) + (*((s32 *) (((char *) (*((void **) (((char *) arg0) + 8)))) + 0x88))));
      *((u8 *) (((char *) temp_v0) + 0x12)) = arg4;
      *((s16 *) (((char *) temp_v0) + 0x10)) = arg3;
      *((u8 *) (((char *) temp_v0) + 0x13)) = arg5;
      *((f32 *) (((char *) temp_v0) + 0xC)) = arg2;
      *((u16 *) (((char *) temp_v0) + 0xA)) = (u16) (*((u16 *) (((char *) arg0) + 0x1A)));
      *((s32 *) (((char *) temp_v0) + 0x14)) = _n_timeToSamples(arg6);
      *((s32 *) (((char *) temp_v0) + 0x18)) = arg1;
      func_8002E6E4(*((void **) (((char *) arg0) + 8)), 3, temp_v0);
    }
  }
}

