s32 func_80148688(s32, u8);
s32 func_8014B854(s32);
s32 func_8014BAC0();
s32 func_801FA30C(s32);
extern u8 D_8011F2F0[];
extern s32 D_80168C64;
extern u16 D_80183BD4;
extern u16 D_80189948;
extern u8 D_80189B36;
extern u16 D_80189C98;
extern s32 D_80189CC0;
extern s32 D_8018A43E;
extern u16 D_80190CAC;
extern u8 D_80190CB0;
inline static u16 inline_fn(s32 *arg0)
{
  return *((u16 *) (((char *) arg0) + 0));
}

typedef struct 
{
  unsigned short field_0;
  unsigned short field_2;
  unsigned char field_4;
  unsigned char pad_5[1];
  unsigned short field_6;
  unsigned short field_8;
} __repair_record___base_D_8018A43E;
void func_80146A5C(volatile int arg0)
{
  s32 *__base_D_8018A43E;
  s32 *__base_D_80189CC0;
  s32 temp_a0;
  s32 var_s0;
  s32 var_s2;
  s32 var_v0_7;
  u16 temp_v0;
  u16 temp_v1;
  u16 var_v0;
  u16 var_v0_2;
  u16 var_v0_3;
  u8 temp_v1_2;
  unsigned int var_v0_4;
  u8 var_v0_5;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  temp_a0 = arg0 & 0xFFFF;
  var_s2 = temp_a0 * 0x64; __repair_phase_storage.pointer = var_s2 + D_8011F2F0;
  temp_v1 = *((u16 *) (((char *) __repair_phase_storage.pointer) + 0x3E));
  var_s2 = 0;
  switch (temp_v1)
  {
    __base_D_8018A43E = &D_8018A43E;
    case 0:
      ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_0 = (u16) (func_801FA30C(temp_a0) & 7);
      ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_2 = 0U;
      ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_4 = 0U;
      ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_6 = 0U;
      ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_8 = 0U;
      var_v0 = ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_0 * 0x10;
      block_64:
    ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_0 = var_v0;

      var_v0_2 = 1;
      block_65:
    *((u16 *) (((char *) __repair_phase_storage.pointer) + 0x3E)) = var_v0_2;

      break;

    case 1:
      temp_v1_2 = *((u8 *) (((s8 *) (&D_80168C64)) + inline_fn(__base_D_8018A43E)));
      switch (temp_v1_2)
    {
      case 0x7:
        var_v0_3 = 3;
        if (temp_v1_2 != 7)
      {
      }
      else
      {
        block_51:
        ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_8 = var_v0_3;

        block_52:
        ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_0 = (u16) (((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_0 + 1);

      }
        break;

      case 0xFF:
        var_s2 = 0x10;
 do { break; } while (0);

      case 0x0:
        ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_4 = 2U;
        if (func_801FA30C(temp_a0) & 1)
      {
        ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_4 = 1U;
      }
        goto block_52;

      case 0x1:
        if (!(((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_2 & ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_8))
      {
        var_s2 = ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_4 | 0;
      }
        func_80148688(var_s2 & 0xFF, D_80190CB0);
        if (D_80183BD4 != D_80189948)
      {
      }
      else
      {
        goto block_52;
      }
        break;

      case 0x2:
        ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_6 = 0x1EU;
        var_v0_2 = 2;
        goto block_65;

      case 0x3:
        var_v0_4 = 1;
        if (((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_4 == 1)
      {
        var_v0_4 = 2;
      }
        ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_4 = var_v0_4;
        goto block_52;

      case 0x4:
        ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_6 = (u16) ((func_801FA30C(temp_a0) & 3) + 2);
        var_v0_2 = 3;
        goto block_65;

      case 0x5:
        var_v0_5 = 2;
        if ((((u32) (D_80183BD4 & 0x700)) + 1) > 0x301U)
      {
        var_v0_5 = 1;
      }
        ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_4 = var_v0_5;
        goto block_52;

      case 0x6:
        var_v0_3 = 1;
        goto block_51;

      case 0x8:
        var_v0_3 = 7;
        goto block_51;
        __base_D_80189CC0 = &D_80189CC0;

      case 0x9:
        ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_6 = (u16) (*((u8 *) (((char *) __base_D_80189CC0) + 0)));
        if (D_80190CB0 != 0)
      {
        var_v0_2 = 3;
      }
      else
      {
        ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_6 = (u16) (*((u8 *) (((char *) (&D_80189CC0)) + (-8))));
        do
        {
          var_v0_2 = 3;
        }
        while (0);
      }
        goto block_65;

    }

      break;

    case 2:
      temp_v0 = ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_6 - 1;
      ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_6 = temp_v0;
      if (!(temp_v0 & 0x8000))
    {
    }
    else
    {
      block_63:
      var_v0 = ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_0 + 1;

      goto block_64;
    }
      break;

    case 3:
      if (!(((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_2 & ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_8))
    {
      do
      {
        ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_6 = (u16) (((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_6 - 1);
      }
      while (0);
      var_s2 = ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_4 | 0;
    }
      do
    {
      func_80148688(var_s2 & 0xFF, D_80190CB0);
    }
    while (0);
      if (((short) ((s16) ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_6)) == 0)
    {
      {
        var_v0 = ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_0 + 1;
        goto block_64;
      }
    }
      break;

  }

  __repair_phase_storage.value = var_s2 & 3;
  if (func_8014BAC0() & 0x10)
  {
    var_s0 = 0;
    for (;;)
    {
      func_80148688(2, D_80190CB0);
      var_s0 += 1;
      if (D_80183BD4 == D_80189948)
      {
        var_s2 = 0x10;
      }
      else
        if (var_s0 < 0x96)
      {
        continue;
      }
      break;
    }

    __repair_phase_storage.value = var_s2 & 3;
  }
  if (__repair_phase_storage.value != 0)
  {
    func_8014B854(0x3B);
  }
  var_v0_7 = var_s2 & 0x10;
  if ((var_v0_7 != 0) && (!(D_80183BD4 & 0x1000)))
  {
    func_8014B854(0x3D);
    D_80189B36 &= 0xEF;
    D_80189C98 = D_80190CAC;
  }
  ((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_2 = (u16) (((__repair_record___base_D_8018A43E *) __base_D_8018A43E)->field_2 + 1);
}
