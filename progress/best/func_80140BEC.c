extern s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
extern s32 func_8013E364(void);
extern void func_8013E49C(s32, s32);
extern void func_8013E818(s32, s32, s32, s32, f32, f32, s32);
extern f32 D_80168814[];
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_8018D6C4[];
extern u8 D_8018D730[];
extern s32 D_8022A770;
extern s32 D_802397E4;
extern s32 func_80140E0C;

void func_80140BEC(s32 arg0)
{
int __repair_constant = 0x80;

  s32 var_s0;
  s32 temp_s1;
  s32 temp_v0;
  s32 temp_v0_3;
  s32 temp_a1;
  u8 *temp_v1;

  var_s0 = 0;
  __repair_rows: {
    temp_v0 = func_8013E364();
    temp_s1 = temp_v0 & 0xFFFF;
    if (temp_s1 != 0xFFFF) {
      temp_v0_3 = func_800DE41C(0, 0xF, 1, 0, 0x51, 0xFF, &D_802397E4, &func_80140E0C, 0,
        D_80168814[var_s0 * 3], D_80168814[var_s0 * 3 + 1] - 20.0f, D_80168814[var_s0 * 3 + 2], 0, 0, 0, 1.0f, 1.0f, 1.0f);
      temp_a1 = temp_v0_3 & 0xFFFF;
      if (((u32)((temp_v0_3 + 2) & 0xFFFF)) >= 2U) {
        temp_v1 = D_8011F2F0 + temp_a1 * 0x64;
        *(s16 *)(temp_v1 + 8) = __repair_constant;
        *(s16 *)(temp_v1 + 6) = __repair_constant;
        *(s16 *)(temp_v1 + 4) = __repair_constant;
        *(s16 *)(temp_v1 + 2) = __repair_constant;
        *(s16 *)(temp_v1 + 0x3E) = 0;
        *(s16 *)(temp_v1 + 0x40) = 0x64 - var_s0 * 0xA;
        func_8013E818(temp_s1, temp_a1, 0x40, 0, 0.0f, 0.0f, 0);
        *(f32 *)(D_8018D730 + temp_s1 * 0x7C) = 35.0f;
        *(s32 *)(D_8018D6C4 + temp_s1 * 0x7C) = (s32)&D_8022A770;
        var_s0 += 1;
      } else {
        func_8013E49C(temp_v0 & 0xFFFF, temp_a1);
        var_s0 += 1;
      }
    } else {
      var_s0 += 1;
    }
  }
if (var_s0 < 4) goto __repair_rows;
  D_8011F2FD[(arg0 & 0xFFFF) * 0x64] = 2;
}
