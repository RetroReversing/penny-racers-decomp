extern s32 func_8014A870(s32, s32, s32);
extern void func_8014B854(s32);
extern void func_800DE2E0(void);
extern void func_800DE38C(void);
extern void func_80231C5C(void);
extern void func_801CF468(u16, s32, s32, s32);
extern void func_80203DF8(s32, s32, s32, s32, s32);
typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern u8 D_8011F350[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern s32 D_8021B060;
extern u8 D_8021B0C0;
void func_80206848(s32 arg0)
{
  int __repair_constant = 2;
  s32 temp_v0;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  u16 temp_v1;
  temp_v1 = D_8011F32E[arg0 & 0xFFFF].f0;
  switch (temp_v1)
  {
    case 0:
      if ((*(*((u8 **) (D_8011F350 + (D_8018BC3C * 0x64))))) == 0)
    {
      D_8011F32E[arg0 & 0xFFFF].f0 = 1;
      return;
    }
      return;

    case 1:
      temp_v0 = func_8014A870(0x1E, 7, 0);
      var_v0 = temp_v0 & 2;
      if (temp_v0 & 1)
    {
      if (var_v0)
      {
        func_8014B854(0x3B);
        D_8021B0C0 -= 1;
        var_v0 = temp_v0 & 2;
      }
      else
      {
        func_8014B854(0x3B);
        D_8021B0C0 -= 1;
        var_v0 = temp_v0 & 2;
      }
    }
      if (var_v0 != 0)
    {
      func_8014B854(0x3B);
      D_8021B0C0 += 1;
    }
      D_8021B0C0 &= 3;
      var_v0_2 = temp_v0 & 0x20;
      if (temp_v0 & 0x10)
    {
      func_8014B854(0x3D);
      if (D_8021B0C0 == 1)
      {
        __repair_rows:
        {
          func_80203DF8(2, 6, 0, 0, 0);
        }

        if (0)
        {
          goto __repair_rows;
        }
        D_8021AFDC = __repair_constant;
        D_8021AFE0 = __repair_constant;
        var_v0_3 = 0x2A;
        goto block_36;
      }
      if ((((s32) D_8021B0C0) + 1) > 2)
      {
        do
        {
          switch (D_8021B0C0)
          {
            case 2:
              do
            {
              func_80203DF8(2, 6, 0, 0, 0);
            }
            while (0);
              D_8021AFDC = __repair_constant;
              D_8021AFE0 = __repair_constant;
              var_v0_3 = 0x1C;
              goto block_36;

            case 3:
              func_80203DF8(2, 6, 0, 0, 0);
              D_8021AFDC = __repair_constant;
              D_8021AFE0 = __repair_constant;
              var_v0_3 = 0x26;
              goto block_36;

            default:
              var_v0_2 = temp_v0 & 0x20;
              break;

          }

        }
        while (0);
      }
      else
        if (D_8021B0C0 == 0)
      {
        func_80203DF8(2, 6, 0, 0, 0);
        D_8021AFDC = __repair_constant;
        var_v0_3 = 4;
        block_36:
        D_8021B060 = var_v0_3;

        D_8011F32E[arg0 & 0xFFFF].f0 = 3;
        var_v0_2 = temp_v0 & 0x20;
      }
      else
      {
        var_v0_2 = temp_v0 & 0x20;
      }
    }
      if (var_v0_2 != 0)
    {
      do
      {
        func_8014B854(0x3A);
      }
      while (0);
      func_80203DF8(2, 6, 0, 0, 0);
      D_8021AFDC = __repair_constant;
      D_8021B060 = 0;
      D_8011F32E[arg0 & 0xFFFF].f0 = 3;
      return;
    }
      break;

    case 3:
      if ((*(*((u8 **) (D_8011F350 + (D_8018BC3C * 0x64))))) == 0)
    {
      func_800DE38C();
      func_800DE2E0();
      func_80231C5C();
      func_801CF468(D_8018BC3C, 0, 0, 0);
      D_80168BB0 = D_8021B060;
    }
      break;

  }

}

