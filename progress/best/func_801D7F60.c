s32 func_8003DAA0(s32 *, s32 *, s32);
extern s32 D_8006FE40;
extern u8 D_801E4420;
extern s32 D_801E96E0;
extern s32 D_801E9958;
extern s8 D_801E995A[];
extern s8 D_801E995B[];
extern s32 D_801E995C;
typedef struct 
{
  u16 f0;
  u8 pad[110];
} Slot_801E995E;
extern Slot_801E995E D_801E995E[];
typedef struct 
{
  u16 f0;
  u8 pad[110];
} Slot_801E9960;
extern Slot_801E9960 D_801E9960[];
typedef struct 
{
  u16 f0;
  u8 pad[110];
} Slot_801E9962;
extern Slot_801E9962 D_801E9962[];
typedef struct 
{
  u16 f0;
  u8 pad[110];
} Slot_801E9964;
extern Slot_801E9964 D_801E9964[];
typedef struct 
{
  u16 f0;
  u8 pad[110];
} Slot_801E9966;
extern Slot_801E9966 D_801E9966[];
typedef struct 
{
  u16 f0;
  u8 pad[110];
} Slot_801E9968;
extern Slot_801E9968 D_801E9968[];
extern s32 D_801E996E;
extern s32 D_801E9970;
extern s32 D_801E9972;
extern s32 D_801E9974;
extern s32 D_801E9976;
extern s32 D_801E9978;
extern s32 D_801E997A;
extern s32 D_801E997C;
extern s32 D_801E9980;
extern s32 D_801E9984;
extern s32 D_801E9988;
extern s32 D_801E998C;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_801E9998;
extern s32 D_801E999C;
extern s32 D_801E99A0;
extern s32 D_801E99A4;
extern s32 D_801E99A8;
extern s32 D_801E99AC;
extern s32 D_801E99B0;
extern s32 D_801E99B4;
extern s32 D_801E99B8;
extern s32 D_801E99BC;
extern s32 D_801E99C0;
extern s32 D_801E99C4;
inline static s32 *inline_fn(char *arg0)
{
  return (s32 *) arg0;
}

void func_801D7F60(void)
{
  s32 *__base_D_801E9958;
  s32 temp_a0;
  s32 temp_a0_11;
  s32 temp_a0_12;
  s32 temp_a0_13;
  s32 temp_a0_14;
  s32 temp_a0_15;
  s32 temp_a0_16;
  s32 temp_a0_17;
  s32 temp_a0_18;
  s32 temp_a0_19;
  unsigned short temp_a0_2;
  s32 temp_a0_3;
  s32 temp_a0_4;
  s32 temp_a0_5;
  s32 temp_a0_6;
  s32 temp_a0_7;
  s32 temp_a0_8;
  s32 temp_a0_9;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 var_a1;
  s32 var_t0;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v1;
  s32 var_v1_2;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  func_8003DAA0(&D_8006FE40, &D_801E96E0, 0x18);
  var_a1 = 0;
  var_t0 = 0;
  __repair_rows:
  {
    temp_v1 = var_t0 & 0xFFFF;
    if ((((s32) D_801E4420) >> temp_v1) & 1)
    {
      __repair_phase_storage.pointer = (temp_v1 * 6) + (&D_801E96E0);
      temp_a0 = (var_a1 & 0xFFFF) * 0x70;
      __base_D_801E9958 = &D_801E9958;
      *(__base_D_801E9958 + temp_a0) = (~(*((&D_801E995C) + temp_a0))) & (*((u16 *) (((char *) __repair_phase_storage.pointer) + 0)));
      if ((*((u8 *) (((char *) __repair_phase_storage.pointer) + 4))) != 0)
      {
        *(__base_D_801E9958 + temp_a0) = 0;
      }
      temp_v1_2 = (var_a1 & 0xFFFF) * 0x70;
      var_v0 = var_a1 & 0xFFFF;
      if ((*((&(*((s32 *) 0x801e9958))) + temp_v1_2)) & 0x40)
      {
        *(D_801E995A + temp_v1_2) = 0;
      }
      else
      {
        *(D_801E995A + (var_v0 * 0x70)) = *((u8 *) (((char *) __repair_phase_storage.pointer) + 2));
        var_v0 = var_a1 & 0xFFFF;
      }
      var_v1 = var_v0 * 8;
      temp_v1_3 = (var_v1 - var_v0) * 0x10;
      var_v0_2 = var_a1 & 0xFFFF;
      if ((*((&D_801E995C) + temp_v1_3)) & 0x80)
      {
        *(D_801E995B + temp_v1_3) = 0;
        var_v1_2 = var_v0_2 * 8;
      }
      else
      {
        do
        {
          *(D_801E995B + (var_v0_2 * 0x70)) = *((u8 *) (((char *) __repair_phase_storage.pointer) + 3));
        }
        while (0);
        do
        {
          var_v0_2 = var_a1 & 0xFFFF; var_v1_2 = var_v0_2 * 8;
        }
        while (0);
      }
      temp_a0_2 = (var_v1_2 - var_v0_2) * 0x10;
      if ((*(D_801E995A + temp_a0_2)) >= 0x3D)
      {
        *inline_fn(((char *) (temp_a0_2 + __base_D_801E9958)) + 0x28) = (s32) ((*((&D_801E9980) + temp_a0_2)) + 1);
      }
      else
      {
        *(((var_a1 & 0xFFFF) * 0x70) + (&D_801E9980)) = 0;
      }
      temp_a0_3 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(D_801E995A + temp_a0_3)) < (-0x3C))
      {
        *inline_fn(((char *) (temp_a0_3 + __base_D_801E9958)) + 0x2C) = (s32) ((*((&D_801E9984) + temp_a0_3)) + 1);
      }
      else
      {
        *((&D_801E9984) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      temp_a0_4 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(D_801E995B + temp_a0_4)) >= 0x3D)
      {
        *inline_fn(((char *) (temp_a0_4 + __base_D_801E9958)) + 0x30) = (s32) ((*((&D_801E9988) + temp_a0_4)) + 1);
      }
      else
      {
        *((&D_801E9988) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      temp_a0_5 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(D_801E995B + temp_a0_5)) < (-0x3C))
      {
        *((s32 *) (((char *) (temp_a0_5 + __base_D_801E9958)) + 0x34)) = (s32) ((*((&D_801E998C) + temp_a0_5)) + 1);
      }
      else
      {
        *((&D_801E998C) - (-((var_a1 & 0xFFFF) * 0x70))) = 0;
      }
      temp_a0_6 = (var_a1 & 0xFFFF) * 0x70;
      if ((*((&D_801E9976) + temp_a0_6)) & (*(__base_D_801E9958 + temp_a0_6)))
      {
        *((s32 *) (((char *) (temp_a0_6 + __base_D_801E9958)) + 0x68)) = (s32) ((*((&D_801E99C0) + temp_a0_6)) + 1);
      }
      else
      {
        *((&D_801E99C0) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      temp_a0_7 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + temp_a0_7)) & (*((&D_801E997C) + temp_a0_7)))
      {
        *inline_fn(((char *) (temp_a0_7 + __base_D_801E9958)) + 0x38) = (s32) ((*((&D_801E9990) + temp_a0_7)) + 1);
      }
      else
        if (1)
      {
        *((&D_801E9990) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      temp_a0_8 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + temp_a0_8)) & (*((&D_801E997A) + temp_a0_8)))
      {
        *inline_fn(((char *) (temp_a0_8 + __base_D_801E9958)) + 0x3C) = (s32) ((*((&D_801E9994) + temp_a0_8)) + 1);
      }
      else
      {
        *((&D_801E9994) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      temp_a0_9 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + temp_a0_9)) & D_801E9964[var_a1 & 0xFFFF].f0)
      {
        *inline_fn(((char *) (temp_a0_9 + __base_D_801E9958)) + 0x48) = (s32) ((*((&D_801E99A0) + temp_a0_9)) + 1);
      }
      else
      {
        *((&D_801E99A0) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      __repair_phase_storage.value = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + __repair_phase_storage.value)) & D_801E9962[var_a1 & 0xFFFF].f0)
      {
        *inline_fn(((char *) (__repair_phase_storage.value + __base_D_801E9958)) + 0x4C) = (s32) ((*((&D_801E99A4) + __repair_phase_storage.value)) + 1);
      }
      else
      {
        *((&D_801E99A4) - (-((var_a1 & 0xFFFF) * 0x70))) = 0;
      }
      temp_a0_11 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + temp_a0_11)) & D_801E9960[var_a1 & 0xFFFF].f0)
      {
        *inline_fn(((char *) (temp_a0_11 + __base_D_801E9958)) + 0x54) = (s32) ((*((&D_801E99AC) + temp_a0_11)) + 1);
      }
      else
      {
        *((&D_801E99AC) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      temp_a0_12 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + temp_a0_12)) & D_801E995E[var_a1 & 0xFFFF].f0)
      {
        *((s32 *) (((char *) (temp_a0_12 + __base_D_801E9958)) + 0x50)) = (s32) ((*((&D_801E99A8) + temp_a0_12)) + 1);
      }
      else
      {
        *((&D_801E99A8) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      temp_a0_13 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + temp_a0_13)) & (*((&D_801E9974) + temp_a0_13)))
      {
        *((s32 *) (((char *) (temp_a0_13 + __base_D_801E9958)) + 0x58)) = (s32) ((*((&D_801E99B0) + temp_a0_13)) + 1);
      }
      else
      {
        *((&D_801E99B0) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      temp_a0_14 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + temp_a0_14)) & (*((&D_801E9972) + temp_a0_14)))
      {
        *inline_fn(((char *) (temp_a0_14 + __base_D_801E9958)) + 0x5C) = (s32) ((*((&D_801E99B4) - (-temp_a0_14))) + 1);
      }
      else
      {
        *((&D_801E99B4) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      temp_a0_15 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + temp_a0_15)) & (*((&D_801E9970) + temp_a0_15)))
      {
        *inline_fn(((char *) (temp_a0_15 + __base_D_801E9958)) + 0x64) = (s32) ((*((&D_801E99BC) + temp_a0_15)) + 1);
      }
      else
      {
        *((&D_801E99BC) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      temp_a0_16 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + temp_a0_16)) & (*((&D_801E996E) + temp_a0_16)))
      {
        *inline_fn(((char *) (temp_a0_16 + __base_D_801E9958)) + 0x60) = (s32) ((*((&D_801E99B8) + temp_a0_16)) + 1);
      }
      else
      {
        *((&D_801E99B8) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      temp_a0_17 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + temp_a0_17)) & (*((&D_801E9978) + temp_a0_17)))
      {
        *inline_fn(((char *) (temp_a0_17 + __base_D_801E9958)) + 0x6C) = (s32) ((*((&D_801E99C4) + temp_a0_17)) + 1);
      }
      else
      {
        *((&D_801E99C4) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      temp_a0_18 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + temp_a0_18)) & D_801E9968[var_a1 & 0xFFFF].f0)
      {
        *((s32 *) (((char *) (temp_a0_18 + __base_D_801E9958)) + 0x40)) = (s32) ((*((&D_801E9998) + temp_a0_18)) + 1);
      }
      else
      {
        *((&D_801E9998) - (-((var_a1 & 0xFFFF) * 0x70))) = 0;
      }
      temp_a0_19 = (var_a1 & 0xFFFF) * 0x70;
      if ((*(__base_D_801E9958 + temp_a0_19)) & D_801E9966[var_a1 & 0xFFFF].f0)
      {
        *((s32 *) (((char *) (temp_a0_19 + __base_D_801E9958)) + 0x44)) = (s32) ((*((&D_801E999C) + temp_a0_19)) + 1);
      }
      else
      {
        *((&D_801E999C) + ((var_a1 & 0xFFFF) * 0x70)) = 0;
      }
      var_a1 += 1;
    }
    var_t0 += 1;
  }

  if (((u32) (var_t0 & 0xFFFF)) < 4U)
  {
    goto __repair_rows;
  }
}

