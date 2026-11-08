extern unsigned short D_8006FB10;
s32 func_8003DE60();
extern char D_8006FAF0[];
extern char D_80229B20[];
extern char D_8022B050[];
extern char D_802328C0[];
extern char D_8023306C[];
extern char D_80233084[];
void func_80232360(s32 arg0, volatile unsigned int arg1)
{
  s32 temp_s0;
  s32 temp_s1;
  s32 temp_v1;
  if (((D_8006FB10 == 0) | (((u16) D_8006FB10) >= 0xAU)) != 0)
  {
    *(D_8022B050 + ((arg0 & 0xFFFF) * 0x8F0)) = &D_80229B20;
    return;
  }
  temp_s1 = arg0 & 0xFFFF;
  temp_s0 = arg1 & 0xFFFF;
  do
  {
    func_8003DE60(&D_8023306C, temp_s1, temp_s0);
  }
  while (0);
  temp_v1 = *(D_802328C0 + (((D_8006FB10 * 0x10) + temp_s0) * 4));
  if (temp_v1 != 0)
  {
    *(D_8022B050 + (temp_s1 * 0x8F0)) = temp_v1;
    return;
  }
  *(D_8022B050 + ((arg0 & 0xFFFF) * 0x8F0)) = &D_80229B20;
  func_8003DE60(&D_80233084);
}

