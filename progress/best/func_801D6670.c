#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
inline static u16 __repair_inline(u16 a)
{
  return a;
}

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
s32 func_801D651C();
s32 func_801D656C();
s32 func_801D663C();
extern char D_801D75E6[];
typedef struct 
{
  s16 f0;
  u8 pad[42];
} Slot_801D7DF4;
extern Slot_801D7DF4 D_801D7DF4[];
extern char D_801D7E00[];
typedef struct 
{
  u16 f0;
  u8 pad[2286];
} Slot_8022A770;
extern Slot_8022A770 D_8022A770[];
extern char D_8022AD64[];
extern char D_8022AD66[];
extern char D_8022AD68[];
extern char D_8022AD6C[];
extern char D_8022AD70[];
void func_801D6670(void)
{
  char *__base_D_801D7E00;
  u8 *__base_D_801D75E6;
  s32 __index_D_801D75E6;
  s32 sp14;
  f32 temp_fs0;
  s16 temp_a0;
  s32 temp_s0;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 var_s4;
  s32 var_s7;
  s16 var_v0_3;
  s32 var_v0_4;
  s32 var_v1;
  s16 var_v1_2;
  s32 temp_s3;
  u16 temp_v0;
  u16 var_a2;
  u32 var_v0;
  u32 var_v0_2;
  __base_D_801D75E6 = 0;
  var_s7 = 0;
  var_v0 = 0 & 0xFFFF;
  do
  {
    if ((D_8022A770[var_v0].f0 != 0xFF) & (var_v0 < 6U))
    {
      sp14 = (var_s7 & 0xFFFF) * 0x8F0;
      var_v1 = 0 & 0xFFFF;
      var_s4 = 0;
      do
      {
        if (temp_a0)
        {
          temp_s0 = (var_v1 * 0x38) + ((var_s7 & 0xFFFF) * 0x8F0);
          temp_s3 = __repair_inline(*((u16 *) (D_8022AD66 + temp_s0)));
          var_a2 = *((u16 *) (D_8022AD68 + temp_s0));
          temp_fs0 = *((f32 *) (D_8022AD6C + temp_s0));
          temp_v0 = *((volatile u16 *) (D_8022AD70 + temp_s0));
          temp_a0 = *((volatile s16 *) (D_8022AD64 + temp_s0));
        }
        else
        {
          temp_s0 = (var_v1 * 0x38) + sp14;
          temp_s3 = __repair_inline(*((u16 *) (D_8022AD66 + temp_s0)));
          var_a2 = *((u16 *) (D_8022AD68 + temp_s0));
          temp_fs0 = *((f32 *) (D_8022AD6C + temp_s0));
          temp_v0 = *((volatile u16 *) (D_8022AD70 + temp_s0));
          temp_a0 = *((volatile s16 *) (D_8022AD64 + temp_s0));
        }
        if (temp_a0 != (-1))
        {
          if (((s16) temp_v0) != (-1))
          {
            var_s4 += 1;
            func_801D651C(temp_a0, (s16) temp_v0, var_a2, -1);
            __base_D_801D7E00 = D_801D7E00;
            *(__base_D_801D7E00 + ((*((s16 *) (D_8022AD64 + temp_s0))) * 0x2C)) = 0.6f;
            *((u16 *) (D_8022AD70 + temp_s0)) = -1;
            var_v0_2 = var_s4 & 0xFFFF;
          }
          else
          {
            if (((~D_801D7DF4[temp_a0].f0) == 0) & ((~((s16) temp_s3)) != 0))
            {
              var_v0_3 = var_a2;
              if (((s16) var_a2) == 2)
              {
                __index_D_801D75E6 = ((s16) temp_s3) * 0xC;
                __base_D_801D75E6 = D_801D75E6;
                func_801D656C(temp_a0, (s16) temp_s3, *(__base_D_801D75E6 + __index_D_801D75E6));
                func_801D651C(temp_a0, (s16) temp_s3);
                var_a2 = 0;
                *((u16 *) (D_8022AD68 + (((var_s4 & 0xFFFF) * 0x38) + ((var_s7 & 0xFFFF) * 0x8F0)))) = 0;
                goto block_9;
              }
            }
            else
            {
              block_9:
              var_v0_3 = var_a2;

            }
            temp_v1_2 = var_v0_3;
            if (temp_v1_2 == 1)
            {
              func_801D663C(temp_a0);
              var_v0_4 = ((var_s4 & 0xFFFF) * 0x38) + ((var_s7 & 0xFFFF) * 0x8F0);
              *((u16 *) (D_8022AD66 + var_v0_4)) = -1;
              *((u16 *) (D_8022AD68 + var_v0_4)) = 0;

              var_v1_2 = temp_a0;
            }
            else
              if (temp_v1_2 != 2)
            {
              var_v1_2 = temp_a0;
            }
            else
            {
              func_801D656C(temp_a0, (s16) temp_s3, *((s16 *) (D_801D75E6 + (((s16) temp_s3) * 0xC))));
              var_v0_4 = ((var_s4 & 0xFFFF) * 0x38) + ((var_s7 & 0xFFFF) * 0x8F0);
              *((u16 *) (D_8022AD68 + var_v0_4)) = 0;

              var_v1_2 = temp_a0;
            }
            if (var_s7 || temp_a0)
            {
              *(__base_D_801D7E00 + ((var_v1_2) * 0x2C)) = temp_fs0;
              goto block_17;
            }
            else
            {
              *(__base_D_801D7E00 + ((var_v1_2) * 0x2C)) = temp_fs0;
              goto block_17;
            }
          }
        }
        else
        {
          block_17:
          var_s4 += 1;

          var_v0_2 = var_s4 & 0xFFFF;
        }
        var_v1 = var_s4 & 0xFFFF;
      }
      while (var_v0_2 < 4U);
    }
    var_s7 += 1;
    var_v0 = var_s7 & 0xFFFF;
  }
  while (((u32) (var_s7 & 0xFFFF)) < 7U);
}

