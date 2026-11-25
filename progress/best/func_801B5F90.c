s32 func_8014A4C8();
s32 func_801CA140();
s32 func_801CA468();
s32 func_801CABF4();
s32 func_8020557C();
extern char D_8011F2F0[];
extern char D_8011F2FC[];
extern char D_8011F32E[];
extern char D_801C57D0[];
extern char D_801C57E8[];
extern char D_801C57FC[];
extern char D_801C5810[];
extern char D_801C5824[];
extern char D_801CF4C8[];
extern char D_801D4390[];
inline static char inline_fn(s32 arg0)
{
  return *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
}

inline static int inline_fn2(char *arg0, int arg1)
{
  return func_8020557C(arg0, 0xA) & arg1;
}

void func_801B5F90(s32 arg0, s32 arg1)
{
  s32 var_a2;
  s32 temp_s0;
  s32 var_a1;
  u16 temp_v1;
    s32 join_arg;
  do
  {
    temp_v1 = inline_fn(arg1);
  }
  while (0);
  switch (temp_v1)
  {
    case 0:

    case 4:

    case 5:
      break;

    case 1:
      func_801CA140(arg0);
      func_801CA468(arg0, 0xFFU);
      func_801CABF4(arg0, func_8020557C(D_801C5810, 0xA) & 0xFFFF, 0x64, 0xA, D_801D4390, D_801C5810, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
      join_arg = arg0;
      var_a2 = 0x74;
      var_a1 = func_8020557C(D_801C5824, 0xA) & 0xFFFF;
      goto block_5;

    case 2:
      func_801CA140(arg0);
      func_801CA468(arg0, 0xFFU);
      func_801CABF4(arg0, inline_fn2(D_801C57D0, 0xFFFF), 0x54, 0xA, D_801D4390, D_801C57D0, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
      func_801CABF4(arg0, func_8020557C(D_801C5810, 0xA) & 0xFFFF, 0x64, 0xA, D_801D4390, D_801C5810, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
      join_arg = arg0;
      var_a1 = func_8020557C(D_801C5824, 0xA) & 0xFFFF;
      var_a2 = 0x74;
      block_5:
    func_801CABF4(join_arg, var_a1, var_a2, 0xA);

      temp_s0 = (arg1 & 0xFFFF) * 0x64;
      do
    {
      func_801CA468(arg0, *(D_8011F2FC + temp_s0));
    }
    while (0);
      func_8014A4C8(arg0, 0x4B, *(D_8011F2F0 + temp_s0), 0xD, 0x10);
      func_8014A4C8(arg0, 0xE1, *(D_8011F2F0 + temp_s0), 0xD, 0x11);
      break;

    case 3:
      do
    {
      do
      {
        do
        {
          func_801CA140(arg0);
          func_801CA468(arg0, 0xFFU);
          func_801CABF4(arg0, func_8020557C(D_801C57E8, 0xA) & 0xFFFF, 0x64, 0xA, D_801D4390, D_801C57E8, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        }
        while (0);
      }
      while (0);
    }
    while (0);
      func_801CABF4(arg0, func_8020557C(D_801C57FC, 0xA) & 0xFFFF, 0x74, 0xA, D_801D4390, D_801C57FC, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
      func_801CABF4(arg0, func_8020557C(D_801C5810, 0xA) & 0xFFFF, 0x84, 0xA, D_801D4390, D_801C5810, 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
      join_arg = arg0;
      var_a1 = func_8020557C(D_801C5824, 0xA) & 0xFFFF;
      var_a2 = 0x94;
      goto block_5;

  }

}

