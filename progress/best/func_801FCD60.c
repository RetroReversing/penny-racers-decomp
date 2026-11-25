inline static int __repair_inline(unsigned short a, s32 b)
{
  return a < b;
}

extern unsigned short D_802002F2;
extern unsigned short D_802002F0;
extern unsigned short D_802002EE;
extern unsigned short D_802002EC;
extern unsigned short D_8006FB10;
s32 func_801CA140();
s32 func_801CA468();
s32 func_801CB74C();
s32 func_801CBDE8();
extern char D_8006FAF0[];
typedef struct 
{
  f32 f0;
  u8 pad[96];
} Slot_8011F308;
extern Slot_8011F308 D_8011F308[];
extern char D_8011F310[];
extern char D_8011F334[];
typedef struct 
{
  f32 f0;
  u8 pad[96];
} Slot_8011F33C;
extern Slot_8011F33C D_8011F33C[];
extern u8 D_80126FF6;
extern char D_801D4FC0[];
extern volatile unsigned int D_802002D0[];
extern char D_802002DC[];
extern char D_80203554[];
extern char D_80203558[];
extern char D_80220ED8[];
typedef struct 
{
  u16 f0;
  u8 pad[14];
} Slot_8022A772;
extern Slot_8022A772 D_8022A772[];
typedef struct 
{
  u8 f0;
  u8 pad[15];
} Slot_8022AFE9;
extern Slot_8022AFE9 D_8022AFE9[];
extern char D_80232840[];
extern u16 D_80233EC0;
inline static float inline_fn(int arg0)
{
  return (*((f32 *) (D_8011F310 + arg0))) / 30.0f;
}

inline static float inline_fn2(float arg0, float arg1)
{
  return arg0 + arg1;
}

void func_801FCD60(void **arg0)
{
  volatile u64 scratch;
  int __repair_literal;
  u8 *__base_D_8011F334;
  s32 __index_D_8011F334;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  u32 var_a1;
  s32 var_a1_2;
  s32 var_a2_2;
  s32 var_s0;
  s32 var_s0_2;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  register void *temp_v1;
  func_801CA140();
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 8;
  *((s32 *) (((char *) temp_v1) + 0)) = 0x06000000;
  *((s32 **) (((char *) temp_v1) + 4)) = D_80220ED8;
  if (D_80126FF6 == 0)
  {
    if (D_802002F2 != 0)
    {
      if (((u16) D_802002F0) < 0xDFU)
      {
        D_802002F0 = (u16) (D_802002F0 + 0x20);
      }
      else
      {
        goto block_6;
      }
    }
    else
      if (((u16) D_802002F0) >= 0x21U)
    {
      D_802002F0 = (u16) (D_802002F0 - 0x20);
    }
    else
    {
      block_6:
      D_802002F2 = (u16) (D_802002F2 ^ 1);

    }
    if (D_802002EE)
    {
      if (((u16) D_802002EC) < 0xFBU)
      {
        D_802002EC = (u16) (D_802002EC + 4);
      }
      else
      {
        goto block_12;
      }
    }
    else
      if (((u16) D_802002EC) >= 5U)
    {
      D_802002EC = (u16) (D_802002EC - 4);
    }
    else
    {
      block_12:
      D_802002EE = (u16) (D_802002EE ^ 1);

    }
  }
  func_801CA468(arg0);
  var_s0 = 0;
  __repair_literal = 2;
  if (((long long) ((s32) (*((u16 *) (D_80232840 + (D_8006FB10 * __repair_literal)))))) > 0)
  {
    do
    {
      __index_D_8011F334 = (D_80233EC0 + var_s0) * 0x64;
      __base_D_8011F334 = D_8011F334;
      temp_fv1 = ((*((f32 *) (__base_D_8011F334 + __index_D_8011F334))) / 30.0f) + 160.0f;
      var_a1 = (u32) temp_fv1;
      temp_fv1_2 = (D_8011F33C[D_80233EC0 + var_s0].f0 / 30.0f) + 120.0f;
      func_801CB74C(arg0, var_a1 & 0xFFFF, (!(temp_fv1_2 >= 2.1474836e9f)) ? ((s32) temp_fv1_2) : (((s32) (((s32) (temp_fv1_2 - 2.1474836e9f)) | 0x80000000)) & 0xFFFF), 8, D_802002DC, D_80203554);
      do
      {
        var_s0 += 1;
      }
      while (0);
    }
    while (var_s0 < ((s32) (*((D_8006FB10 * 2) + D_80232840))));
  }
  if (D_80233EC0)
  {
    func_801CA468(arg0, D_802002F0);
    var_s0_2 = 0;
  }
  else
  {
    func_801CA468(arg0, D_802002F0);
    var_s0_2 = 0;
  }
  do
  {
    var_v0 = 0 * 8;
  }
  while (0);
  do
  {
    temp_fv1_3 = (D_8011F308[D_8022A772[((var_v0 + var_s0_2) * 0x10) - var_s0_2].f0].f0 / 30.0f) + 160.0f;
    if (!(temp_fv1_3 >= 2.1474836e9f))
    {
      var_a1_2 = (s32) temp_fv1_3;
      var_v0_2 = var_s0_2 * 8;
    }
    else
    {
      var_a1_2 = ((s32) (temp_fv1_3 - 2.1474836e9f)) | 0x80000000;
      {
        s32 __repair_value;
        if (D_80203554)
        {
          __repair_value = var_s0_2 * 8;
          var_v0_2 = __repair_value;
        }
        else
        {
          __repair_value = var_s0_2 * 8;
          var_v0_2 = __repair_value;
        }
      }
    }
    temp_fv1_4 = inline_fn2(inline_fn(D_8022A772[((var_v0_2 + var_s0_2) * 0x10) - var_s0_2].f0 * 0x64), 120.0f);
    if (!(temp_fv1_4 >= 2.1474836e9f))
    {
      var_a2_2 = (s32) temp_fv1_4;
      var_v0_3 = var_s0_2 * 8;
    }
    else
    {
      var_a2_2 = (s32) (temp_fv1_4 - 2.1474836e9f); var_a2_2 = var_a2_2 | 0x80000000;
      do
      {
        var_v0_3 = var_s0_2 * 8;
      }
      while (0);
    }
    ++var_s0_2;
    func_801CBDE8(arg0, var_a1_2 & 0xFFFF, var_a2_2 & 0xFFFF, 8, *((D_8022AFE9[((var_v0_3 + var_s0_2) * 0x10) - var_s0_2].f0 * 4) + D_802002D0), 1, var_s0_2 & 0xFFFF);
    var_v0 = var_s0_2 * 8;
  }
  while (__repair_inline(var_s0_2, 6));
  if (D_8006FB10 || var_s0_2)
  {
    func_801CB74C(arg0, 0x18, 0x10, 8, D_801D4FC0, D_80203558);
    func_801CA468(arg0, D_802002EC);
  }
  else
  {
    func_801CB74C(arg0, 0x18, 0x10, 8, D_801D4FC0, D_80203558);
    func_801CA468(arg0, D_802002EC);
  }
}

