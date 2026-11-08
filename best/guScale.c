s32 guMtxF2L(f32 *, s32);
s32 guMtxIdentF(f32 *);
void guScale(volatile unsigned char arg0, f32 arg1, f32 arg2, f32 arg3)
{
  f32 sp10;
  f32 sp24;
  f32 sp38;
  f32 sp4C;
  if (arg2)
  {
    guMtxIdentF(&sp10);
    sp10 = arg1;
    sp24 = arg2;
    sp38 = arg3;
    sp4C = 1.0f;
    guMtxF2L(&sp10, arg0);
  }
  else
  {
    guMtxIdentF(&sp10);
    sp10 = arg1;
    sp24 = arg2;
    sp38 = arg3;
    sp4C = 1.0f;
    guMtxF2L(&sp10, arg0);
  }
}

