extern u8 D_8011F2F0[];
extern u8 D_8006FB38[];
extern u8 D_8018BC3C[];
extern u8 D_80190CA4[];
extern u8 D_80190CA6[];
extern void *D_8021DF10[];
void func_8002C410(void *);
void func_801D65BC(s32);
s32 func_802191E4(u16 arg0)
{
  u16 idx = arg0;
  unsigned char kind = *((u16 *) ((D_8011F2F0 + (idx * 100)) + 0x3E));
  if ((kind + 1) > 0x33)
  {
    if (D_8011F2F0 || kind)
    {
      return 0;
    }
    else
    {
      return 0;
    }
  }
  switch (kind)
  {
    default:
      return 1;

  }

}

