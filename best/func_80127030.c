void func_80127030(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6)
{
  f32 sp4;
  f32 sp8;
  f32 sp0;
  volatile int pad;
  sp0 = (arg2 * arg6) - (arg5 * arg3);
  ;
  sp8 = (arg1 * arg5) - (arg4 * arg2);
  *((f32 *) (((char *) arg0) + 0)) = sp0;
  *((f32 *) (((char *) arg0) + 4)) = (arg3 * arg4) - (arg6 * arg1);
  *((f32 *) (((char *) arg0) + 8)) = sp8;
}

