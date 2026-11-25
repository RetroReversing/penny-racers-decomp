inline static s8 __repair_inline(s8 a)
{
  return a;
}

extern char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern volatile unsigned char *D_801C7AB0;
extern volatile unsigned short D_801C7AC0[];
inline static int inline_fn(unsigned short arg0)
{
  return (arg0 & 0xFF) * 5;
}

inline static int inline_fn2(int arg0)
{
  return arg0;
}

inline static char inline_fn23(char *arg0)
{
  return *arg0;
}

inline static int inline_fn234(int arg0)
{
  return arg0;
}

void func_801C3DC8(s32 arg0_in, u8 *arg1, s8 *arg2, s8 *arg3)
{
  s32 arg0;
  s32 temp_a0_2;
  s32 __repair_phase_temp_a0_2;
  s32 temp_v0_2;
  s32 var_v0_2;
  unsigned char var_v0;
  unsigned short var_v1;
  s8 var_v0_3;
  unsigned short temp_a1;
  u8 var_a0;
  do
  {
    s32 __repair_phase_temp_a0_2_arm;
    arg0 = arg0_in;
    if (((*(D_801C7083 + ((arg0 & 0xFF) * 5))) == 0) || ((__repair_phase_temp_a0_2_arm = (arg0 & 0xFF) * 5, temp_a1 = *((((*(D_801C7083 + __repair_phase_temp_a0_2_arm)) * 0x18) + D_801C7AC0) + (*(D_801C7082 + __repair_phase_temp_a0_2_arm))), (temp_a1 & 0xFF) == 0xFF)))
    {
      *arg2 = 0x7F;
      *arg1 = 0x7F;
      return;
    }
  }
  while (0);
  if ((*D_801C7AB0) == 3)
  {
    var_a0 = *(D_801C7084 + ((temp_a1 & 0xFF) * 5));
    var_v0 = var_a0 - 5;
  }
  else
  {
    var_a0 = (*(D_801C7084 + ((temp_a1 & 0xFF) * 5))) - 0x2E;
    var_v0 = var_a0 - 5;
  }
  temp_a0_2 = arg0_in & 0xFF;
  if ((((u32) (var_v0 & 0xFF)) < 5U) || ((temp_a0_2 = arg0 & 0xFF, ((((((u32) ((unsigned char) (var_a0 - 0x20))) + 1) - 1) <= (5U - 1)) | (((s8) var_a0) == 0x2A)) != 0)))
  {
    {
      s32 __repair_value;
      __repair_value = temp_a0_2 * 5; temp_a0_2 = __repair_value;
    }
    if ((*(D_801C7081 + temp_a0_2)) == (*(D_801C7081 + ((temp_a1 & 0xFF) * 5))))
    {
      *arg1 = *(D_801C7082 + temp_a0_2);
      var_v0_3 = __repair_inline((*(D_801C7083 + temp_a0_2)) - 1);
      goto block_19;
    }
  }
  else
    if (((u32) ((unsigned char) (var_a0 - 0xA))) < 6U)
  {
    __repair_phase_temp_a0_2 = (arg0_in & 0xFF) * 5;
    if ((*(D_801C7081 + __repair_phase_temp_a0_2)) == (*(D_801C7081 + ((temp_a1 & 0xFF) * 5))))
    {
      *arg1 = *(D_801C7082 + __repair_phase_temp_a0_2);
      *arg2 = (*(D_801C7083 + __repair_phase_temp_a0_2)) - 1;
      *arg3 = 0xFF;
    }
  }
  else
    if ((((u32) ((var_a0 - 0x25) & 0xFF)) < 5U) && ((((var_v1 = arg0 & 0xFF, inline_fn23(D_801C7081 + ((arg0_in & 0xFF) * 5)) == 0x3C)) && ((var_v1 = arg0 & 0xFF, (*(D_801C7081 + inline_fn(temp_a1))) == 0))) || ((((unsigned char) (*(D_801C7081 + inline_fn2(var_v1 * 5)))) == 0x78) && ((*(D_801C7081 + inline_fn234((temp_a1 & 0xFF) * 5))) == 0x3C))))
  {
    ;
    *arg1 = *(D_801C7082 + ((arg0 & 0xFF) * 5));
    var_v0_3 = (*(D_801C7083 + temp_v0_2)) - 1;
    block_19:
    *arg2 = var_v0_3;

    *arg3 = 0;
  }
}

