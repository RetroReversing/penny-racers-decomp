extern void func_801D65BC(s32, void *, s32, s32);
extern void func_8021F5F0(void);
extern void func_801AEEE8(void);
extern void func_801AEFBC(void);
extern void func_800DE41C(s32, s32, s32, s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_8019E400[];
extern u8 D_8019E4B8[];
extern u8 D_801C5E9C[];
extern u8 D_801C5E9E[];
extern u8 D_801C5EA0;
extern u8 D_801C5EA1;
extern u8 D_801C6BB9;
extern u8 D_801C6BE0[];
extern u8 D_801C7068;
extern u8 D_801C7080[];
extern u8 D_801C7082[];
extern u8 D_801C7469;
extern u8 D_801C7470[];
extern void *D_801C7AB0;
extern u8 D_801C7AB6;
extern u8 D_801C7AB8;
extern u8 D_801C7AD8[];
void func_801AEC94(void)
{
  int __repair_constant = 4;
  u16 i;
  u16 j;
  u8 k;
  u8 *a1;
  u8 *p;
  D_801C7AB8 = __repair_constant;
  D_801C7469 = __repair_constant;
  if (D_801C5EA1 == 0)
  {
    D_801C6BB9 = 0xB;
    D_801C7068 = 0xB;
    D_801C5EA0 = 0;
    D_801C5E9E[0] = 0;
    D_801C5E9E[1] = 0;
  }
  else
  {
 do { D_801C7068 = D_801C7082[0]; } while (0);
    D_801C6BB9 = D_801C7082[1];
  }
  D_801C7AB0 = D_801C5E9C;
  D_801C7AB6 = 0;
  for (i = 0; i < 0x240; i++)
  {
    ((u16 *) D_801C6BE0)[i] = 0xFFFF;
    D_801C7AD8[i] = 0xFF;
  }

  for (j = 0; j < 0xC8; j++)
  {
    a1 = D_801C7470 + (j * 8);
    for (k = 0; k < 4; k++)
    {
      ((u16 *) a1)[k] = 0xFFFF;
    }

    if (D_801C5EA1 == 0)
    {
      p = D_801C7080 + (j * 5);
      p[0] = __repair_constant;
      p[1] = 0;
      p[2] = 0xFF;
      p[3] = 0xFF;
      p[4] = 0xFF;
    }
  }

  func_801D65BC(7, a1, -1, 0xFFFF);
  func_8021F5F0();
  func_801AEEE8();
  do
  {
    func_801AEFBC();
  }
  while (0);
  func_800DE41C(0, 0, 3, 0, 0x42, 0xFF, 0, 0, D_8019E400, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  func_800DE41C(0, 0, 3, 0, 0x50, 0xFF, 0, 0, D_8019E4B8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
