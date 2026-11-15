extern u16 D_800E1850;
extern u16 D_8011F068[];
extern u8 D_8011F2F0[];
void func_800E1510(void);
void func_800E15CC(void);
void func_800E1688(void);
void func_800E1728(void)
{
  u16 i;
  volatile short pad;
  u8 *e;
  u16 *list;
  u16 end;
  end = 0xFFFF;
  if (D_800E1850 == end)
  {
    return;
  }
  func_800E1510();
  i = 0;
  func_800E15CC();
  list = D_8011F068;
  if (list[0] == end)
  {
    return;
  }
  do
  {
    e = D_8011F2F0 + (list[i] * 0x64);
    if (e[0xD] != 0)
    {
      i++;
    }
    else
      if (e[1] == 1)
    {
      i++;
      func_800E1688();
    }
    else
      if ((*((u32 *) e)) & 0x12)
    {
      i++;
    }
    else
    {
      (*((void (**)(u16)) (e + 0x54)))(list[i]);
      i++;
    }
  }
  while (list[i] != end);
}

