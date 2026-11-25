s32 func_800DE41C();
s32 func_8013E364();
extern char D_8011F2F0[];
extern char D_8011F350[];
extern char D_8018D6C0[];
extern char D_8018D6C4[];
extern char D_8018D6C8[];
extern char D_8018D6CC[];
extern unsigned int D_8018D6D4[];
extern char D_80239A20[];
extern s32 func_80165BDC;
extern s32 func_8016608C;
extern s32 func_801666E8;
void func_80165830(void *arg0, unsigned long long arg1)
{
  s32 *var_v0;
  s16 temp_v0_4;
  s32 temp_a0;
  s32 temp_a1;
  s32 temp_s0;
  s32 temp_v0;
  s32 temp_v0_3;
  void *temp_s2;
  temp_s0 = *((s32 *) (((char *) arg0) + 0x898));
  if (((temp_s0 == 1) && (!((*((u16 *) (((char *) arg0) + 0x560))) & 0xF))) && ((temp_v0 = func_8013E364(), temp_a1 = arg1 & 0xFFFF, (temp_v0 & 0xFFFF) != 0xFFFF)))
  {
    if (temp_a1 == 0)
    {
      var_v0 = &func_80165BDC;
      goto block_10;
    }
    if (temp_a1 != temp_s0)
    {
      goto block_11;
    }
    var_v0 = &func_8016608C;
    block_10:
    temp_v0_3 = func_800DE41C(0, 0U, 3, 0, var_v0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0);

    if (((u32) ((temp_v0_3 + 2) & 0xFFFF)) < 2U)
    {
      block_11:
      func_8013E49C(temp_v0 & 0xFFFF);

      return;
    }
    temp_a0 = (temp_v0 & 0xFFFF) * 0x7C;
    *((u16 *) (D_8018D6C8 + temp_a0)) = 10.0f;
    *((u16 *) (D_8018D6CC + temp_a0)) = 270.0f;
    *((u16 *) (D_8018D6C0 + temp_a0)) = *((u16 *) (((char *) arg0) + 2));
    *((u16 *) ((D_8018D6C4 - 4) + temp_a0)) = arg0;
    *((u16 *) (D_8018D6D4 - (-temp_a0))) = 0xFF;
    *((u8 *) (((char *) arg0) + 0x8D0)) = 0xF0;
    *((u16 *) (D_8011F350 + ((temp_v0_3 & 0xFFFF) * 0x64))) = temp_a0 + D_8018D6C0;
    temp_s2 = (25 * (4 * (*((u16 *) (((char *) arg0) + 2))))) + D_8011F2F0;
    temp_v0_4 = *((s16 *) (((char *) arg0) + 0x55E));
    if (temp_v0_4 > 0)
    {
      if (D_8018D6CC)
      {
        *((s16 *) (((char *) arg0) + 0x55E)) = (s16) (temp_v0_4 - 1);
      }
      else
      {
        *((s16 *) (((char *) arg0) + 0x55E)) = (s16) (temp_v0_4 - 1);
      }
    }
    if (temp_s0)
    {
      temp_a1 = arg1 & 0xFFFF;
    }
    else
    {
      temp_a1 = arg1 & 0xFFFF;
    }
    switch (temp_a1)
    {
      case 0:
        block_19:
      func_800DE41C(arg0, 0, *((u8 *) (((char *) arg0) + 3)), (long long) 1, 0);

        break;

      case 1:
        func_800DE41C(0, *((u8 *) (((char *) arg0) + 3)), 1, 0, (s32 *) 0x5B, 0xFF, D_80239A20, &func_801666E8, 0, *((f32 *) (((char *) temp_s2) + 0x18)), *((f32 *) (((char *) temp_s2) + 0x1C)), *((f32 *) (((char *) temp_s2) + 0x20)), 0, 0, 0, 0.1f, 0.05f, 0.1f);
        goto block_19;

    }

  }
}

