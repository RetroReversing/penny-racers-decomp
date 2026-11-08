unsigned long long func_80034640(s32);
s32 _n_filterBuffer(void *arg0, unsigned short arg1, void *arg2)
{
  *((s32 *) (((char *) arg2) + 0)) = 0x0B000020;
  *((s32 *) (((char *) arg2) + 4)) = func_80034640(arg0 + 8);
  *((s32 *) (((char *) arg2) + 8)) = (s32) (((*((u8 *) (((char *) arg0) + 0x2F))) << 0x10) | ((*((u16 *) (((char *) arg0) + 2))) | 0x0E000000));
  *((s32 *) (((char *) arg2) + 0xC)) = (s32) (((arg1 >> 8) << 0x18) | (func_80034640(*((s32 *) (((char *) arg0) + 0x28))) & 0xFFFFFF));
  *((s32 *) (((char *) arg0) + 0x2C)) = 0;
  return (s32) (arg2 + 0x10);
}

