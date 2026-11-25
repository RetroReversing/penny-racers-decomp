f32 func_80221230();
void func_80224410(void *arg0)
{
  int temp_v0;
  f32 temp_fv1;
  do
  {
    do
    {
      if (((*((s32 *) (((char *) arg0) + 0x890))) != 0) && ((*((s32 *) (((char *) arg0) + 0x894))) == 0))
      {
        *((f32 *) (((char *) ((unsigned short) arg0)) + 0x77C)) = func_80221230(arg0, *((u8 *) (((char *) arg0) + 0x74C)), *((s32 *) (((char *) arg0) + 0x770)));
        if (((*((u8 *) (((char *) arg0) + 0x860))) == 0) && ((*((u8 *) (((char *) arg0) + 0x8A1))) != 3))
        {
          *((f32 *) (((char *) arg0) + 0x77C)) = 2000.0f;
        }
      }
      else
      {
        *((f32 *) (((char *) arg0) + 0x748)) = (f32) ((*((f32 *) (((char *) arg0) + 0x748))) * 0.9998f);
        do
        {
          *((f32 *) (0x77C + ((char *) arg0))) = -500.0f;
        }
        while (0);
      }
 do { temp_fv1 = (*((f32 *) (((char *) arg0) + 0x77C))) - (*((f32 *) (((char *) arg0) + 0x780))); } while (0);
      *((volatile f32 *) (((char *) arg0) + 0x744)) = temp_fv1; temp_v0 = *((volatile u8 *) (((char *) arg0) + 0x74C));
    }
    while (0);
    if (((((temp_v0 == 0) | (temp_v0 == 5)) != 0) && ((*((s32 *) (((char *) arg0) + 0x890))) != 0)) && (((*((f32 *) (((char *) arg0) + 0x77C))) - (*((f32 *) (((char *) arg0) + 0x780)))) < 400.0f))
    {
      *((f32 *) (((char *) arg0) + 0x744)) = 400.0f;
    }
  }
  while (0);
}
