s32 func_8014B854(s32);
unsigned long func_80199EAC(s32, s32);
extern s8 D_801C6BB9;
extern s8 D_801C7068;
void func_8019E734(s32 arg0)
{
  s32 temp_v0;
  s32 var_v1;
  volatile unsigned short pad;
  unsigned char var_v0;
  temp_v0 = func_80199EAC(arg0, arg0 & 0xFFFF);
  if ((!(temp_v0 & 0xFF)) && (D_801C6BB9 > 0))
  {
    D_801C6BB9 = D_801C6BB9 - 1;
    goto block_13;
  }
  var_v0 = temp_v0 & 0xFF;
  if ((temp_v0 & 0xFF) == 2)
  {
    if (D_801C6BB9 < 0x17)
    {
      D_801C6BB9 += 1;
      goto block_13;
    }
    var_v1 = temp_v0 & 0xFF;
    goto block_7;
  }
  block_7:
  if ((var_v0 == 1) && (D_801C7068 > 0))
  {
    var_v0 = D_801C7068 - 1;
    goto block_12;
  }

  if ((temp_v0 & 0xFF) == 3)
  {
    if (var_v0)
    {
      if (temp_v0 || var_v0)
      {
        var_v0 = D_801C7068 + 1;
      }
      else
      {
        var_v0 = D_801C7068 + 1;
      }
    }
    else
    {
      var_v0 = D_801C7068 + 1;
    }
    if (D_801C7068 < 0x17)
    {
      block_12:
      D_801C7068 = var_v0;

      block_13:
      func_8014B854(0x3B);

    }
  }
}

