extern u8 D_8011F350[];
extern u8 D_8011F2F0[];
extern u8 D_8011F2F2[];
extern u8 D_8011F2FD[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern u8 D_8011F33C[];
extern u8 D_80168408[];
extern u8 D_8018D6C4[];
extern u8 D_802378B4[];
extern u8 D_802390C8[];
extern f64 D_801839D0;
extern f64 D_801839D8;
s32 func_8013E364(void);
s32 func_8013E49C(u16 arg0);
void func_801D7028(s32 arg0, s32 arg1);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, u32, s32, f32, f32, f32);
void func_8013E640(s32, s32, void *, s32, s32, f32, s32, f32, f32, f32, s32);
void guMtxXFMF(void *, s32, f32, f32, f32 *, f32 *, f32 *);
void func_80163E5C(void);
void func_8016410C(void);
void func_80164324(void);
void func_80163A38(s32 arg0)
{
  f32 sp48;
  f32 sp4C;
  f32 sp50;
  u8 *racer;
  u8 *rec;
  u8 *obj;
  s32 id;
  s32 res;
 do { racer = *((void **) (D_8011F350 + ((arg0 & 0xFFFF) * 0x64))); rec = (char *) D_8011F2F0; rec += (s32) ((*((u16 *) (racer + 2))) * 0x64); obj = *((void **) (rec + 0x244)); id = func_8013E364() & 0xFFFF; if (id != 0xFFFF) { res = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, D_80168408, func_80163E5C, NULL, *((f32 *) (rec + 0x18)), (*((f32 *) (rec + 0x1C))) + 15.0f, *((f32 *) (rec + 0x20)), 0, *((u32 *) (rec + 0x28)), 0, 2.0f * (*((f32 *) (rec + 0x30))), 2.0f * (*((f32 *) (rec + 0x34))), 2.0f * (*((f32 *) (rec + 0x38)))) & 0xFFFF; if (((u32) ((res + 2) & 0xFFFF)) < 2U) { func_8013E49C(id); return; } *((u16 *) (racer + 0x560)) = ((*((u16 *) (racer + 0x560))) & 0xF8) | (((*((u16 *) (racer + 0x560))) & 7) + 1); func_801D7028(res, 0x30); do { guMtxXFMF(racer + 0x6D4, 0, 30.0f, (f32) ((((f64) (*((f32 *) (racer + 0x774)))) * D_801839D0) + D_801839D8), &sp48, &sp4C, &sp50); } while (0); func_8013E640(id, res, racer, 0, 0, 15.0f, 0, sp48, sp4C, sp50, 0x78); *((void **) (D_8018D6C4 + (id * 0x7C))) = racer; if ((*((s16 *) (racer + 0x55E))) > 0) { *((s16 *) (racer + 0x55E)) = (*((s16 *) (racer + 0x55E))) - 1; } if ((*((s16 *) (racer + 0x55E))) == 0) { *((void **) (obj + 4)) = D_802378B4; } guMtxXFMF(racer + 0x6D4, 0, 30.0f, -40.0f, &sp48, &sp4C, &sp50); res = func_800DE41C(0, 0, 1, 0, 0x5B, 0x9B, D_802390C8, func_8016410C, func_80164324, sp48 + (*((f32 *) (rec + 0x18))), sp4C + (*((f32 *) (rec + 0x1C))), sp50 + (*((f32 *) (rec + 0x20))), 0, 0, 0, 0.08f, 0.08f, 0.08f); if (((u32) ((res + 2) & 0xFFFF)) >= 2U) { u8 *p = D_8011F2F0 + ((res & 0xFFFF) * 0x64); *((u16 *) (p + 8)) = 0x40; *((u16 *) (p + 6)) = 0x40; *((u16 *) (p + 4)) = 0x40; *((u16 *) (D_8011F2F2 + ((res & 0xFFFF) * 0x64))) = 0x40; *((f32 *) (D_8011F334 + ((res & 0xFFFF) * 0x64))) = *((f32 *) (racer + 0x7C0)); *((f32 *) (D_8011F338 + ((res & 0xFFFF) * 0x64))) = ((*((f32 *) (racer + 0x7C4))) * 0.8f) + 1.0f; *((f32 *) (D_8011F33C + ((res & 0xFFFF) * 0x64))) = *((f32 *) (racer + 0x7C8)); } *((u8 *) (D_8011F2FD + ((arg0 & 0xFFFF) * 0x64))) = 2; } } while (0);
}
