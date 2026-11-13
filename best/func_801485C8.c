extern u8 D_80189B34;
extern u8 D_80189CB6;
extern s32 D_8018A276;
extern s32 D_8018A277;
inline static s32 *inline_fn(s32 arg0)
{
  return (&D_8018A276) + arg0;
}

s32 func_801485C8(void)
{
  s32 var_a0;
  s32 var_v1;
  u8 temp_a1;
  var_a0 = 1;
  if (D_80189B34 == 1)
  {
    *((u8 *) (((char *) (&D_8018A277)) + 0)) = (u8) ((*((u8 *) (((char *) (&D_8018A277)) + 0))) | 0x10);
    *((u8 *) (((char *) (&D_8018A277)) + 1)) = (u8) ((*((u8 *) (((char *) (&D_8018A277)) + 1))) | 0x10);
    *((u8 *) (((char *) (&D_8018A277)) + 2)) = (u8) ((*((u8 *) (((char *) (&D_8018A277)) + 2))) | 0x10);
  }
  else
  {
    __repair_rows: {
      temp_a1 = *((&D_8018A276) + var_a0);
      if ((temp_a1 & 0xF) == D_80189CB6)
      {
        *((&D_8018A276) + var_a0) = temp_a1 | 0x10;
      }
      var_a0 += 1;
    }
if ((var_a0 + 1) <= 4) goto __repair_rows;
    var_a0 = 1;
  }
  var_v1 = 0;
  __repair_rows_: {
    var_v1 += ((*inline_fn(var_a0)) & 0x10) == 0;
    do
    {
      var_a0 += 1;
    }
    while (0);
  }
if (var_a0 < 4) goto __repair_rows_;
  return var_v1;
}

