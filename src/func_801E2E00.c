extern u8 D_801E97A0[];
void func_801E2E00(s32 arg0, s32 *arg1)
{
  s32 sum = 0;
  u32 i = 0;
  u32 idx = arg0 & 0xFFFF;
  do
  {
    u8 *tab = D_801E97A0;
    u32 base = idx * 0x30;
    sum += tab[base + i];
    i++;
  }
  while (i < 0x2C);
  *arg1 = sum;
}

