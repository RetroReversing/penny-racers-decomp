inline static int __repair_inline(int a, int b)
{
  return a < b;
}

volatile char func_8014A4C8(int a, int b, int c, int d, int e);
void func_801CA140(int a);
void func_801CA468(int arg0, int a);
void func_801CA494(int a, int b, int c, int d, int e);
extern u8 D_8011F330[];
extern u8 D_80190C98;
extern u8 D_8021F028;
extern u8 D_8021F029;
extern u8 D_8021F02A;
inline static int inline_fn(int arg0, int arg1)
{
  return arg0 * arg1;
}

void func_80214FD8(int arg0, int arg1)
{
  int __repair_literal;
  int __repair_constant = 0x7F;
  u8 sp18[4];
  int var_a1;
  u32 var_a1_2;
  int var_s0;
  int __repair_phase_var_s0;
  int var_s0_4;
  int var_s2;
  u16 temp_v1;
  do
  {
    temp_v1 = *((u16 *) (D_8011F330 + inline_fn(arg1 & 0xFFFF, 0x64)));
    switch (temp_v1)
    {
      case 0:
        *((u16 *) (D_8011F330 + ((((unsigned short) arg1) & 0xFFFF) * 0x64))) = 1;
        return;

      case 1:
        if (arg1)
      {
        func_801CA140(arg0);
        func_801CA494(arg0, 0, 0, 0, 0xFF);
        func_8014A4C8(arg0, 0x48, 0xD, 0xB, 0x54);
        func_801CA468(arg0, arg0);
        func_8014A4C8(arg0, 0x5A, 0xF, 0xC, 1);
        func_8014A4C8(arg0, 0x48, 0x4A, 0xC, 0);
        func_8014A4C8(arg0, 0x48, 0x7B, 0xC, 0);
        func_8014A4C8(arg0, 0xFA, 0x48, 0xC, 7);
        func_8014A4C8(arg0, 0xFA, 0x79, 0xC, 7);
        func_8014A4C8(arg0, 0x32, 0x48, 0xC, 8);
        func_8014A4C8(arg0, 0x32, 0x79, 0xC, 8);
        var_s0 = 0xFF;
        var_s2 = __repair_constant;
      }
      else
      {
        func_801CA140(arg0);
        func_801CA494(arg0, 0, 0, 0, 0xFF);
        func_8014A4C8(arg0, 0x48, 0xD, 0xB, 0x54);
        func_801CA468(arg0, arg0);
        func_8014A4C8(arg0, 0x5A, 0xF, 0xC, 1);
        func_8014A4C8(arg0, 0x48, 0x4A, 0xC, 0);
        func_8014A4C8(arg0, 0x48, 0x7B, 0xC, 0);
        func_8014A4C8(arg0, 0xFA, 0x48, 0xC, 7);
        func_8014A4C8(arg0, 0xFA, 0x79, 0xC, 7);
        func_8014A4C8(arg0, 0x32, 0x48, 0xC, 8);
        func_8014A4C8(arg0, 0x32, 0x79, 0xC, 8);
        var_s0 = 0xFF;
        var_s2 = __repair_constant;
      }
        if (D_8021F02A)
      {
        var_s0 = __repair_constant; var_s2 = 0xFF;
      }
        func_801CA494(arg0, __repair_constant & 0xFFFF, __repair_constant & 0xFFFF, __repair_constant & 0xFFFF, 0xFF);
        func_8014A4C8(arg0, 0x4F, 0xAC, 0xC, 3);
        func_801CA494(arg0, var_s2 & 0xFFFF, var_s2 & 0xFFFF, var_s2 & 0xFFFF, 0xFF);
        func_8014A4C8(arg0, 0xA2, 0xAC, 0xC, 2);
        __repair_phase_var_s0 = 0;
        __repair_rows:
      {
        sp18[__repair_phase_var_s0] = __repair_constant; __repair_phase_var_s0 += 1;
      }

        if (__repair_inline(__repair_phase_var_s0, 4))
      {
        goto __repair_rows;
      }
        sp18[D_80190C98] = 0xFF;
        func_801CA494(arg0, sp18[0], sp18[0], sp18[0], 0xFF);
        func_8014A4C8(arg0, 0x72, 0x36, 0xC, 4);
        func_801CA494(arg0, sp18[1], sp18[1], sp18[1], 0xFF);
        func_8014A4C8(arg0, 0x72, 0x67, 0xC, 5);
        func_801CA494(arg0, sp18[2], sp18[2], sp18[2], 0xFF);
        func_8014A4C8(arg0, 0x74, 0x99, 0xC, 6);
        func_801CA494(arg0, sp18[3], sp18[3], sp18[3], 0xFF);
        func_8014A4C8(arg0, 0x81, 0xCC, 0xC, 9);
        func_801CA494(arg0, 0, 0, 0, 0x80);
        var_s0 = 0x15 - D_8021F028;
        var_a1 = inline_fn(var_s0, 8);
        if (var_s0 != 0)
      {
        __repair_rows_:
        {
          func_8014A4C8(arg0, (s16) (0xF4 - var_a1), 0x4D, 0xB, 0x55);
          var_s0 -= 1; var_a1 = inline_fn(var_s0, 8);
        }

        if (var_s0 != 0)
        {
          goto __repair_rows_;
        }
      }
        var_s0_4 = 0x15 - D_8021F029;
        if (var_s0_4 != 0)
      {
        var_a1_2 = inline_fn(var_s0_4, 8);
        do
        {
          if (D_80190C98)
          {
            func_8014A4C8(arg0, (s16) (0xF4 - var_a1_2), 0x7E, 0xB, 0x55);
            var_s0_4 -= 1;
            __repair_literal = 8;
            var_a1_2 = inline_fn(var_s0_4, __repair_literal);
          }
          else
          {
            func_8014A4C8(arg0, (s16) (0xF4 - var_a1_2), 0x7E, 0xB, 0x55);
            var_s0_4 -= 1;
            __repair_literal = 8;
            var_a1_2 = inline_fn(var_s0_4, __repair_literal);
          }
        }
        while (var_s0_4 != 0);
      }
        return;

    }

  }
  while (0);
}

