extern unsigned char D_8006FB18;
extern char D_8006FB14[];
inline static char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_80224694(void *arg0, f32 arg1)
{
  f32 temp_ft0;
  f32 temp_fv0;
  f32 var_fv0;
  f32 var_fv1;
  do
  {
    if (D_8006FB18 != 0)
    {
      if ((*((const f32 *) (inline_fn(arg0) + 0x748))) > 1200.0f)
      {
        temp_ft0 = *((const f32 *) (((char *) arg0) + ((unsigned char) 0x770)));
        if (temp_ft0 < arg1)
        {
          var_fv1 = 0.4f; var_fv0 = arg1 - temp_ft0;
        }
        else
        {
          do
          {
            if (var_fv1)
            {
              *((f32 *) (inline_fn(arg0) + 0x754)) = (f32) (((*((const f32 *) (((char *) arg0) + 0x770))) - arg1) * (*((s32 *) (((*((const u8 *) (((char *) arg0) + 0x74C))) * 4) + (*((const s32 *) (((char *) arg0) - (-0x238))))))));
            }
            else
            {
              *((f32 *) (inline_fn(arg0) + 0x754)) = (f32) (((*((const f32 *) (((char *) arg0) + 0x770))) - arg1) * (*((s32 *) (((*((const u8 *) (((char *) arg0) + 0x74C))) * 4) + (*((const s32 *) (((char *) arg0) - (-0x238))))))));
            }
          }
          while (0);
 do { var_fv0 = arg1 - (*((const f32 *) (((char *) arg0) + 0x770))); } while (0);
          var_fv1 = 0.5f;
        }
        *((f32 *) (inline_fn(arg0) + 0x770)) = (f32) ((var_fv0 * var_fv1) + (*((const f32 *) (inline_fn(arg0) + 0x770))));
        return;
      }
      temp_fv0 = (*((const f32 *) (((char *) arg0) + 0x770))) * 0.5f;
      *((f32 *) (((char *) arg0) + 0x770)) = temp_fv0;
      if (temp_fv0 < 5.0f)
      {
        *((s8 *) (((char *) arg0) + 0x74D)) = 0;
        *((f32 *) (((char *) arg0) + 0x754)) = 0.0f;
        goto block_8;
      }
    }
    else
    {
      block_8:
      *((f32 *) (((char *) arg0) + 0x770)) = 0.0f;

    }
  }
  while (0);
}
