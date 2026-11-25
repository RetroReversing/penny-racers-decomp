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
s32 func_801D8BD0();
extern u16 D_80046820;
extern char D_8011F330[];
extern char D_801CF4C8[];
extern char D_801D4390[];
extern char D_801E6B68[];
extern char D_801E7470[];
extern s32 D_801E86E4[];
extern char D_801E86E8[];
extern char D_801E86EC[];
extern u8 D_801E87E1;
extern u8 D_801E9780;
extern u8 D_801E9798;
extern u16 D_801E9950;
extern u16 D_801E9B30;
extern u16 D_801E9D74;
extern u16 D_801F188E;
extern char D_8021C734[];
void func_801DAD68(s32 arg0, s32 arg1)
{
  s32 *var_v0;
  s32 var_a1;
  s32 var_a1_2;
  s32 var_a1_3;
  s32 var_a2;
  s32 var_a2_2;
  char var_a2_3;
  u16 temp_v1;
  do
  {
    temp_v1 = *(D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
  }
  while (0);
  switch (temp_v1)
  {
    case 0x0:
      *(D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
      return;

    case 0xB:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      block_57:
    block_58:
    func_801CAD00(arg0, var_a1 & 0xFFFF, var_a2 & 0xFFFF, 0xA);


      return;

    case 0xC:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0xD:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0xC)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x50) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) (*(D_801E86EC + (D_80046820 * 4)))) + 0x18)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xAE) & 0xFFFF, (D_801E9950 + 0x7E) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x10)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x14, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xAE) & 0xFFFF, (D_801E9950 + 0x8E) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x14)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x14, 0xE);
      if (((u8) D_801E9798) < 0xFU)
    {
      func_801CA528(arg0, (D_801E9D74 + 0x96) & 0xFFFF, (((D_801E9950 + ((D_801E9780 + 8) * 0xE)) + 0xE) + (D_801E9780 * 2)) & 0xFFFF, 0x11E, D_801CF4C8, D_801D4390);
      var_a1_2 = D_801E9D74 + 0xA0;
      var_a2_2 = ((D_801E9950 + ((D_801E9780 + 8) * 0xE)) + 0xE) + (D_801E9780 * 2);
      func_801CA528(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 0x11F, D_801CF4C8, D_801D4390);
      return;
    }
      break;

    case 0xE:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0xF:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x10:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x20)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x26;
      goto block_58;

    case 0x11:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1_3 = D_801E9D74 + 0x18;
      var_v0 = *((s32 **) (((s8 *) D_801E86E4[D_80046820]) + 0x34));
      var_a2_3 = D_801E9950 + 0x18;
      func_801CAD00(arg0, var_a1_3 & 0xFFFF, var_a2_3 & 0xFFFF, 0xA, var_v0, 0, D_801CF4C8, (s32 *) 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x2C) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x70)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x3A) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x6C)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      if (((u8) D_801E9798) < 0xFU)
    {
      func_801CA528(arg0, (D_801E9D74 + 0xD2) & 0xFFFF, ((D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x10) & 0xFFFF, 0x11E, D_801CF4C8, D_801D4390);
      var_a1_2 = D_801E9D74 + 0xDC;
      var_a2_2 = (D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x10;
      func_801CA528(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 0x11F, D_801CF4C8, D_801D4390);
      return;
    }
      break;

    case 0x12:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x38)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x26;
      goto block_58;

    case 0x13:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x14:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x15:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x16:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x4C)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x34;
      goto block_58;

    case 0x17:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x24)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x26;
      goto block_58;

    case 0x18:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x28)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x26;
      goto block_58;

    case 0x19:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x1A:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x1B:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x1C:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1_3 = D_801E9D74 + 0x18;
      var_v0 = *((s32 **) (((s8 *) D_801E86E4[D_80046820]) + 0x54));
      var_a2_3 = D_801E9950 + 0x18;
      func_801CAD00(arg0, var_a1_3 & 0xFFFF, var_a2_3 & 0xFFFF, 0xA, var_v0, 0, D_801CF4C8, (s32 *) 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x2C) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x70)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x3A) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x6C)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      if (((u8) D_801E9798) < 0xFU)
    {
      func_801CA528(arg0, (D_801E9D74 + 0xD2) & 0xFFFF, ((D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x10) & 0xFFFF, 0x11E, D_801CF4C8, D_801D4390);
      var_a1_2 = D_801E9D74 + 0xDC;
      var_a2_2 = (D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x10;
      func_801CA528(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 0x11F, D_801CF4C8, D_801D4390);
      return;
    }
      break;

    case 0x1D:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x58)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x36) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x70)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x44) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x6C)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      if (((u8) D_801E9798) < 0xFU)
    {
      func_801CA528(arg0, (D_801E9D74 + 0xD2) & 0xFFFF, ((D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x1A) & 0xFFFF, 0x11E, D_801CF4C8, D_801D4390);
      var_a1_2 = D_801E9D74 + 0xDC;
      var_a2_2 = (D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x1A;
      func_801CA528(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 0x11F, D_801CF4C8, D_801D4390);
      return;
    }
      break;

    case 0x1E:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1_3 = D_801E9D74 + 0x18;
      var_v0 = *((s32 **) (((s8 *) D_801E86E4[D_80046820]) + 0x5C));
      var_a2_3 = D_801E9950 + 0x18;
      func_801CAD00(arg0, var_a1_3 & 0xFFFF, var_a2_3 & 0xFFFF, 0xA, var_v0, 0, D_801CF4C8, (s32 *) 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x2C) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x70)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x3A) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x6C)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      if (((u8) D_801E9798) < 0xFU)
    {
      func_801CA528(arg0, (D_801E9D74 + 0xD2) & 0xFFFF, ((D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x10) & 0xFFFF, 0x11E, D_801CF4C8, D_801D4390);
      var_a1_2 = D_801E9D74 + 0xDC;
      var_a2_2 = (D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x10;
      func_801CA528(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 0x11F, D_801CF4C8, D_801D4390);
      return;
    }
      break;

    case 0x1F:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x60)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x36) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x70)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x44) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x6C)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      if (((u8) D_801E9798) < 0xFU)
    {
      func_801CA528(arg0, (D_801E9D74 + 0xD2) & 0xFFFF, ((D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x1A) & 0xFFFF, 0x11E, D_801CF4C8, D_801D4390);
      var_a1_2 = D_801E9D74 + 0xDC;
      var_a2_2 = (D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x1A;
      func_801CA528(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 0x11F, D_801CF4C8, D_801D4390);
      return;
    }
      break;

    case 0x20:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1_3 = D_801E9D74 + 0x18;
      var_v0 = *((s32 **) (((s8 *) D_801E86E4[D_80046820]) + 0x64));
      var_a2_3 = D_801E9950 + 0x18;
      func_801CAD00(arg0, var_a1_3 & 0xFFFF, var_a2_3 & 0xFFFF, 0xA, var_v0, 0, D_801CF4C8, (s32 *) 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x2C) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x70)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x3A) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x6C)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      if (((u8) D_801E9798) < 0xFU)
    {
      func_801CA528(arg0, (D_801E9D74 + 0xD2) & 0xFFFF, ((D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x10) & 0xFFFF, 0x11E, D_801CF4C8, D_801D4390);
      var_a1_2 = D_801E9D74 + 0xDC;
      var_a2_2 = (D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x10;
      func_801CA528(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 0x11F, D_801CF4C8, D_801D4390);
      return;
    }
      break;

    case 0x21:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x68)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x19, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x36) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x70)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x44) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x6C)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      if (((u8) D_801E9798) < 0xFU)
    {
      func_801CA528(arg0, (D_801E9D74 + 0xD2) & 0xFFFF, ((D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x1A) & 0xFFFF, 0x11E, D_801CF4C8, D_801D4390);
      var_a1_2 = D_801E9D74 + 0xDC;
      var_a2_2 = (D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x1A;
      func_801CA528(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 0x11F, D_801CF4C8, D_801D4390);
      return;
    }
      break;

    case 0x22:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x23:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x24:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x25:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x26:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x27:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x28:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x29:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x2A:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x2B:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *(D_8021C734 + (D_801E87E1 * 4)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x26;
      goto block_58;

    case 0x2C:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x2D:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0xA0)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x26;
      goto block_58;

    case 0x2E:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1_3 = D_801E9D74 + 0x18;
      var_v0 = *((s32 **) (((s8 *) D_801E86E4[D_80046820]) + 0xCC));
      var_a2_3 = D_801E9950 + 0x18;
      func_801CAD00(arg0, var_a1_3 & 0xFFFF, var_a2_3 & 0xFFFF, 0xA, var_v0, 0, D_801CF4C8, (s32 *) 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x2C) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x70)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + ((char) 0xEA)) & 0xFFFF, (D_801E9950 + 0x3A) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x6C)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      if (((u8) D_801E9798) < 0xFU)
    {
      func_801CA528(arg0, (D_801E9D74 + 0xD2) & 0xFFFF, ((D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x10) & 0xFFFF, 0x11E, D_801CF4C8, D_801D4390);
      var_a1_2 = D_801E9D74 + 0xDC;
      var_a2_2 = (D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x10;
      func_801CA528(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 0x11F, D_801CF4C8, D_801D4390);
      return;
    }
      break;

    case 0x2F:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0xD4)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x50) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0xD8)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xAE) & 0xFFFF, (D_801E9950 + 0x7E) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x70)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x14, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xAE) & 0xFFFF, (D_801E9950 + 0x8E) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x6C)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x14, 0xE);
      if (((u8) D_801E9798) < 0xFU)
    {
      func_801CA528(arg0, (D_801E9D74 + 0x96) & 0xFFFF, (((D_801E9950 + ((D_801E9780 + 8) * 0xE)) + 0xE) + (D_801E9780 * 2)) & 0xFFFF, 0x11E, D_801CF4C8, D_801D4390);
      var_a1_2 = D_801E9D74 + 0xA0;
      var_a2_2 = ((D_801E9950 + ((D_801E9780 + 8) * 0xE)) + 0xE) + (D_801E9780 * 2);
      func_801CA528(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 0x11F, D_801CF4C8, D_801D4390);
      return;
    }
      break;

    case 0x33:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x64:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      block_56:
    goto block_57;


    case 0x65:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x66:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    case 0x67:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      func_801CAD00(arg0, (D_801E9D74 + 0x18) & 0xFFFF, (D_801E9950 + 0x18) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) (*(D_801E86E8 + (D_80046820 * 4)))) + 0xC)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x34;
      goto block_58;

    case 0x68:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1_3 = D_801E9D74 + 0x18;
      var_a2_3 = D_801E9950 + 0x18;
      var_v0 = *((s32 **) (((s8 *) (*(D_801E86E8 + (D_80046820 * 4)))) + 0x14));
      func_801CAD00(arg0, var_a1_3 & 0xFFFF, var_a2_3 & 0xFFFF, 0xA, var_v0, 0, D_801CF4C8, (s32 *) 0xA, 0xE, 0xA0, 0xFC, 0x18, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x2C) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x70)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      func_801CAD00(arg0, (D_801E9D74 + 0xEA) & 0xFFFF, (D_801E9950 + 0x3A) & 0xFFFF, 0xA, D_801D4390, *((s32 *) (((s8 *) D_801E86E4[D_80046820]) + 0x6C)), NULL, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
      if (((u8) D_801E9798) < 0xFU)
    {
      func_801CA528(arg0, (D_801E9D74 + 0xD2) & 0xFFFF, ((D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x10) & 0xFFFF, 0x11E, D_801CF4C8, D_801D4390);
      var_a1_2 = D_801E9D74 + 0xDC;
      var_a2_2 = (D_801E9950 + ((D_801E9780 + 2) * 0xE)) + 0x10;
      func_801CA528(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 0x11F, D_801CF4C8, D_801D4390);
      return;
    }
      break;

    case 0x69:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_57;

    default:
      func_801CA140(arg0);
      func_801D8BD0(arg0, D_801E9D74, D_801E9950, D_801E9B30, (s32) D_801F188E, D_801E6B68, D_801E7470);
      var_a1 = D_801E9D74 + 0x18;
      var_a2 = D_801E9950 + 0x18;
      goto block_56;

  }

}

