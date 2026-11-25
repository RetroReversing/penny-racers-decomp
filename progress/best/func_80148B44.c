extern u8 D_80189CB8;
extern s32 D_80189CB9;
extern u8 D_80189CC0;
extern s32 D_80189CC1;
extern s32 D_8018D140;
extern s32 D_8018D26C;
void func_80148B44(s32 arg0, s32 arg1)
{
  s32 *__base_D_80189CB9;
  s32 *__base_D_8018D140;
  u8 __repair_frame[16];
  s32 var_a1;
  s32 __repair_phase_var_a1;
  s32 __repair_phase___repair_phase_var_a1;
  s32 var_a3_2;
  s32 var_t0;
  s32 var_v0_2;
  s32 var_v0_4;
  s32 var_v0_5;
  char var_v0_7;
  u16 *temp_a0;
  union 
  {
    u16 *pointer;
    s32 value;
  } __repair_phase_storage;
  u16 *temp_t1_2;
  u16 temp_a2;
  u16 temp_a2_2;
  u16 temp_v1;
  u16 temp_v1_2;
  u16 temp_v1_3;
  var_t0 = 0;
  var_a1 = 0 * 2;
  do
  {
    __base_D_8018D140 = &D_8018D140;
    temp_v1 = *(var_a1 + __base_D_8018D140);
    if (temp_v1 != 0x3FFF)
    {
      if ((((s32) temp_v1) + 1) <= 0x4000)
      {
        if (temp_v1 != 0x2FFF)
        {
          __repair_phase_var_a1 = 0;
          goto block_7;
        }
      }
      else
        if (temp_v1 != 0x4FFF)
      {
        __repair_phase_var_a1 = 0;
        block_7:
        __repair_phase_storage.pointer = (var_t0 * 2) + __base_D_8018D140;

        var_v0_2 = 0 * 2;
        do
        {
          {
            temp_a2 = *__repair_phase_storage.pointer;
            __repair_phase_var_a1 += 1;
            if (((*(var_v0_2 + (&D_8018D26C))) & 0xFFF) == (temp_a2 & 0xFFF))
            {
              *__repair_phase_storage.pointer = temp_a2 | 0x1000;
            }
            var_v0_2 = __repair_phase_var_a1 * 2;
          }
        }
        while ((var_a1 = __repair_phase_var_a1) < 0x96);
      }
    }
    var_t0 += 1;
    var_a1 = var_t0 * 2;
  }
  while ((var_v0_2 = var_t0) < 0x96);
  __base_D_80189CB9 = &D_80189CB9;
  *((u8 *) (((char *) __base_D_80189CB9) + 0)) = 0U;
  __repair_phase_storage.value = 0;
  if ((((s32) (*((u8 *) (((char *) __base_D_80189CB9) + (-1))))) - 1) >= 0)
  {
    __repair_phase_var_a1 = 0 * 2;
    do
    {
      __repair_phase_storage.value += 1;
      if (!((*(__repair_phase_var_a1 + __base_D_8018D140)) & 0xF000))
      {
        *((u8 *) (((char *) __base_D_80189CB9) + 0)) = (u8) ((*((u8 *) (((char *) __base_D_80189CB9) + 0))) + 1);
      }
      __repair_phase_var_a1 = __repair_phase_storage.value * 2;
    }
    while (__repair_phase_storage.value < ((s32) D_80189CB8));
  }
  var_a1 = 0;
  var_v0_4 = 0 * 2;
  do
  {
    temp_v1_2 = *(var_v0_4 + (&D_8018D26C));
    if (temp_v1_2 != 0x3FFF)
    {
      if ((((s32) temp_v1_2) - 1) < (0x4000 - 1))
      {
        if (temp_v1_2 != 0x2FFF)
        {
          var_a3_2 = 0;
          goto block_24;
        }
      }
      else
        if (temp_v1_2 != 0x4FFF)
      {
        var_a3_2 = 0;
        block_24:
        temp_t1_2 = (var_a1 * 2) + (&D_8018D26C);

        var_v0_5 = 0 * 2;
        do
        {
          temp_a2_2 = *temp_t1_2;
          var_a3_2 += 1;
          if (((*(var_v0_5 + __base_D_8018D140)) & 0xFFF) == (temp_a2_2 & 0xFFF))
          {
            do
            {
              *temp_t1_2 = temp_a2_2 | 0x1000;
            }
            while (0);
          }
          var_v0_5 = ((char) var_a3_2) * 2;
        }
        while ((var_v0_4 = var_a3_2) < 0x96);
      }
    }
    do
    {
      do
      {
        do
        {
          var_a1 += 1;
        }
        while (0);
      }
      while (0);
    }
    while (0);
    var_v0_4 = var_a1 * 2;
  }
  while ((var_a3_2 = var_a1) < 0x96);
  *((u8 *) (((char *) (&D_80189CC1)) + 0)) = 0U;
  var_a1 = 0;
  if (((s32) (*((u8 *) (((char *) (&D_80189CC1)) + (-1))))) > 0)
  {
    __repair_phase_var_a1 = 0 * 2;
    do
    {
      var_a1 += 1;
      if (!((*(__repair_phase_var_a1 + (&D_8018D26C))) & 0xF000))
      {
        *((u8 *) (((char *) (&D_80189CC1)) + 0)) = (u8) ((*((u8 *) (((char *) (&D_80189CC1)) + 0))) + 1);
      }
      __repair_phase_var_a1 = var_a1 * 2;
    }
    while ((var_a3_2 = var_a1) < ((s32) D_80189CC0));
  }
  __repair_phase___repair_phase_var_a1 = 0;
  if ((arg1 & 0xFF) == 1)
  {
    do
    {
      var_v0_7 = 0 * 2;
      do
      {
        var_v0_2 = (((arg0 & 0xFF) * 0x12C) + __base_D_8018D140); temp_a0 = var_v0_7 + var_v0_2; temp_v1_3 = *temp_a0; __repair_phase___repair_phase_var_a1 += 1;
        if (!(temp_v1_3 & 0x700))
        {
          *temp_a0 = temp_v1_3 | 0x1000;
        }
        var_v0_7 = __repair_phase___repair_phase_var_a1 * 2;
      }
      while ((var_a3_2 = __repair_phase___repair_phase_var_a1) < 0x96);
    }
    while (0);
  }
}

