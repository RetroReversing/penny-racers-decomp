void func_80127870(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4)
{
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv0_4;
  f32 temp_fv0_5;
  f32 temp_fv0_6;
  f32 temp_fv1;
  f32 temp_fv1_10;
  f32 temp_fv1_11;
  f32 temp_fv1_12;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  f32 temp_fv1_5;
  f32 temp_fv1_6;
  f32 temp_fv1_7;
  f32 temp_fv1_8;
  f32 temp_fv1_9;
  temp_fv0 = *((f32 *) (((char *) arg1) + 0));
  temp_fv1 = *((f32 *) (((char *) arg0) + 0));
  if (temp_fv1 < temp_fv0)
  {
    temp_fv0_2 = *((f32 *) (((char *) arg2) + 0));
    if (temp_fv0_2 < temp_fv1)
    {
      *((f32 *) (((char *) arg3) + 0)) = temp_fv0_2;
      *((f32 *) (((char *) arg4) + 0)) = (f32) (*((f32 *) (((char *) arg1) + 0)));
    }
    else
    {
      *((f32 *) (((char *) arg3) + 0)) = (f32) (*((f32 *) (((char *) arg0) + 0)));
      temp_fv1_2 = *((f32 *) (((char *) arg2) + 0));
      if ((*((f32 *) (((char *) arg1) + 0))) < temp_fv1_2)
      {
        *((f32 *) (((char *) arg4) + 0)) = temp_fv1_2;
      }
      else
      {
        *((f32 *) (((char *) arg4) + 0)) = (f32) (*((f32 *) (((char *) arg1) + 0)));
      }
    }
  }
  else
  {
    temp_fv1_3 = *((f32 *) (((char *) arg2) + 0));
    if (temp_fv1_3 < temp_fv0)
    {
      *((f32 *) (((char *) arg3) + 0)) = temp_fv1_3;
      goto block_12;
    }
    *((f32 *) (((char *) arg3) + 0)) = (f32) (*((f32 *) (((char *) arg1) + 0)));
    temp_fv1_4 = *((f32 *) (((char *) arg2) + 0));
    if ((*((f32 *) (((char *) arg0) + 0))) < temp_fv1_4)
    {
      if (temp_fv1_7)
      {
        *((f32 *) (((char *) arg4) + 0)) = temp_fv1_4;
      }
      else
      {
        *((f32 *) (((char *) arg4) + 0)) = temp_fv1_4;
      }
    }
    else
    {
      block_12:
      *((f32 *) (((char *) arg4) + 0)) = *((f32 *) (((char *) arg0) + 0));

    }
  }
  temp_fv0_3 = *((f32 *) (((char *) arg1) + 4));
  temp_fv1_5 = *((f32 *) (((char *) arg0) + 4));
  if (temp_fv1_5 < temp_fv0_3)
  {
 do { temp_fv0_4 = *((f32 *) (((char *) arg2) + 4)); } while (0);
    if (temp_fv0_4 < temp_fv1_5)
    {
      *((f32 *) (((char *) arg3) + 4)) = temp_fv0_4;
      *((f32 *) (((char *) arg4) + 4)) = (f32) (*((f32 *) (((char *) arg1) + 4)));
    }
    else
    {
      *((f32 *) (((char *) arg3) + 4)) = (f32) (*((f32 *) (((char *) arg0) + 4)));
      temp_fv1_6 = *((f32 *) (((char *) arg2) + 4));
      if ((*((f32 *) (((char *) arg1) + 4))) < temp_fv1_6)
      {
        *((f32 *) (((char *) arg4) + 4)) = temp_fv1_6;
      }
      else
      {
        *((f32 *) (((char *) arg4) + 4)) = (f32) (*((f32 *) (((char *) arg1) + 4)));
      }
    }
  }
  else
  {
    temp_fv1_7 = *((f32 *) (((char *) arg2) + 4));
    if (temp_fv1_7 < temp_fv0_3)
    {
      *((f32 *) (((char *) arg3) + 4)) = temp_fv1_7;
      goto block_25;
    }
    *((f32 *) (((char *) arg3) + 4)) = (f32) (*((f32 *) (((char *) arg1) + 4)));
    temp_fv1_8 = *((f32 *) (((char *) arg2) + 4));
    if ((*((f32 *) (((char *) arg0) + 4))) < temp_fv1_8)
    {
      *((f32 *) (((char *) arg4) + 4)) = temp_fv1_8;
    }
    else
    {
      block_25:
      *((f32 *) (((char *) arg4) + 4)) = *((f32 *) (((char *) arg0) + 4));

    }
  }
  temp_fv0_5 = *((f32 *) (((char *) arg1) + 8));
  temp_fv1_9 = *((f32 *) (((char *) arg0) + 8));
  if (temp_fv1_9 < temp_fv0_5)
  {
    temp_fv0_6 = *((f32 *) (((char *) arg2) + 8));
    if (temp_fv0_6 < temp_fv1_9)
    {
      *((f32 *) (((char *) arg3) + 8)) = temp_fv0_6;
      *((f32 *) (((char *) arg4) + 8)) = (f32) (*((f32 *) (((char *) arg1) + 8)));
      return;
    }
    *((f32 *) (((char *) arg3) + 8)) = (f32) (*((f32 *) (((char *) arg0) + 8)));
    temp_fv1_10 = *((f32 *) (((char *) arg2) + 8));
    if ((*((f32 *) (((char *) arg1) + 8))) < temp_fv1_10)
    {
      *((f32 *) (((char *) arg4) + 8)) = temp_fv1_10;
      return;
    }
    *((f32 *) (((char *) arg4) + 8)) = (f32) (*((f32 *) (((char *) arg1) + 8)));
    return;
  }
  temp_fv1_11 = *((f32 *) (((char *) arg2) + 8));
  if (temp_fv1_11 < temp_fv0_5)
  {
    *((f32 *) (((char *) arg3) + 8)) = temp_fv1_11;
    goto block_38;
  }
  *((f32 *) (((char *) arg3) + 8)) = (f32) (*((f32 *) (((char *) arg1) + 8)));
  temp_fv1_12 = *((f32 *) (((char *) arg2) + 8));
  if ((*((f32 *) (((char *) arg0) + 8))) < temp_fv1_12)
  {
    *((f32 *) (((char *) arg4) + 8)) = temp_fv1_12;
    return;
  }
  block_38:
  *((f32 *) (((char *) arg4) + 8)) = *((f32 *) (((char *) arg0) + 8));

}
