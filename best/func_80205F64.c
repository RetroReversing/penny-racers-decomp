extern char D_8021F048[];
inline static char *inline_fn(s32 arg0)
{
  return ((arg0 & 0xFF) * 0xE) + D_8021F048;
}

void func_80205F64(s32 arg0)
{
  s32 var_a1;
  var_a1 = 0;
  do
  {
    *(inline_fn(arg0) + (var_a1 & 0xFF)) = 0;
    var_a1 += 1;
  }
  while (((u32) (var_a1 & 0xFF)) < 0xEU);
}

