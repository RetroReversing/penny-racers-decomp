#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
s32 func_8003DE60();
extern s32 D_8011F308;
extern s32 D_8011F310;
extern s32 D_8011F340;
extern s32 D_8012AA38;
s32 func_8012913C(u16 arg0, f32 arg1, s32 arg2, f32 arg3)
{
  f32 temp_fv1;
  f32 temp_fv1_2;
  s32 temp_a0;
  s32 temp_v0;
  s32 var_a1;
  s32 var_v0;
  s32 var_v1;
  s32 var_v1_2;
  u16 temp_a2;
  u16 var_s0;
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_3;
  var_s0 = arg0;
  temp_a2 = var_s0;
  var_a1 = 0;
  var_v1 = var_s0 & 0xFFFF;
  loop_1:
  temp_a0 = var_v1 * 0x64;

  temp_v1 = *((void **) (((char *) (*((void **) (((char *) (*((void **) (((char *) (*((&D_8011F340) + temp_a0))) + 4)))) + 4)))) + 4));
  temp_fv1 = *((&D_8011F308) - (-temp_a0));
  var_v0 = var_a1 & 0xFFFF;
  if ((((!(arg1 < (((f32) (*((s16 *) (((char *) temp_v1) + 0x40)))) + temp_fv1))) || ((var_v0 = var_a1 & 0xFFFF, !((((f32) (*((s16 *) (((char *) temp_v1) + 0x50)))) + temp_fv1) < arg1)))) || ((temp_fv1_2 = *((&D_8011F310) + temp_a0), var_v0 = var_a1 & 0xFFFF, !(arg3 < (((f32) (*((s16 *) (((char *) temp_v1) + 0x44)))) + temp_fv1_2))))) || ((var_v0 = var_a1 & 0xFFFF, !((((f32) (*((s16 *) (((char *) temp_v1) + 0x54)))) + temp_fv1_2) < arg3))))
  {
    temp_v0 = var_s0 & 0xFFFF;
    if (var_v0 == 0)
    {
      temp_v1_2 = *((&D_8011F340) + (temp_v0 * 0x64));
      if ((*((u16 *) (((char *) temp_v1_2) + 0xA))) != 0xFFFF)
      {
        var_s0 = *((u16 *) (((char *) temp_v1_2) + 0xA));
        var_v1_2 = var_s0 & 0xFFFF;
      }
      else
      {
        var_s0 = *((u16 *) (((char *) (*((&D_8011F340) + ((var_s0 & 0xFFFF) * 0x64)))) + 0xE));
        var_a1 = 1;
        goto block_12;
      }
    }
    else
    {
      temp_v1_3 = *((&D_8011F340) + (temp_v0 * 0x64));
      if ((*((u16 *) (((char *) temp_v1_3) + 0xE))) != 0xFFFF)
      {
        var_s0 = *((u16 *) (((char *) temp_v1_3) + 0xE));
        var_v1_2 = var_s0 & 0xFFFF;
      }
      else
      {
        var_s0 = *((u16 *) (((char *) (*((&D_8011F340) + ((var_s0 & 0xFFFF) * 0x64)))) + 0xA));
        var_a1 = 0;
        block_12:
        var_v1_2 = var_s0 & 0xFFFF;

      }
    }
    var_v1 = var_s0 & 0xFFFF;
    if (var_v1_2 == (temp_a2 & 0xFFFF))
    {
      var_s0 = temp_a2;
      func_8003DE60(&D_8012AA38, var_a1, temp_a2);
    }
    else
    {
      goto loop_1;
    }
  }
  return var_s0 & 0xFFFF;
}

