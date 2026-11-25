extern char D_801D5490[];
void func_801CA4DC(s32 arg0, u8 *arg1, s32 arg2)
{
  u8 __repair_frame[8];
  s32 temp_a2;
  s32 var_a3;
  u8 *var_v1;
  temp_a2 = arg2 & 0xFFFF;
  do {
      var_a3 = 0;
  } while (0);
  if (temp_a2 > 0)
  {
    var_v1 = arg1;
    __repair_rows:
    {
      *var_v1 = *(D_801D5490 + (*((s32 *) (arg0 + var_a3))));
      do
      {
        if (arg0 || var_v1)
        {
          var_a3 += 1;
        }
        else
        {
          var_a3 += 1;
        }
      }
      while (0);
      var_v1 = (void *) arg1; var_v1 = (void *) (((char *) var_v1) + ((s32) var_a3));
    }

    if (var_a3 < temp_a2)
    {
      goto __repair_rows;
    }
  }
}

