s32 func_8014A4C8();
s32 func_801CA140();
extern char D_8018A277[];
extern u8 D_80190CB2;
inline static int inline_fn(s32 arg0)
{
  return (*((u16 *) (D_8018A277 + arg0))) != 0xFF;
}

void func_8014B048(volatile int arg0)
{
  s32 var_s0;
  s32 var_v1;
  func_801CA140();
  var_s0 = 0;
  __repair_rows:
  {
    if (((*(D_8018A277 + var_s0)) & 0x20) && inline_fn(var_s0))
    {
      var_v1 = 0xF;
      if (D_80190CB2 & 2)
      {
        if (var_s0)
        {
          var_v1 = 0x10;
        }
        else
        {
          var_v1 = 0x10;
        }
      }
      func_8014A4C8(arg0, 0xA5, (s16) ((var_s0 * 0x25) + 0x47), 7, var_v1);
    }
    var_s0 = var_s0 + 1;
  }

  if (var_s0 < 3)
  {
    goto __repair_rows;
  }
}

