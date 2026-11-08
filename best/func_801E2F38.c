s32 func_80029890(u8, void *, s32);
s32 func_801E2E00(s32, void *);
extern s32 D_801E91C8;
extern s32 D_801E97CC;
void func_801E2F38(s32 arg0)
{
  s32 temp_s1;
  s32 temp_s2;
  if (temp_s1 || arg0)
  {
    temp_s2 = arg0 & 0xFFFF;
    temp_s1 = temp_s2 * 0x30;
    func_801E2E00(temp_s2, temp_s1 + (&D_801E97CC));
    func_80029890(*((&D_801E91C8) + temp_s2), temp_s1 + ((&D_801E97CC) - 0x2C), 0x30);
  }
  else
  {
    temp_s2 = arg0 & 0xFFFF;
    temp_s1 = temp_s2 * 0x30;
    func_801E2E00(temp_s2, temp_s1 + (&D_801E97CC));
    func_80029890(*((&D_801E91C8) + temp_s2), temp_s1 + ((&D_801E97CC) - 0x2C), 0x30);
  }
}

