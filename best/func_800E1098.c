extern s32 D_800DB1B8[];
extern s32 D_800DE080;
extern u8 D_800E1852;
extern u16 D_800E23E0[];
extern s32 D_8011F060;
extern u8 D_8011F2E8;
extern u8 D_8011F2F1[];
extern u8 D_8011F2F2[];
extern u8 D_8011F2FD[];
extern u8 D_80126FF6;
extern u8 D_80126FF7;
extern s32 D_801F9950;
extern s32 D_801F9958;
extern u8 D_80221080[];
extern u16 func_800E1850;
void func_800DF428(s32, u16, s32, u32, f32, u32, f32, f32, f32);
void func_800DFD64(s32, u16, s32, u32, f32, u32, f32, f32, f32);
void func_800E0274(s32, u16, s32);
void func_800E0B8C(u32, f32, void *, s32 (*)[], u32);
void func_800E1098(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4)
{
  int __repair_literal;
  s32 sp28[4];
  s32 n;
  s32 i;
  s32 s1;
  s32 temp_v0;
  void *temp_s0;
  void *temp_s2;
  void *temp_s3;
  void *temp_a0;
  void *temp_v1;
  u16 temp_a1;
  u16 temp_a1_2;
  u8 mode;
  n = 0;
  for (i = 0; i < 4; i++)
  {
    __repair_literal = 8;
    if ((*((s32 *) ((((u8 *) D_800DB1B8) + 0x2108) + (i * __repair_literal)))) != 0)
    {
      sp28[n] = i;/*__repair_loop_weight*/do {
      n++;} while (0);
    }
  }

  i = (*((s32 *) ((((u8 *) D_800DB1B8) + 0x210C) + (sp28[arg4] * 0x28)))) * 0x24;
 do { temp_s0 = ((u8 *) D_80221080) + i; } while (0);
  temp_a0 = ((u8 *) D_80221080) + 0x24;
  temp_s3 = ((u8 *) temp_a0) + i;
  temp_s2 = ((u8 *) (D_80221080 - 0x24)) + i;
  if (func_800E1850 != 0xFFFF)
  {
    D_8011F060 = arg2;
    D_80126FF6 = arg3;
    D_8011F2E8 = arg4;
    D_80126FF7 = 0xFF;
    s1 = 0;/*__repair_call_balance*/if(n){
    func_800E0B8C(*((u32 *) temp_s0), *((f32 *) (((u8 *) temp_s0) + 4)), temp_a0, (s32 (*)[]) sp28, *((u32 *) (((u8 *) temp_s0) + 8)));}else{
    func_800E0B8C(*((u32 *) temp_s0), *((f32 *) (((u8 *) temp_s0) + 4)), temp_a0, (s32 (*)[]) sp28, *((u32 *) (((u8 *) temp_s0) + 8)));}
    for (;;)
    {
      if (D_800E23E0[s1] == 0xFFFF)
      {
        break;
      }
      s1++;
    }

  }
}
