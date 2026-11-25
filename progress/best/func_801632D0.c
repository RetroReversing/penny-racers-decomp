#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_8013E364();
M2C_UNK func_8013E640(s32, s32, void *, M2C_UNK, f32, f32, f32, f32, f32, f32, s32);
M2C_UNK func_801D7028(s32, M2C_UNK);
M2C_UNK guMtxXFMF(void *, f32, M2C_UNK, M2C_UNK, f32 *, f32 *, f32 *);
extern u8 D_8011F2F0[];
typedef struct 
{
  u16 f0;
  u8 pad[122];
} Slot_8018D6C4;
extern Slot_8018D6C4 D_8018D6C4[];
extern M2C_UNK D_8018D727;
typedef struct 
{
  u16 f0;
  u8 pad[122];
} Slot_8018D730;
extern Slot_8018D730 D_8018D730[];
extern M2C_UNK D_802394D8;
extern M2C_UNK func_80163588;
char func_801632D0(void *arg0_in)
{
  void * arg0;
  f32 sp48;
  f32 sp4C;
  f32 sp50;
  s16 temp_v0_3;
  s32 temp_s0_2;
  s32 temp_s1;
  s32 temp_v0;
  s32 __repair_phase_temp_v0;
  s32 var_s3;
  u16 temp_s0;
  s32 temp_v1;
  u32 temp_s5;
  void *temp_s6;
  M2C_UNK *__base_D_8018D727;
  float temp;
  temp_s6 = ((*((u16 *) (((s8 *) arg0) + 2))) * 0x64) + (D_8011F2F0);
  arg0 = arg0_in;
  __base_D_8018D727 = &D_8018D727;
  if ((((*((s32 *) (((s8 *) arg0) + 0x898))) == 1) && ((temp_v1 = *((u16 *) (((s8 *) arg0) + 0x560)), (temp_v1 & 8) == 0))) && ((var_s3 = 0, ((temp_v1 & 7) < 7) != 0)))
  {
    for (;;)
    {
      temp_s5 = (*((u16 *) (((s8 *) arg0) + 0x560))) & 7;
      if ((temp_s5 < 7U) && ((*((s16 *) (((s8 *) arg0) + 0x55E))) != 0))
      {
        __repair_phase_temp_v0 = func_8013E364();
        temp_s0 = __repair_phase_temp_v0 & 0xFFFF;
        if (temp_s0 != 0xFFFF)
        {
          guMtxXFMF(arg0 + 0x6D4, (f32) (((var_s3 & 0xFFFF) * 0x1E) - 0xF), 0x3F800000, 0, &sp48, &sp4C, &sp50);
          temp = 0.0f;
          temp_v0 = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, &D_802394D8, &func_80163588, 0, temp, temp, temp, temp, temp, temp, *((f32 *) (((s8 *) temp_s6) + 0x30)), *((f32 *) (((s8 *) temp_s6) + 0x34)), *((f32 *) (((s8 *) temp_s6) + 0x38)));
          if (((u32) ((temp_v0 + 2) & 0xFFFF)) < 2U)
          {
            func_8013E49C(temp_s0);
            return;
          }
          *((u16 *) (((s8 *) arg0) + 0x560)) = (u16) (((*((u16 *) (((s8 *) arg0) + 0x560))) & 0xF8) | (temp_s5 + 1));
          temp_s0_2 = __repair_phase_temp_v0 & 0xFFFF;
          temp_s1 = temp_v0 & 0xFFFF;
          func_8013E640(temp_s0_2, temp_s1, arg0, 0x40, sp48, sp4C, sp50, (*((f32 *) (((s8 *) arg0) + 0x7C0))) + sp48, (*((f32 *) (((s8 *) arg0) + 0x7C4))) + sp4C, (*((f32 *) (((s8 *) arg0) + 0x7C8))) + sp50, 0xC8);
          temp_v0 = temp_s0_2 * 0x7C;
          *((temp_v0 + __base_D_8018D727) + (*((u16 *) (((s8 *) arg0) + 4)))) = 1;
          D_8018D730[temp_s0_2].f0 = 8.0f;
          D_8018D6C4[temp_s0_2].f0 = arg0;
          func_801D7028(temp_s1, 0x2F);
          temp_v0_3 = *((s16 *) (((s8 *) arg0) + 0x55E));
          if (temp_v0_3 > 0)
          {
            *((s16 *) (((s8 *) arg0) + 0x55E)) = (s16) (temp_v0_3 - 1);
          }
          goto block_11;
        }
      }
      else
      {
        block_11:
        var_s3 += 1;

        if (((u32) (var_s3 & 0xFFFF)) >= 2U)
        {
        }
        else
        {
          continue;
        }
      }
      break;
    }

  }
}

