extern u8 D_80189B34;
extern u8 D_80189CB6;
extern s32 D_8018A276;
extern s32 D_8018A277;
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
    do
    {
      temp_a1 = *((&D_8018A276) + var_a0);
      if ((temp_a1 & 0xF) == D_80189CB6)
      {
        *((&D_8018A276) + var_a0) = temp_a1 | 0x10;
      }
      var_a0 += 1;
    }
    while ((var_a0 + 1) <= 4);
    var_a0 = 1;
  }
  var_v1 = 0;
  do
  {
    var_v1 += ((*((&D_8018A276) + var_a0)) & 0x10) == 0;
    do
    {
      var_a0 += 1;
    }
    while (0);
  }
  while (var_a0 < 4);
  return var_v1;
}

