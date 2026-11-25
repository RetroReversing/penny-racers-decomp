inline static s8 __repair_inline(s8 a)
{
  return a;
}

extern unsigned char D_8021EEC0;
extern int D_8021EFA0;
extern float D_8021EECC;
extern unsigned char D_8021EEC3;
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, s32, f32, s32, s32, s32, s32, s32, f32, s32, s32);
s32 func_8014A870();
s32 func_8014B854();
s32 func_80211C08();
extern f64 D_8021DDC0;
extern f64 D_8021DDC8;
extern s8 D_8021E15F;
extern char D_8021E231[];
extern u8 D_8021F036[];
extern s32 func_80211A84;
void func_802117AC(void)
{
  unsigned char *__base_D_8021EEC0;
  int *__base_D_8021EFA0;
  register s32 temp_a0;
  long var_s0;
  unsigned int var_v1;
  s32 var_v0_3;
  register u32 var_v0;
  union 
  {
    float *pointer;
    u32 value;
  } __repair_phase_storage;
  __repair_phase_storage.pointer = &D_8021EECC;
  do
  {
    __base_D_8021EFA0 = &D_8021EFA0;
    if (!((*__base_D_8021EFA0) & 0x2000))
    {
      var_s0 = func_8014A870(0x14, 3, D_8021E15F);
    }
    else
    {
      var_s0 = 0;
    }
    if (var_s0 & 4)
    {
      __base_D_8021EEC0 = &D_8021EEC0;
      if ((*__base_D_8021EEC0) != 0)
      {
        *__base_D_8021EFA0 = (s32) ((*(&D_8021EFA0)) | 0x2000);
        do
        {
          func_8014B854(0x3B);
        }
        while (0);
        *__base_D_8021EEC0 = (u8) ((*__base_D_8021EEC0) - 1);
        func_800DE41C(0, 0, 3, 0, 0x50, 0, 0, &func_80211A84, 0, (f32) (((f64) (*__repair_phase_storage.pointer)) - D_8021DDC0), 0, 0, 0, 0, 0, -0.5f, 0, 0);
      }
    }
    var_v0 = var_s0 & 8;
    if (var_v0 && ((*__base_D_8021EEC0) != (D_8021EEC3 - 1)))
    {
      *__base_D_8021EFA0 = (s32) ((*__base_D_8021EFA0) | 0x2000);
      do
      {
        func_8014B854(0x3B);
      }
      while (0);
      *__base_D_8021EEC0 = (u8) ((*__base_D_8021EEC0) + 1);
      func_800DE41C(0, 0, 3, 0, 0x50, 0, 0, &func_80211A84, 0, (f32) (((f64) (*__repair_phase_storage.pointer)) + D_8021DDC8), 0, 0, 0, 0, 0, 0.5f, 0, 0);
    }
    do
    {
      temp_a0 = __repair_inline(*(D_8021E231 + ((D_8021E15F * 0x110) + (*__base_D_8021EEC0))));
    }
    while (0);
  }
  while (0);
  __repair_phase_storage.value = var_s0 & 2;
  if (var_s0 & 1)
  {
    *((u16 *) (D_8021F036 + temp_a0)) = (*(D_8021F036 + temp_a0)) + 1;
    __repair_phase_storage.value = var_s0 & 2;
    if (((((u8) (*(D_8021F036 + temp_a0))) - 1) + 1) > (0xAU - 1))
    {
      *(D_8021F036 + temp_a0) = 0;
    }
  }
  var_v1 = var_s0 & 3;
  if (__repair_phase_storage.value)
  {
    var_v1 = var_s0 & 3;
    *(D_8021F036 - (-temp_a0)) = (*(D_8021F036 + temp_a0)) - 1;
    if ((*(D_8021F036 + temp_a0)) == 0xFF)
    {
      *(D_8021F036 + temp_a0) = 9;
    }
  }
  if ((((unsigned) var_v1) != 0) & (((unsigned) temp_a0) != 0xD))
  {
    func_8014B854(0x3C);
  }
  var_v0_3 = var_s0 & 0x10;
  if (var_v0_3 != 0)
  {
    *__base_D_8021EFA0 &= 0xFFFF7FFF;
    do
    {
      func_8014B854(0x3B);
    }
    while (0);
  }
  if (__base_D_8021EEC0)
  {
    func_80211C08();
  }
  else
  {
    func_80211C08();
  }
}

