s32 func_8003DDC0(void *, s32, s32, s32);
s32 func_8003EAC0();
s32 func_8003EAE0(s32);
extern void *D_8004814C;
extern void *D_8006FB28;
extern s32 D_800DA1EC;
extern s8 D_800DA1ED;
extern s8 D_800DA1EE;
extern s8 D_800DA1EF;
extern s8 D_800DA1F0;
extern s8 D_800DA1F1;
extern s32 D_800DA1F4;
extern s32 D_800DA1F8;
void *osLeoDiskInit(void)
{
  s32 temp_a0;
  void *temp_s0;
  void *temp_v1;
  *((s8 *) (((char *) (&D_800DA1EC)) + 0)) = 2;
  D_800DA1F4 = 0xA5000000;
  D_800DA1ED = 3;
 do { D_800DA1F0 = 6; D_800DA1EE = 6; D_800DA1F1 = 1; D_800DA1EF = 2; *((s32 *) 0xA4600024) = 3; *((s32 *) 0xA4600028) = 6; *((s32 *) 0xA460002C) = 6; *((s32 *) 0xA4600030) = 2; D_800DA1F8 = 0; func_8003DDC0((&D_800DA1EC) + 0x10, 0x60, 0xA4600030, 0xA4600024); temp_s0 = (&D_800DA1EC) - 4; temp_v1 = D_8004814C; temp_a0 = func_8003EAC0(); D_8004814C = temp_s0; } while (0);
  D_8006FB28 = temp_s0;
  *((void **) (((char *) (&D_800DA1EC)) + (-4))) = temp_v1;
  func_8003EAE0(temp_a0);
  return temp_s0;
}
