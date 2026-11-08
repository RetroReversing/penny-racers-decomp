/* Partial candidate from function #273516 in project #72; rechecked locally. */
typedef struct 
{
  u8 b[0x28];
} Blob28;
extern s8 D_80016470;
extern s32 D_800164AC;
s32 __osContAddressCrc(s32);
void __osPackRamReadData(s32 arg0, s32 arg1)
{
  int __repair_literal;
  int __repair_constant = -1;
  s8 sp10;
  s8 sp11;
  s8 sp12;
  s8 sp13;
  unsigned int new_var2;
  s8 sp35;
  s8 sp36;
  s16 sp14;
  int new_var;
  Blob28 sp20;
  s32 i;
  s8 *p;
  s32 count = arg0;
  s32 value = arg1;
  s8 *base = &D_80016470;
  D_800164AC = 1;
  sp11 = 3;
  sp12 = 0x21;
  new_var2 = __repair_constant;
  sp10 = new_var2;
  sp13 = 2;
  sp14 = (__osContAddressCrc(value & 0xffff) & 0xff) | (value << 5);
  new_var = 0x1f;
  sp36 = __repair_constant;
  for (i = new_var, p = &sp35; i >= 0; i--, p--)
  {
    *p = new_var2;
  }

  __repair_literal = 0;
  if (count > __repair_literal)
  {
    for (i = 0; i < count; i++)
    {
      base[i] = 0;
    }

  }
  sp20 = *((Blob28 *) (&sp10));
  *((Blob28 *) base) = sp20;
  base[0x28] = -2;
}

