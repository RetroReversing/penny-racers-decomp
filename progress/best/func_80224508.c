void func_80224508(void *arg0)
{
  f32 temp_fv0;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 var_fv1;
  if ((*((u8 *) (((char *) arg0) + 0x8A1))) == 2)
  {
    *((f32 *) (((char *) arg0) + 0x748)) = (f32) (((*((f32 *) (((char *) arg0) + 0x744))) * 0.02f) + (*((f32 *) (((char *) arg0) + 0x748))));
  }
  else
  {
    *((f32 *) (((char *) arg0) + 0x748)) = (f32) (((*((f32 *) (((char *) arg0) + 0x744))) * 0.04f) + (*((f32 *) (((char *) arg0) + 0x748))));
  }
  if (1)
  {
    if ((*((u8 *) (((char *) arg0) + 0x74D))) != 0)
    {
      *((u8 *) (((char *) arg0) + ((char) 0x74D))) -= 1;
      do
      {
        if (temp_fv0)
        {
          temp_fv1 = *((f32 *) (((char *) arg0) + 0x748));
          temp_fv1_2 = (*((f32 *) (((char *) arg0) + 0x748))) - (((*((f32 *) (((char *) arg0) + 0x748))) - ((*((f32 *) (((char *) arg0) + 0x770))) * (*((s32 *) (((*((u8 *) (((char *) arg0) + 0x74C))) * 4) + (*((s32 *) (((char *) arg0) + 0x238)))))))) * 0.9f);
          *((f32 *) (((char *) arg0) + 0x748)) = temp_fv1_2;
        }
        else
        {
          temp_fv1 = *((f32 *) (((char *) arg0) + 0x748));
          temp_fv1_2 = (*((f32 *) (((char *) arg0) + 0x748))) - (((*((f32 *) (((char *) arg0) + 0x748))) - ((*((f32 *) (((char *) arg0) + 0x770))) * (*((s32 *) (((*((u8 *) (((char *) arg0) + 0x74C))) * 4) + (*((s32 *) (((char *) arg0) + 0x238)))))))) * 0.9f);
          *((f32 *) (((char *) arg0) + 0x748)) = temp_fv1_2;
        }
      }
      while (0);
      *((f32 *) (((char *) arg0) + 0x770)) = (f32) (temp_fv1_2 / (*((s32 *) (((*((u8 *) (((char *) arg0) + 0x74C))) * 4) + (*((s32 *) (((char *) arg0) + 0x238)))))));
    }
    temp_fv1_3 = *((f32 *) (((char *) arg0) + 0x754));
  }
  if (temp_fv1_3 > 0.0f)
  {
    if (temp_fv1_3)
    {
      temp_fv0 = temp_fv1_3 * 0.8f;
      *((f32 *) (((char *) arg0) + 0x754)) = temp_fv0;
      *((f32 *) (((char *) arg0) + 0x748)) = (f32) ((temp_fv0 * 0.5f) + (*((f32 *) (((char *) arg0) + 0x748))));
    }
    else
    {
      temp_fv0 = temp_fv1_3 * 0.8f;
      *((f32 *) (((char *) arg0) + 0x754)) = temp_fv0;
      *((f32 *) (((char *) arg0) + 0x748)) = (f32) ((temp_fv0 * 0.5f) + (*((f32 *) (((char *) arg0) + 0x748))));
    }
    if ((*((f32 *) (((char *) arg0) + 0x754))) < 50.0f)
    {
      *((f32 *) (((char *) arg0) + 0x754)) = 0.0f;
    }
  }
  var_fv1 = 7000.0f;
  if (((*((f32 *) (((char *) arg0) + 0x748))) > 7000.0f) || ((var_fv1 = 1000.0f, (*((f32 *) (((char *) arg0) + 0x748))) < 1000.0f)))
  {
    if (temp_fv1_3)
    {
      *((f32 *) (((char *) arg0) + 0x748)) = var_fv1;
    }
    else
    {
      *((f32 *) (((char *) arg0) + 0x748)) = var_fv1;
    }
  }
}

