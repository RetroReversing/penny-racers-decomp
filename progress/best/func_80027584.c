s32 func_80027D00(s32);
s32 func_8002C190(s32 *);
s16 func_8002C1D0(void *);
s32 alSeqpSetVol(void *, s16);
s32 alSeqpStop(void *);
extern s32 D_8006FB38;
extern s32 D_8006FCB4;
extern s32 D_8006FCB8;
extern s32 D_8006FCBA;
void func_80027584(void)
{
  s32 *__base_D_8006FCB8;
  s32 *var_s4;
  s32 *var_s2;
  s32 var_s1;
  s32 var_s3;
  void *temp_s0;
  var_s3 = 0;
  var_s1 = 0;
  var_s4 = &D_8006FB38;
  var_s2 = (void *) (&D_8006FB38); var_s2 = (void *) (((char *) var_s2) + ((s32) 0x17C));
  do
  {
    if (((*var_s2) & 2) && (func_8002C190(var_s4) == 0))
    {
      __repair_rows:
      {
        func_80027D00(var_s3);
      }

      if (0)
      {
        goto __repair_rows;
      }
      *var_s2 &= ~2;
    }
    if ((*var_s2) & 1)
    {
      __base_D_8006FCB8 = &D_8006FCB8;
      temp_s0 = var_s1 + (&D_8006FB38);
      if ((*(__base_D_8006FCB8 + var_s1)) == 0)
      {
        alSeqpSetVol(temp_s0, 0);
        alSeqpStop(temp_s0);
        *((&D_8006FCB4) + var_s1) = (*((&D_8006FCB4) + var_s1)) & (~1);
        do
        {
          alSeqpSetVol(temp_s0, 0x7FFF);
        }
        while (0);
        var_s2 += 97;
      }
      else
      {
        do
        {
          alSeqpSetVol(temp_s0, (s16) (func_8002C1D0(temp_s0) - (*((&D_8006FCBA) + var_s1))));
        }
        while (0);
        if (temp_s0)
        {
          *((s16 *) (((char *) temp_s0) + 0x180)) = (s16) ((*(__base_D_8006FCB8 + var_s1)) - 1);
          goto block_8;
        }
        else
        {
          *((s16 *) (((char *) temp_s0) + 0x180)) = (s16) ((*(__base_D_8006FCB8 + var_s1)) - 1);
          goto block_8;
        }
      }
    }
    else
    {
      block_8:
      var_s2 += 97;

    }
    var_s1 += 0x184;
    do
    {
      do
      {
        do
        {
          var_s3 += 1;
        }
        while (0);
      }
      while (0);
    }
    while (0);
    var_s4 += 97;
  }
  while (var_s3 < 2);
}

