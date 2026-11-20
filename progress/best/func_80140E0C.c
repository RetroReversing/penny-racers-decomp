void func_8013AE60(s32 arg0);
void func_801D7028(s32, s32);
void func_8013F1D4(s32, s32, void *);
void func_8013F44C(s32, void *);
extern u8 D_8011F2F0[];
extern u8 D_801834C8[];

void func_80140E0C(s32 arg0)
{
char *__repair_addr;

  s32 idx;
  u8 *s3;
  u8 *s1;

  idx = arg0 & 0xFFFF;
  s1 = D_8011F2F0 + idx * 100;
  s3 = *(u8 **)(s1 + 0x60);
  func_8013AE60(arg0);
  switch (*(u16 *)(s1 + 0x3E)) {
  case 0:
    if (--*(u16 *)(s1 + 0x40) == 0) {
      *(u16 *)(s1 + 0x40) = 10;
      *(u16 *)(s1 + 0x3E) = 1;
      func_801D7028(idx, 0x23);
    }
    break;
__repair_addr = (char *)(s1 + 0x1C);

  case 1:
    *(float *)(__repair_addr) = *(float *)(s1 + 0x1C) + 4.0f;
    if (--*(u16 *)(s1 + 0x40) == 0) {
      *(u16 *)(s1 + 0x40) = 100;
      *(u16 *)(s1 + 0x3E) = 2;
    }
    func_8013F1D4(arg0, idx, s3);
    {
      s32 i;
      for (i = 0; i < 7; i++) {
        s3[0x67 + i] = 0;
      }
    }
    break;
  case 2:
    if (--*(u16 *)(s1 + 0x40) == 0) {
      *(u16 *)(s1 + 0x40) = 10;
      *(u16 *)(s1 + 0x3E) = 3;
      func_801D7028(idx, 0x23);
    }
    func_8013F44C(idx, s3);
    break;
  case 3:
    *(float *)(s1 + 0x1C) = *(float *)(s1 + 0x1C) - 4.0f;
    if (--*(u16 *)(s1 + 0x40) == 0) {
      *(u16 *)(s1 + 0x3E) = 4;
      *(u16 *)(s1 + 0x40) = 10;
    }
    func_8013F44C(idx, s3);
    break;
  case 4:
      break;
  }
}
