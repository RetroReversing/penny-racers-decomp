extern short D_800DD2C0;
s32 func_800DE41C();
s32 func_801CA140();
s32 func_801CA468();
s32 func_801CAF18();
s32 func_801CB9EC();
s32 func_801CC150();
s32 func_801CCE7C();
extern char D_800DB1B8[];
extern char D_8011F2F0[];
extern char D_8011F2FC[];
extern char D_8011F330[];
extern u8 D_80126FF6;
extern char D_8016EAC8[];
extern char D_8016ED28[];
extern char D_8016ED50[];
extern char D_8016EDD8[];
extern char D_8016EE00[];
extern char D_8016EF48[];
extern char D_801706A0[];
extern char D_80170828[];
extern char D_80170850[];
extern char D_80170A18[];
extern char D_80170A40[];
extern char D_80170D18[];
extern char D_8017D2B8[];
extern char D_8017D2F8[];
extern char D_80183BA4[];
extern u8 D_80189CC8;
extern void *D_801C7AB0;
extern char D_801D51C8[];
extern char D_801D5470[];
extern char D_80220ED8[];
extern char D_8022A770[];
extern s32 func_80133F54;
extern s32 func_801341C0;
void func_80132AB0(void **arg0, s32 arg1)
{
  s32 sp4C;
  s32 sp54;
  s16 temp_s0;
  s16 temp_s0_3;
  s32 temp_a0;
  s32 temp_s4;
  s32 var_a2;
  s32 var_a2_2;
  s32 var_a2_3;
  s32 var_v1;
  u8 temp_s0_4;
  u8 temp_s6;
  u8 temp_t0;
  u8 temp_v1_2;
  void *temp_s0_2;
  void *temp_s7;
  void *temp_v1;
  if (D_80126FF6 == (D_800DD2C0 - 1))
  {
    temp_a0 = (arg1 & 0xFFFF) * 0x64;
    temp_t0 = *(D_8011F2F0 + temp_a0);
    sp4C = (s32) temp_t0;
    sp54 = (s32) temp_t0;
    sp54 = temp_t0 * 0x6C;
    temp_s7 = (temp_t0 * 0x8F0) + D_8022A770;
    var_v1 = 0;
    if ((*(D_8011F330 + temp_a0)) == 0)
    {
      do
      {
        *(D_80183BA4 + var_v1) = 1;
        var_v1 += 1;
      }
      while (var_v1 < 2);
      *(D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
    }
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    *((s32 *) (((char *) temp_v1) + 0)) = 0x06000000;
    *((s32 **) (((char *) temp_v1) + 4)) = D_80220ED8;
    func_801CA140(arg0);
    func_801CA468(arg0, *(D_8011F2FC + ((arg1 & 0xFFFF) * 0x64)));
    if ((D_80189CC8 != 3) || ((*((u8 *) (((char *) D_801C7AB0) + 1))) != 6))
    {
      temp_v1_2 = *(D_80183BA4 + sp4C);
      if (((((s32) temp_v1_2) < (*((s16 *) (((char *) temp_s7) + 0x594)))) && (temp_v1_2 < 4U)) && ((*((u8 *) (((char *) temp_s7) + 0x879))) != 5))
      {
        func_800DE41C(0, *(D_8011F2F0 + ((arg1 & 0xFFFF) * 0x64)), 3, 0, 0x81, (s32) (*(D_80183BA4 + sp4C)), 0, &func_80133F54, &func_801341C0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        *(D_80183BA4 + sp4C) = *((u8 *) (((char *) temp_s7) + 0x595));
      }
    }
    temp_s6 = *(D_80183BA4 + sp4C);
    if (temp_s6 != 4)
    {
      temp_s4 = (sp54 + 0x10) & 0xFFFF;
      func_801CAF18(arg0, 0x28, temp_s4, 0xA, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
      func_801CAF18(arg0, 0x40, temp_s4, 0xB, D_801D51C8, D_801D5470, 0, 8, 0xC, 0x70, 0xC);
      temp_s0 = sp54 + 0x12;
      func_801CC150(arg0, 0x5C, sp54 + 0x12, 0, 0, 0x20, 8, 0x20, 8, 0x20, 8, 0, 0, 0x13F, 0xEF, D_8016ED50, D_8016EDD8);
      func_801CB9EC(arg0, 0x77, temp_s0 & 0xFFFF, 8, D_8016EE00, D_8016EF48, 0, 1, 0, 8, 8, 0x50, 8, temp_s6 & 0xFFFF);
      temp_s0_2 = temp_s7 + (temp_s6 * 5);
      func_801CB9EC(arg0, 0x18, temp_s4, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) (*((u8 *) (((char *) temp_s0_2) + 0x563))));
      func_801CB9EC(arg0, 0x30, temp_s4, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) (*((u8 *) (((char *) temp_s0_2) + 0x564))));
      func_801CB9EC(arg0, 0x48, temp_s4, 9, D_801D51C8, D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) (*((u8 *) (((char *) temp_s0_2) + 0x566))));
      if ((*(D_80183BA4 + sp4C)) != 4)
      {
        if (D_800DD2C0 == 1)
        {
          if (((*(D_8017D2B8 + ((*((u16 *) (((char *) temp_s7) + 0x53A))) * 4))) != 0) && ((*((s16 *) (((char *) temp_s7) + 0x55E))) != 0))
          {
            if (D_80189CC8 != 0)
            {
              if (D_80189CC8 != 3)
              {
                func_801CC150(arg0, 0x19, 0xC7, 0, 0, 0x30, 0x19, 0x30, 0x19, 0x30, 0x19, 0, 0, 0x13F, 0xEF, D_8016EAC8, D_8016ED28);
                func_801CCE7C(arg0, 0x21, 0xBD, 0, 0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0, 0, 0x13F, 0xEF, *(D_8017D2B8 + ((*((u16 *) (((char *) temp_s7) + 0x53A))) * 4)), *(D_8017D2F8 + ((*((u16 *) (((char *) temp_s7) + 0x53A))) * 4)));
                if ((*((s16 *) (((char *) temp_s7) + 0x55E))) != (-1))
                {
                  var_a2 = 0xD4;
                  goto block_25;
                }
              }
              goto block_26;
            }
            goto block_29;
          }
          goto block_26;
        }
        if (((*(D_8017D2B8 + ((*((u16 *) (((char *) temp_s7) + 0x53A))) * 4))) != 0) && ((*((s16 *) (((char *) temp_s7) + 0x55E))) != 0))
        {
          func_801CC150(arg0, 0x19, (s16) (sp54 + 0x5B), 0, 0, 0x30, 0x19, 0x30, 0x19, 0x30, 0x19, 0, 0, 0x13F, 0xEF, D_8016EAC8, D_8016ED28);
          func_801CCE7C(arg0, 0x21, (s16) (sp54 + 0x51), 0, 0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0, 0, 0x13F, 0xEF, *(((*((u16 *) (((char *) temp_s7) + 0x53A))) * 4) + D_8017D2B8), *(D_8017D2F8 + ((*((u16 *) (((char *) temp_s7) + 0x53A))) * 4)));
          if ((*((s16 *) (((char *) temp_s7) + 0x55E))) != (-1))
          {
            var_a2 = (sp54 + 0x68) & 0xFFFF;
            block_25:
            func_801CB9EC(arg0, 0x37, var_a2, 8);

          }
        }
        goto block_26;
      }
    }
    block_26:
    if ((D_80189CC8 == 0) || ((D_80189CC8 == 3) && (D_800DD2C0 == 1)))
    {
      block_29:
      func_801CC150(arg0, 0xF8, 0x12, 0, 0, 0x30, 0x1E, 0x30, 0x1E, 0x30, 0x1E, 0, 0, 0x13F, 0xEF, D_80170A40, D_80170D18);

    }
    else
    {
      if ((sp4C == 1) && (D_80189CC8 != 3))
      {
        func_801CC150(arg0, 0xD8, 0xD2, 0, 0, 0x40, 0xC, 0x40, 0xC, 0x40, 0xC, 0, 0, 0x13F, 0xEF, D_801706A0, D_80170828);
        var_a2_2 = 0xBE;
      }
      else
      {
        func_801CC150(arg0, 0xD8, (s16) (sp54 + 0x12), 0, 0, 0x40, 0xC, 0x40, 0xC, 0x40, 0xC, 0, 0, 0x13F, 0xEF, D_801706A0, D_80170828);
        var_a2_2 = (sp54 + 0x14) & 0xFFFF;
      }
      func_801CB9EC(arg0, 0x10B, var_a2_2, 0x1B);
    }

    temp_s0_3 = D_800DD2C0;
    if (temp_s0_3 == 1)
    {
      func_801CC150(arg0, 0xEC, 0xD2, 0, 0, 0x40, 0xE, 0x40, 0xE, 0x40, 0xE, 0, 0, 0x13F, 0xEF, D_80170850, D_80170A18);
      if ((*((f32 *) (((char *) temp_s7) + 0x774))) >= 2.1474836e9f)
      {
      }
      var_a2_3 = 0xD3;
      goto block_49;
    }
    temp_s0_4 = D_80189CC8;
    if (temp_s0_4 == 3)
    {
      func_801CC150(arg0, 0xEC, (s16) (sp54 + 0x66), 0, 0, 0x40, 0xE, 0x40, 0xE, 0x40, 0xE, 0, 0, 0x13F, 0xEF, D_80170850, D_80170A18);
      var_a2_3 = (sp54 + 0x67) & 0xFFFF;
      if ((*((f32 *) (((char *) temp_s7) + 0x774))) >= 2.1474836e9f)
      {
      }
      block_49:
      func_801CB9EC(arg0, 0xEF, var_a2_3, 9);

    }
  }
}

