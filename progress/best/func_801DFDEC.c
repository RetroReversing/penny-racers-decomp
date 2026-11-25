#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
s32 func_801CA140();
s32 func_801CA528();
s32 func_801CAD00();
extern u16 D_80046820;
extern char D_8011F330[];
extern char D_801CF4C8[];
extern char D_801D4390[];
extern char D_801E86E4[];
extern char D_801E86EC[];
extern char D_801E8710[];
extern char D_801E8750[];
extern char D_801E87CC[];
extern u8 D_801E977C;
extern u8 D_801E9B18;
extern u8 D_801E9B19;
extern char D_801E9D70[];
inline static s32 *inline_fn()
{
  return (s32 *) (((s8 *) (*((s32 *) ((D_80046820 * 4) + D_801E86EC)))) + 8);
}

void func_801DFDEC(s32 arg0, s32 arg1)
{
  s32 unksp3E;
  s32 unksp4E;
  s32 sp3C;
  s32 sp44;
  s32 sp4C;
  s32 sp54;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s0_3;
  s32 temp_s0_4;
  s32 temp_s0_5;
  s32 temp_s0_6;
  s32 var_s1;
  s32 var_s1_2;
  s32 temp_v1;
  u8 var_v1;
  u8 var_v1_2;
  u8 var_v1_3;
  u8 var_v1_4;
  temp_v1 = *(D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
  if (temp_v1 == 1)
  {
    if (D_801E9B19 == 1)
    {
      *(D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 2;
      return;
    }
    do
    {
      do
      {
        var_s1 = 1;
      }
      while (0);
    }
    while (0);
    do
    {
      do
      {
        do
        {
          var_s1 += 1;
        }
        while (0);
      }
      while (0);
    }
    while (var_s1 < 4);
    func_801CA140(arg0);
    do
    {
      do
      {
        var_s1_2 = 0;
      }
      while (0);
    }
    while (0);
    sp3C = 0x24;
    sp44 = (s32) unksp3E;
    sp4C = 0x22;
    sp54 = (s32) unksp4E;
    do
    {
      var_v1 = *(D_801E9D70 + var_s1_2);
      if (var_v1 >= 2U)
      {
        if (var_v1 == 2)
        {
          func_801CAD00(arg0, unksp3E, (((var_s1_2 * 0x2A) + 0x4E) - 4) & 0xFFFF, 9, D_801E8750, *((s32 *) (((*(D_801E87CC + (*(D_801E9D70 + var_s1_2)))) * 4) + (*((s32 *) ((D_80046820 * 4) + D_801E86E4))))), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
          var_v1 = *(D_801E9D70 + var_s1_2);
        }
        if (var_v1 == 3)
        {
          temp_s0 = (var_s1_2 * 0x2A) + 0x4E;
          func_801CAD00(arg0, (u16) sp44, (temp_s0 - 4) & 0xFFFF, 9, D_801E8750, *((s32 *) (((*(D_801E87CC + (*(D_801E9D70 + var_s1_2)))) * 4) + (*((s32 *) ((D_80046820 * 4) + D_801E86E4))))), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
          func_801CAD00(arg0, (u16) sp44, (temp_s0 + 0xC) & 0xFFFF, 9, D_801E8750, *((s32 *) (((s8 *) (*((s32 *) ((D_80046820 * 4) + D_801E86EC)))) + 4)), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
        }
        var_v1_2 = *(D_801E9D70 + var_s1_2);
        if (var_v1_2 == 4)
        {
          temp_s0_2 = (var_s1_2 * 0x2A) + 0x4E;
          func_801CAD00(arg0, (u16) sp44, (temp_s0_2 - 4) & 0xFFFF, 9, D_801E8750, *((s32 *) (((*(D_801E87CC + (*(D_801E9D70 + var_s1_2)))) * 4) + (*((s32 *) ((D_80046820 * 4) + D_801E86E4))))), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
          func_801CAD00(arg0, (u16) sp44, (temp_s0_2 + 0xC) & 0xFFFF, 9, D_801E8750, *((s32 *) (((s8 *) (*((s32 *) ((D_80046820 * 4) + D_801E86EC)))) + 8)), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
          var_v1_2 = *(D_801E9D70 + var_s1_2);
        }
        if (var_v1_2 == 5)
        {
          temp_s0_3 = (var_s1_2 * 0x2A) + 0x4E;
          func_801CAD00(arg0, (u16) sp44, (temp_s0_3 - 4) & 0xFFFF, 9, D_801E8750, *((s32 *) (((*(D_801E87CC + (*(D_801E9D70 + var_s1_2)))) * 4) + (*((s32 *) ((D_80046820 * 4) + D_801E86E4))))), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
          func_801CAD00(arg0, (u16) sp44, (temp_s0_3 + 0x1C) & 0xFFFF, 9, D_801E8750, *inline_fn(), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
        }
        var_v1_3 = *(D_801E9D70 + var_s1_2);
        if (var_v1_3 >= 2U)
        {
          if (var_v1_3 == 2)
          {
            func_801CAD00(arg0, unksp4E, (((var_s1_2 * 0x2A) + 0x4E) - 6) & 0xFFFF, 9, D_801E8710, *((s32 *) (((*(D_801E87CC + (*(D_801E9D70 + var_s1_2)))) * 4) + (*((s32 *) ((D_80046820 * 4) + D_801E86E4))))), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
            var_v1_3 = *(D_801E9D70 + var_s1_2);
          }
          if (var_v1_3 == 3)
          {
            temp_s0_4 = (var_s1_2 * 0x2A) + 0x4E;
            func_801CAD00(arg0, (u16) sp54, (temp_s0_4 - 6) & 0xFFFF, 9, D_801E8710, *((s32 *) (((*(D_801E87CC + (*(D_801E9D70 + var_s1_2)))) * 4) + (*((s32 *) ((D_80046820 * 4) + D_801E86E4))))), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
            func_801CAD00(arg0, (u16) sp54, (temp_s0_4 + 0xA) & 0xFFFF, 9, D_801E8710, *((s32 *) (((s8 *) (*((s32 *) ((D_80046820 * 4) + D_801E86EC)))) + 4)), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
          }
          var_v1_4 = *(D_801E9D70 + var_s1_2);
          if (var_v1_4 == 4)
          {
            temp_s0_5 = (var_s1_2 * 0x2A) + 0x4E;
            func_801CAD00(arg0, (u16) sp54, (temp_s0_5 - 6) & 0xFFFF, 9, D_801E8710, *((s32 *) (((*(D_801E87CC + (*(D_801E9D70 + var_s1_2)))) * 4) + (*((s32 *) ((D_80046820 * 4) + D_801E86E4))))), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
            func_801CAD00(arg0, (u16) sp54, (temp_s0_5 + 0xA) & 0xFFFF, 9, D_801E8710, *((s32 *) (((s8 *) (*((s32 *) ((D_80046820 * 4) + D_801E86EC)))) + 8)), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
            var_v1_4 = *(D_801E9D70 + var_s1_2);
          }
          if (var_v1_4 == 5)
          {
            temp_s0_6 = (var_s1_2 * 0x2A) + 0x4E;
            func_801CAD00(arg0, (u16) sp54, (temp_s0_6 - 6) & 0xFFFF, 9, D_801E8710, *((s32 *) (((*(D_801E87CC + (*(D_801E9D70 + var_s1_2)))) * 4) + (*((s32 *) ((D_80046820 * 4) + D_801E86E4))))), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
            func_801CAD00(arg0, (u16) sp54, (temp_s0_6 + 0x1A) & 0xFFFF, 9, D_801E8710, *((s32 *) (((s8 *) (*((s32 *) ((D_80046820 * 4) + D_801E86EC)))) + 8)), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
          }
        }
      }
      do
      {
        do
        {
          var_s1_2 += 1;
        }
        while (0);
      }
      while (0);
    }
    while (var_s1_2 < 1);
    func_801CAD00(arg0, 0x42U, 0xC6, 0xA, D_801E8750, *((s32 *) (((s8 *) (*(D_801E86EC + (D_80046820 * 4)))) + 0x14)), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0xE);
    func_801CAD00(arg0, 0x40U, 0xC4, 0xA, D_801D4390, *((s32 *) (((s8 *) (*(D_801E86EC + (D_80046820 * 4)))) + 0x14)), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0xE);
    func_801CAD00(arg0, 0x42U, 0xD4, 0xA, D_801E8750, *((s32 *) (((s8 *) (*(D_801E86EC + (D_80046820 * 4)))) + 0x10)), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0xE);
    func_801CAD00(arg0, 0x40U, 0xD2, 0xA, D_801D4390, *((s32 *) (((s8 *) (*(D_801E86EC + (D_80046820 * 4)))) + 0x10)), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0xE);
    if (((u8) D_801E977C) < 0xFU)
    {
      func_801CA528(arg0, 0x2C, (((D_801E9B18 + 0xA) * 0xE) + 0x3A) & 0xFFFF, 0x11E, D_801CF4C8, D_801E8750);
      func_801CA528(arg0, 0x36, (((D_801E9B18 + 0xA) * 0xE) + 0x3A) & 0xFFFF, 0x11F, D_801CF4C8, D_801E8750);
      func_801CA528(arg0, 0x2A, (((D_801E9B18 + 0xA) * 0xE) + 0x38) & 0xFFFF, 0x11E, D_801CF4C8, D_801D4390);
      func_801CA528(arg0, 0x34, (((D_801E9B18 + 0xA) * 0xE) + 0x38) & 0xFFFF, 0x11F, D_801CF4C8, D_801D4390);
    }
  }
  else
    if (((s32) temp_v1) >= 2)
  {
    if (temp_v1 != 2)
    {
      return;
    }
    if (((u8) D_801E977C) >= 0xBU)
    {
      func_801CA140(arg0);
      func_801CAD00(arg0, 0x2AU, 0x73, 0xA, D_801E8750, *((s32 *) (((s8 *) (*(D_801E86EC + (D_80046820 << 2)))) + 0xC)), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0xE);
      func_801CAD00(arg0, 0x28U, 0x71, 0xA, D_801E8710, *((s32 *) (((s8 *) (*(D_801E86EC + (D_80046820 * 4)))) + 0xC)), 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0xE);
    }
  }
}

