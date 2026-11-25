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
extern unsigned short D_8006FB10;
s32 func_80224030();
extern char D_8006FAF0[];
extern char D_802CC024[];
extern char D_802CC028[];
extern char D_802CC02C[];
extern char D_802CC030[];
extern char D_802CC544[];
extern char D_802CC548[];
extern char D_802CC54C[];
extern char D_802CC552[];
extern char D_802CF134[];
extern char D_802CF13A[];
extern char D_802CF7D4[];
extern char D_802CF7DA[];
extern char D_802D2B94[];
extern char D_802D2B9A[];
extern char D_802D2C7A[];
inline static int inline_fn(u16 *arg0)
{
  return (*arg0) * 0xC;
}

void func_80221670(void *arg0)
{
    u8 *__base_D_802CF7D4;
    s32 __index_D_802CF7D4;
  f32 temp_fv1;
  u16 var_s2;
  s32 temp_a0_2;
  s32 temp_v0;
  s32 temp_v1;
  s32 temp_v1_2;
  s16 var_a0;
  s32 var_a0_2;
  s32 var_a1_2;
  s32 var_s0;
  s32 var_s0_2;
  s32 var_v0;
  u16 temp_a0_3;
  u16 var_a1;
  u32 temp_v0_2;
  u32 temp_v1_3;
  u8 temp_a1;
  u8 temp_a1_2;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  void *temp_a1_3;
  *((u16 *) (((s8 *) arg0) + 0x232)) = (u16) (*((u16 *) (D_802D2B9A + inline_fn((u16 *) (((s8 *) arg0) + 0x534)))));
  *((f32 *) (((s8 *) arg0) + 0x760)) = (f32) (*((f32 *) (*((s32 *) (D_802D2B94 + inline_fn((u16 *) (((s8 *) arg0) + 0x534)))))));
  *((u16 *) (((s8 *) arg0) + 0x232)) += *((u16 *) (D_802CC552 + ((*((u16 *) (((s8 *) arg0) + 0x234))) * 0x14)));
  *((f32 *) (((s8 *) arg0) + 0x760)) += *((f32 *) (D_802CC54C + ((*((u16 *) (((s8 *) arg0) + 0x234))) * 0x14)));
  *((s32 *) (((s8 *) arg0) + 0x238)) = (s32) (*((s32 *) (D_802CC544 + ((*((u16 *) (((s8 *) arg0) + 0x234))) * 0x14))));
  *((s32 *) (((s8 *) arg0) + 0x23C)) = (s32) (*((s32 *) (D_802CC548 + ((*((u16 *) (((s8 *) arg0) + 0x234))) * 0x14))));
  if (D_8006FB10 == 2)
  {
    var_a1 = (*((u16 *) (((s8 *) arg0) + 0x242))) + 0xE;
  }
  else
  {
    var_a1 = *((u16 *) (((s8 *) arg0) + 0x242));
  }
  *((u16 *) (((s8 *) arg0) + 0x232)) += *((u16 *) (D_802CF7DA + ((var_a1 & 0xFFFF) * 0xC)));
  var_s0 = 0;
  __repair_rows_: {
    temp_v1 = var_s0 & 0xFFFF;
    __repair_phase_storage.pointer = arg0 + (temp_v1 * 0x10);
    temp_v0 = temp_v1 * 0x14;
    *((f32 *) (((s8 *) __repair_phase_storage.pointer) + 0x244)) = (f32) (*((f32 *) (D_802CC024 + temp_v0)));
    *((f32 *) (((s8 *) __repair_phase_storage.pointer) + 0x248)) = (f32) (*((f32 *) (D_802CC028 + temp_v0)));
    *((u8 *) (((s8 *) __repair_phase_storage.pointer) + 0x250)) = (u8) (*(D_802CC030 + temp_v0));
    var_s0 += 1;
    *((f32 *) (((s8 *) __repair_phase_storage.pointer) + 0x24C)) = (f32) (*((f32 *) (D_802CC02C + temp_v0)));
  }
if (((u32) (var_s0 & 0xFFFF)) < 0x2FU) goto __repair_rows_;
  temp_v1_2 = var_a1 & 0xFFFF;
  temp_a1 = *((u8 *) (*((s32 *) (D_802CF7D4 + (temp_v1_2 * 0xC)))));
  var_s0_2 = 0;
  if ((temp_a1 & 0xFFFF) != 0xFF)
  {
    var_a1_2 = temp_a1 * 0x10;
    __repair_rows:
    {
      temp_a1_3 = arg0 + var_a1_2;
      var_a1_2 = var_s0_2 & 0xFFFF;
    temp_a0_2 = (var_a1_2) * 0x14;
      *((f32 *) (((s8 *) temp_a1_3) + 0x244)) = (f32) (*((f32 *) (((s8 *) (temp_a0_2 + (*((s32 *) (D_802CF7D4 + inline_fn((u16 *) (((s8 *) arg0) + 0x242))))))) + 4)));
      *((f32 *) (((s8 *) temp_a1_3) + 0x248)) = (f32) (*((f32 *) (((s8 *) (temp_a0_2 + (*((s32 *) (D_802CF7D4 + inline_fn((u16 *) (((s8 *) arg0) + 0x242))))))) + 8)));
      *((u8 *) (((s8 *) temp_a1_3) + 0x250)) = (u8) (*((u8 *) (((s8 *) (temp_a0_2 + (*((s32 *) (D_802CF7D4 + inline_fn((u16 *) (((s8 *) arg0) + 0x242))))))) + 0x10)));
      *((f32 *) (((s8 *) temp_a1_3) + 0x24C)) = (f32) (*((f32 *) (((s8 *) (temp_a0_2 + (*((s32 *) (D_802CF7D4 + inline_fn((u16 *) (((s8 *) arg0) + 0x242))))))) + 0xC)));
      do
      {
        var_s0_2 += 1;
      }
      while (0);
      __index_D_802CF7D4 = (var_a1 & 0xFFFF) * 0xC;
      __base_D_802CF7D4 = D_802CF7D4;
      temp_a1_2 = *((u8 *) (((var_s0_2 & 0xFFFF) * 0x14) + (*((s32 *) (__base_D_802CF7D4 + __index_D_802CF7D4)))));
      var_a1_2 = temp_a1_2 * 0x10;
    }

    if ((temp_a1_2 & 0xFFFF) != 0xFF)
    {
      goto __repair_rows;
    }
  }
  temp_a0_3 = (*((u16 *) (((s8 *) arg0) + 0x232))) + (*((u16 *) (D_802D2C7A + inline_fn((u16 *) (((s8 *) arg0) + 0x536)))));
  *((u16 *) (((s8 *) arg0) + 0x232)) = temp_a0_3;
  *((u16 *) (((s8 *) arg0) + 0x232)) = (u16) (temp_a0_3 + (*((u16 *) (D_802CF13A + inline_fn((u16 *) (((s8 *) arg0) + 0x240))))));
  __repair_phase_storage.value = 0;
  var_s2 = 0;
  *((u16 *) (((s8 *) arg0) + 0x55C)) = 0U;
  var_a0 = 0;
  for (;;)
  {
    temp_fv1 = *((s32 *) ((func_80224030(var_a0) * 4) + (*((s32 *) (D_802CF134 + inline_fn((u16 *) (((s8 *) arg0) + 0x240)))))));
    var_a0_2 = (u32) temp_fv1;
    if (((u16) (*((u16 *) (((s8 *) arg0) + 0x55C)))) < ((u32) (var_a0_2 & 0xFFFF)))
    {
      *((u16 *) (((s8 *) arg0) + 0x55C)) = (u16) var_a0_2;
    }
    if (((u32) (var_a0_2 & 0xFFFF)) >= ((u32) (__repair_phase_storage.value & 0xFFFF)))
    {
      *((s16 *) (((s8 *) (((__repair_phase_storage.value & 0xFFFF) * 2) + arg0)) + 0x53C)) = var_s2;
      __repair_phase_storage.value += 1;
    }
    var_s2 += 4;
    if (((u32) (var_s2 & 0xFFFF)) < 0x3DU)
    {
      var_a0 = var_s2;
      if (((u32) (__repair_phase_storage.value & 0xFFFF)) < 0x10U)
      {
        continue;
      }
    }
    break;
  }

  temp_v0_2 = __repair_phase_storage.value & 0xFFFF;
  if (temp_v0_2 < 0x10U)
  {
    var_v0 = temp_v0_2 * 2;
    do
    {
      *((s16 *) (((s8 *) (var_v0 + arg0)) + 0x53C)) = 0x3C;
      __repair_phase_storage.value += 1;
      temp_v1_3 = __repair_phase_storage.value & 0xFFFF;
      var_v0 = temp_v1_3 * 2;
    }
    while (temp_v1_3 < 0x10U);
  }
}

