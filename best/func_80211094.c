extern u8 D_8011F32E[];
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
extern u8 D_8021B420[];
extern u8 D_8021B430[];
extern u8 D_8021EEC0[];
extern u8 D_8021EEC1;
extern u8 D_8021EEC2;
extern u8 D_8021E15F;
extern s8 D_8021E231[];
extern u8 D_80187BF0[];
extern u8 D_8021F270[];
extern u8 D_8021F036[];
extern u8 D_8021F048[];
extern s32 D_8021EFA0;
extern s32 D_8021AFDC;
extern s32 D_80168BB0;
s32 func_8014A870(s32, s32, s8);
void func_8014B854();
void func_80211B90();
void func_80231C5C();
void func_800DE2E0();
void func_800DE38C(s32, s32, void *, s32);
void func_801CF468(u16, s32, s32, s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_80211094(s32 arg0)
{
  char *__repair_addr;
  s32 flags;
  s32 var_v0;
  unsigned short j;
  s32 temp_v1;
  u8 t;
  u8 v;
  s32 row;
  s32 __repair_phase_row;
  flags = func_8014A870(0x14, 3, D_8021E15F);
  temp_v1 = *((u16 *) (D_8011F32E + ((arg0 & 0xFFFF) * 0x64)));
  if ((temp_v1 == 0) || (temp_v1 == 0x10))
  {
    j = flags & 0xF;
    temp_v1 = (unsigned short) j;
    t = D_8021B420[temp_v1];
    if (t != 0xFF)
    {
      v = D_8021B430[(D_8021EEC1 * 4) + t];
      if (v != 0xFF)
      {
        D_8021EEC1 = v;
        func_8014B854(0x3B, 0xFF);
      }
    }
    func_80211B90();
    if (flags & 0x80)
    {
      if (D_8021EEC2 != 0)
      {
        D_8021EEC2--;
        func_8014B854(0x3B);
      }
    }
    if (flags & 0x40)
    {
      if (D_8021EEC2 != 7)
      {
        D_8021EEC2++;
        func_8014B854(0x3B);
      }
    }
    var_v0 = flags & 0x20;
    if (flags & 0x10)
    {
      var_v0 = flags & 0x20;
      flags = 0;
      func_8014B854(0x3D);
      if (D_8021EEC1 == 0x55)
      {
        row = D_8021E231[(D_8021E15F * 0x110) + D_8021EEC0[0]];
        __repair_addr = (char *) ((D_80187BF0 + (row * 0x12)) + (D_8021EEC0[2] * 2));
        *((u16 *) __repair_addr) = *((u16 *) ((D_8021EEC0 + (D_8021EEC0[1] * 2)) + 0x34));
        if (D_8021EEC0[2] != 0)
        {
          D_8021EEC0[2]--;
        }
      }
      else
        if (D_8021EEC1 == 0x5A)
      {
        func_80203DF8(2, 6, 0, 0, 0);
        *((u16 *) (D_8011F32E + ((arg0 & 0xFFFF) * 0x64))) = 0x20;
      }
      else
      {
        __repair_phase_row = D_8021E231[(D_8021E15F * 0x110) + D_8021EEC0[0]];
        *((u16 *) ((D_80187BF0 + (__repair_phase_row * 0x12)) - (-(D_8021EEC0[2] * 2)))) = *((u16 *) ((D_8021EEC0 + (D_8021EEC0[1] * 2)) + 0x34));
        if (D_8021EEC0[2] != 7)
        {
          D_8021EEC0[2]++;
        }
      }
      var_v0 = flags & 0x20;
    }
    if (var_v0 != 0)
    {
      D_8021EFA0 &= 0xFFFF7FFF;
      func_8014B854(0x3B);
    }
    return;
  }
  if (temp_v1 == 0x20)
  {
    if ((*(*((u8 **) (D_8011F350 + (D_8018BC3C * 0x64))))) == 0)
    {
      for (flags = 0; flags < 0xE; flags++)
      {
        for (j = 0; j < 8; j++)
        {
          *((u16 *) (((D_8021F270 + (D_8021E15F * 0xE0)) + (2 * (flags * 8))) + (j * 2))) = *((u16 *) ((D_80187BF0 + (flags * 0x12)) + (j * 2)));
        }

        D_8021F048[(D_8021E15F * 0xE) + flags] = D_8021F036[flags];
      }

      func_800DE38C(0, flags, D_80187BF0 + ((flags - 1) * 0x12), (flags - 1) * 0x10);
      func_800DE2E0();
      func_80231C5C();
      func_801CF468(D_8018BC3C, 0, 0, 0);
      D_8021AFDC = 0x12;
      D_80168BB0 = 0x10;
    }
  }
}

