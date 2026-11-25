inline static u8 *inline_fn(void *arg0, unsigned char arg1)
{
  return (u8 *) (((char *) arg0) + arg1);
}

s32 func_80223FBC(void *arg0)
{
  char var_v0;
  var_v0 = 0;
  if (((u32) (((*inline_fn(arg0, 0x87B)) + 6) & 0xFF)) >= 0xDU)
  {
    var_v0 = 0x3F;
    if (((s8) (*inline_fn(arg0, 0x87B))) < 0x40)
    {
      var_v0 = -0x3FU;
      if (((s8) (*inline_fn(arg0, (unsigned char) 0x87B))) >= (-0x3F))
      {
        var_v0 = *((u8 *) (((char *) arg0) + 0x87B));
      }
    }
  }
  return (s32) (((f32) (((s8) var_v0) + 0x3F)) * 0.25f);
}

