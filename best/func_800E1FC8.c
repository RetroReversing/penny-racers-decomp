void func_800E1FC8(void *arg0, void *arg1, void *arg2)
{
  f32 sp0;
  f32 sp4;
  f32 sp8;
  sp0 = (*((f32 *) (((char *) arg1) + 0))) - (*((f32 *) (((char *) arg2) + 0)));
  __repair_rows: {
    if (sp8)
    {
      sp4 = (*((f32 *) (((char *) arg1) + 4))) - (*((f32 *) (((char *) arg2) + 4)));
      sp8 = (*((f32 *) (((char *) arg1) + 8))) - (*((f32 *) (((char *) arg2) + 8)));
      *((f32 *) (((char *) arg0) + 0)) = sp0;
    }
    else
    {
      sp4 = (*((f32 *) (((char *) arg1) + 4))) - (*((f32 *) (((char *) arg2) + 4)));
      sp8 = (*((f32 *) (((char *) arg1) + 8))) - (*((f32 *) (((char *) arg2) + 8)));
      *((f32 *) (((char *) arg0) + 0)) = sp0;
    }
  }
if (0) goto __repair_rows;
  *((f32 *) (((char *) arg0) + 4)) = sp4;
  *((f32 *) (((char *) arg0) + 8)) = sp8;
}

