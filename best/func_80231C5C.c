u16 func_800DE41C();
extern char D_8011F350[];
extern u16 D_8018BC3C;
extern char D_801CE928[];
extern char D_801CEC2C[];
extern s8 D_801D59A0;
void func_80231C5C(void)
{
  s32 temp_v0;
  s32 temp_v0_2;
 do { D_8018BC3C = func_800DE41C(0, 0, 3, 0, 0xA0, 0xFF, 0, &D_801CE928, &D_801CEC2C, 0, 0, 0, 0, 0, 0, 0); temp_v0 = D_8018BC3C * 0x64; *(D_8011F350 + temp_v0) = &D_801D59A0; D_801D59A0 = 0; *((s16 *) (((char *) (*(D_8011F350 + temp_v0))) + 2)) = 0x46; *((s16 *) (((char *) (*(D_8011F350 + temp_v0))) + 4)) = 0; *((u8 *) (((char *) (*(D_8011F350 + temp_v0))) + 6)) = 0xFF; *((u8 *) (((char *) (*(D_8011F350 + (D_8018BC3C * 0x64)))) + 7)) = 0xFF; *((u8 *) (((char *) (*(D_8011F350 + (D_8018BC3C * 0x64)))) + 8)) = 0xFF; *((u8 *) (((char *) (*(D_8011F350 + (D_8018BC3C * 0x64)))) + 9)) = 0xFF; } while (0);
  temp_v0_2 = D_8018BC3C * 0x64;
  *((s16 *) (((char *) (*(D_8011F350 + temp_v0_2))) + 0xA)) = 0;
  *((s16 *) (((char *) (*(D_8011F350 + temp_v0_2))) + 0xC)) = 0;
  *((s16 *) (((char *) (*(D_8011F350 + temp_v0_2))) + 0xE)) = 0x140;
  *((s16 *) (((char *) (*(D_8011F350 + temp_v0_2))) + 0x10)) = 0xF0;
}
