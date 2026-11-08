s32 guMtxF2L(s32 *, long long);
s32 guMtxIdentF(s32 *);
void guTranslate(s32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
  s32 sp10;
  f32 sp40;
  f32 sp44;
  f32 sp48;
  guMtxIdentF(&sp10);
  sp40 = arg1;
  sp44 = arg2;
  sp48 = arg3;
  guMtxF2L(&sp10, arg0);
}

