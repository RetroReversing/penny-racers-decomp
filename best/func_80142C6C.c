extern u8 D_8011F2F0[];
extern u8 D_801688C4[];
extern unsigned char D_8022A772[];
void func_80142C6C(u16 arg0)
{
  u8 *rec = D_8011F2F0 + ((arg0 & 0xFFFF) * 0x60);
  u8 *rec2 = D_801688C4 + ((*((u16 *) (rec + 0x40))) * 0x140);
  volatile unsigned int i = 0;
  while ((*((u16 *) (D_8022A772 + ((i * 0x90) / 2)))) != 0xFFFF)
  {
    if (D_801688C4)
    {
      i++;
    }
    else
    {
      i++;
    }
  }

}

