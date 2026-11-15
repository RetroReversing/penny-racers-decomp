s32 func_8013E49C(u16);
s32 func_8013EDFC(s32, void *);
extern u8 D_8011F2FD[];
extern u8 D_8011F350[];
void func_8015CF2C(s32 arg0)
{
  s16 t;
  s32 off;
  u8 *obj;
 do { off = ((u16) arg0) * 0x64; obj = *((u8 **) (D_8011F350 + off)); t = (s16) ((*((u16 *) (obj + 0x14))) - 1); *((u16 *) (obj + 0x14)) = t; *((f32 *) (obj + 0x70)) = (*((f32 *) (obj + 0x70))) + 15.0f; if (t < 0) { func_8013E49C(*((u16 *) (obj + 0x76))); D_8011F2FD[off] = 2; } } while (0);
  func_8013EDFC(arg0 & 0xFFFF, obj);
}
