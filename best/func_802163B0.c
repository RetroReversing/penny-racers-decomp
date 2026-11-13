s32 func_8014A870(s32, s32, s32);
s32 func_801D651C(s32, s32);
extern unsigned char D_8011F2F0;
extern s32 D_80190CA0;
extern s8 D_80190CA6;
extern s32 D_80190CB0;
extern s32 D_801C5E9C;
extern s8 D_801C5E9D;
extern s8 D_801C5EA2;
void func_802163B0(s32 arg0)
{
  s32 var_s0;
  u16 temp_v0;
  u16 temp_v1;
  void *temp_s4;
  temp_s4 = ((arg0 & 0xFFFF) * 0x64) + (&D_8011F2F0);
  var_s0 = func_8014A870(0x1E, 7, 0);
  temp_v1 = *((u16 *) (((char *) temp_s4) + 0x3E));
  switch (temp_v1)
  {
    case 0:
      *((u16 *) (((char *) (&D_80190CA0)) + 0)) = 0xFFU;
      D_80190CA6 = 0;
      *((u8 *) (((char *) (&D_80190CA0)) + 2)) = (u8) ((*((u8 *) (((char *) (&D_801C5E9C)) + 0))) - 3);
      *((u8 *) (((char *) (&D_80190CA0)) + 4)) = (u8) ((*((u8 *) (((char *) (&D_801C5E9C)) + 1))) - 5);
      *((u16 *) (((char *) temp_s4) + 0x3E)) = 0x10U;

    case 16:
      if ((var_s0 & 8) && ((*((u8 *) (((char *) (&D_80190CA0)) + 2))) != 1))
    {
      func_801D651C(7, 0x3B);
      *((u8 *) (((char *) (&D_80190CA0)) + 2)) = 1U;
    }
      if ((var_s0 & 4) && ((*((u8 *) (((char *) (&D_80190CA0)) + 2))) != 0))
    {
      func_801D651C(7, 0x3B);
      *((u8 *) (((char *) (&D_80190CA0)) + 2)) = 0U;
    }
      *((u8 *) (((char *) (&D_801C5E9C)) + 0)) = (u8) ((*((u8 *) (((char *) (&D_80190CA0)) + 2))) + 3);
      if (var_s0 & 0x10)
    {
      var_s0 = 0;
      func_801D651C(7, 0x3D);
      D_80190CA6 = 1;
      *((u16 *) (((char *) temp_s4) + 0x3E)) = 0x20U;
    }
      if (var_s0 & 0x20)
    {
      func_801D651C(7, 0x3A);
      *((s8 *) (((char *) (&D_80190CB0)) + 0)) = 0;
      *((s16 *) (((char *) (&D_80190CB0)) + (-0x16))) = 0x10;
      D_801C5EA2 = 5;
      return;
    }
      return;

    case 32:
      if ((var_s0 & 8) && ((*((u8 *) (((char *) (&D_80190CA0)) + 4))) != 1))
    {
      func_801D651C(7, 0x3B);
      *((u8 *) (((char *) (&D_80190CA0)) + 4)) = 1U;
    }
      if ((var_s0 & 4) && ((*((u8 *) (((char *) (&D_80190CA0)) + 4))) != 0))
    {
      func_801D651C(7, 0x3B);
      *((u8 *) (((char *) (&D_80190CA0)) + 4)) = 0U;
    }
      D_801C5E9D = (*((u8 *) (((char *) (&D_80190CA0)) + 4))) + 5;
      if (var_s0 & 0x10)
    {
      var_s0 = 0;
      func_801D651C(7, 0x3D);
      *((u16 *) (((char *) temp_s4) + 0x3E)) = 0x30U;
    }
      if (var_s0 & 0x20)
    {
      func_801D651C(7, 0x3A);
      *((u16 *) (((char *) temp_s4) + 0x3E)) = 0U;
      return;
    }
      break;

    case 48:
      temp_v0 = (*((u16 *) (((char *) (&D_80190CA0)) + 0))) - 8;
      *((u16 *) (((char *) (&D_80190CA0)) + 0)) = temp_v0;
      if (temp_v0 & 0x8000)
    {
      *((u16 *) (((char *) (&D_80190CA0)) + 0)) = 0U;
      *((s8 *) (((char *) (&D_80190CB0)) + 0)) = 0;
      *((s16 *) (((char *) (&D_80190CB0)) + (-0x16))) = 0xF0;
    }
      break;

  }

}

