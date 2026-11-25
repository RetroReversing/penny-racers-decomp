s32 func_80127030(s32 *, s32, s32, s32, s32, s32, s32);
s8 func_801270B0(s32, s32, s32, s32, s32, s32);
s32 func_80127148(s32 *, s32 *, s32 *);
extern s32 D_8012AB40;
extern s32 D_8012AB4C;
extern s32 D_8012AB58;
extern s32 D_8012AB64;
extern volatile short D_8012AB7C;
inline static s32 inline_fn(s32 arg0)
{
  return arg0;
}

inline static s32 inline_fn2(s32 arg0)
{
  return arg0;
}

s32 func_801271A0(void)
{
  s32 *__base_D_8012AB40;
  union 
  {
    unsigned char bytes[128];
    struct 
    {
      s32 value;
    } view_sp20;
    struct 
    {
      unsigned char pad[4];
      s32 value;
    } view_sp24;
    struct 
    {
      unsigned char pad[8];
      s32 value;
    } view_sp28;
    struct 
    {
      unsigned char pad[16];
      s32 value;
    } view_sp30;
    struct 
    {
      unsigned char pad[20];
      s32 value;
    } view_sp34;
    struct 
    {
      unsigned char pad[24];
      s32 value;
    } view_sp38;
    struct 
    {
      unsigned char pad[32];
      s32 value;
    } view_sp40;
    struct 
    {
      unsigned char pad[36];
      s32 value;
    } view_sp44;
    struct 
    {
      unsigned char pad[40];
      s32 value;
    } view_sp48;
    struct 
    {
      unsigned char pad[48];
      s32 value;
    } view_sp50;
    struct 
    {
      unsigned char pad[52];
      s32 value;
    } view_sp54;
    struct 
    {
      unsigned char pad[56];
      s32 value;
    } view_sp58;
    struct 
    {
      unsigned char pad[64];
      s32 value;
    } view_sp60;
    struct 
    {
      unsigned char pad[68];
      s32 value;
    } view_sp64;
    struct 
    {
      unsigned char pad[72];
      s32 value;
    } view_sp68;
    struct 
    {
      unsigned char pad[80];
      s32 value;
    } view_sp70;
    struct 
    {
      unsigned char pad[84];
      s32 value;
    } view_sp74;
    struct 
    {
      unsigned char pad[88];
      s32 value;
    } view_sp78;
    struct 
    {
      unsigned char pad[96];
      s32 value;
    } view_sp80;
    struct 
    {
      unsigned char pad[100];
      s32 value;
    } view_sp84;
    struct 
    {
      unsigned char pad[104];
      s32 value;
    } view_sp88;
    struct 
    {
      unsigned char pad[112];
      s32 value;
    } view_sp90;
    struct 
    {
      unsigned char pad[116];
      s32 value;
    } view_sp94;
    struct 
    {
      unsigned char pad[120];
      s32 value;
    } view_sp98;
  } m2c_initial_frame;
  s32 var_v0;
  s8 temp_s0;
  s8 temp_v0;
  do
  {
    func_80127148(&m2c_initial_frame.view_sp20.value, &D_8012AB4C, &D_8012AB64);
  }
  while (0);
  func_80127148(&m2c_initial_frame.view_sp30.value, &D_8012AB7C, &D_8012AB64);
  func_80127030(&m2c_initial_frame.view_sp80.value, m2c_initial_frame.view_sp20.value, m2c_initial_frame.view_sp24.value, m2c_initial_frame.view_sp28.value, m2c_initial_frame.view_sp30.value, m2c_initial_frame.view_sp34.value, m2c_initial_frame.view_sp38.value);
  __repair_rows:
  {
    func_80127148(&m2c_initial_frame.view_sp90.value, &D_8012AB58, &D_8012AB64);
  }

  if (0)
  {
    goto __repair_rows;
  }
  var_v0 = 0 & 0xFF;
  if (func_801270B0(m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value, inline_fn(m2c_initial_frame.view_sp80.value), m2c_initial_frame.view_sp84.value, m2c_initial_frame.view_sp88.value) == (-1))
  {
    __base_D_8012AB40 = &D_8012AB40;
    if (((unsigned long) (&D_8012AB40)) & 0x100)
    {
      func_80127148(&m2c_initial_frame.view_sp90.value, &D_8012AB40, &D_8012AB64);
    }
    else
    {
      func_80127148(&m2c_initial_frame.view_sp90.value, &D_8012AB40, &D_8012AB64);
    }
    var_v0 = 0 & 0xFF;
    do
    {
      if (func_801270B0(m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value, m2c_initial_frame.view_sp80.value, m2c_initial_frame.view_sp84.value, m2c_initial_frame.view_sp88.value) == 1)
      {
        func_80127148(&m2c_initial_frame.view_sp40.value, &D_8012AB58, &D_8012AB40);
        func_80127148(&m2c_initial_frame.view_sp50.value, &D_8012AB64, &D_8012AB40);
        func_80127148(&m2c_initial_frame.view_sp60.value, &D_8012AB4C, &D_8012AB40);
        do
        {
          func_80127148(&m2c_initial_frame.view_sp70.value, &D_8012AB7C, &D_8012AB40);
        }
        while (0);
        func_80127030(&m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp60.value, m2c_initial_frame.view_sp64.value, m2c_initial_frame.view_sp68.value, m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp74.value, m2c_initial_frame.view_sp78.value);
        temp_s0 = func_801270B0(m2c_initial_frame.view_sp40.value, m2c_initial_frame.view_sp44.value, m2c_initial_frame.view_sp48.value, m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value);
        do
        {
          func_80127030(&m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp50.value, m2c_initial_frame.view_sp54.value, m2c_initial_frame.view_sp58.value, m2c_initial_frame.view_sp60.value, m2c_initial_frame.view_sp64.value, m2c_initial_frame.view_sp68.value);
        }
        while (0);
        temp_v0 = func_801270B0(m2c_initial_frame.view_sp40.value, m2c_initial_frame.view_sp44.value, m2c_initial_frame.view_sp48.value, m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, m2c_initial_frame.view_sp98.value); var_v0 = 0 & 0xFF;
        if (temp_v0 == temp_s0)
        {
          func_80127030(&m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp70.value, m2c_initial_frame.view_sp74.value, m2c_initial_frame.view_sp78.value, m2c_initial_frame.view_sp50.value, m2c_initial_frame.view_sp54.value, m2c_initial_frame.view_sp58.value);
          var_v0 = (temp_v0 == func_801270B0(m2c_initial_frame.view_sp40.value, m2c_initial_frame.view_sp44.value, m2c_initial_frame.view_sp48.value, m2c_initial_frame.view_sp90.value, m2c_initial_frame.view_sp94.value, inline_fn2(m2c_initial_frame.view_sp98.value))) & 0xFF;
        }
      }
    }
    while (0);
  }
  return var_v0;
}

