u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, s32, s32 *, f32, s32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8014B854(s32);
s32 func_8019F1C0(s32);
s32 func_8019F7C0(s32);
extern s32 D_8011F2F4;
extern s32 D_8011F2FB;
extern u8 D_8011F2FD[];
extern s32 D_8011F308;
extern s32 D_8011F30C;
extern s32 D_8011F310;
extern s32 D_8011F32F;
extern s16 D_801C5EA4;
extern s8 D_801C6B20;
extern u8 D_801C6B22;
extern u8 D_801C6B23;
extern u8 D_801C6B27;
extern s8 D_801C6B29;
extern s32 D_801C6BB0;
extern s32 D_801C6BB4;
extern u16 D_801C6BB6;
extern s8 D_801C6BB9;
extern s32 D_801C6BE0;
extern s32 D_801C7062;
extern u8 D_801C7068;
extern u16 D_801C7074;
extern u16 D_801C7078;
extern s32 D_801C7080;
extern s32 D_801C7081;
extern s32 D_801C7082;
extern s32 D_801C7083;
extern s32 D_801C7084;
extern u8 D_801C7469;
extern u16 D_801C746A;
extern s32 D_801C7470;
extern void *D_801C7AB0;
extern u8 D_801C7AB6;
extern s32 D_801C7AD8;
extern u16 D_801C7D18;
extern s32 D_801C7D30;
extern s32 D_801C7D31;
extern s32 D_801C7D34;
extern s32 D_801E9990;
extern s32 D_801E9994;
extern s32 D_8031445C;
extern s32 func_801B4070;
inline static s32 *inline_fn(u16 arg0)
{
  return (s32 *) (((s8 *) (&D_801C7AD8)) + arg0);
}

s32 func_80194024(s32 arg0)
{
  s32 *__base_D_8011F2F4;
  s32 var_a0;
  s32 temp_a0;
  volatile unsigned int temp_a0_3;
  s32 temp_a0_4;
  s32 temp_s0;
  s32 temp_v0;
  s32 temp_v0_3;
  s32 temp_v1;
  s32 temp_v1_3;
  s32 var_s1;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_4;
  s8 temp_v1_2;
  s8 var_v0_3;
  u16 *temp_a1;
  u16 temp_v0_2;
  u16 temp_v1_4;
  u16 var_a1;
  u8 temp_s1;
  union 
  {
    s32 *pointer;
    s32 value;
  } __repair_phase_storage;
  __repair_phase_storage.pointer = &D_8011F2FB;
  temp_s1 = *((s32 *) (((s8 *) (&D_8011F32F)) + (D_801C7074 * 0x64)));
  temp_s0 = arg0 & 0xFFFF;
  do
  {
    if (((unsigned long) __repair_phase_storage.pointer) & 0x100)
    {
      func_8019F1C0(temp_s0);
    }
    else
    {
      func_8019F1C0(temp_s0);
    }
  }
  while (0);
  func_8019F7C0(temp_s0);
  temp_v1 = D_801C7D18 * 0x64;
  *((f32 *) (((s8 *) (&D_8011F308)) + temp_v1)) = (((f32) D_801C7068) * 400.0f) * 0.5f;
  *((s32 *) (((s8 *) (&D_8011F30C)) + temp_v1)) = 0;
  *((f32 *) (((s8 *) (&D_8011F310)) + temp_v1)) = (((f32) D_801C6BB9) * 400.0f) * 0.5f;
  temp_a0 = temp_s0 * 0x70;
  if ((*((s32 *) (((s8 *) (&D_801E9990)) + temp_a0))) == 1)
  {
    var_v0_2 = arg0 & 0xFFFF;
    if ((*((s32 *) (((s8 *) (&D_801E9994)) + temp_a0))) == 0)
    {
      if (D_801C6B22)
      {
        *((s8 *) (((char *) (&D_801C7062)) + 0)) = (s8) D_801C7068;
        *((s8 *) (((char *) (&D_801C7062)) + 1)) = (s8) D_801C6BB9;
        *((s16 *) (((char *) (&D_801C7062)) + 4)) = (s16) (D_801C7068 + (D_801C6BB9 * 0x18));
        D_801C6BB6 = func_800DE41C(0, 0, 3, 0, 0x53, 0xFF, NULL, 0, &func_801B4070, (((f32) (*((s8 *) (((char *) (&D_801C7062)) + 0)))) * 400.0f) * 0.5f, 0, (((f32) (*((s8 *) (((char *) (&D_801C7062)) + 1)))) * 400.0f) * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
        temp_v0 = D_801C6BB6 * 0x64;
        __base_D_8011F2F4 = &D_8011F2F4;
        *(__base_D_8011F2F4 + temp_v0) = (*(__base_D_8011F2F4 + temp_v0)) | 0x20;
        *(__repair_phase_storage.pointer + temp_v0) = 0xC;
        D_801C7AB6 += 4;
        D_801C7068 = (*((u8 *) (((char *) (&D_801C6BB0)) + 0))) + D_801C6B22;
        temp_v1_2 = (*((u8 *) (((char *) (&D_801C6BB0)) + 1))) + D_801C6B23;
        D_801C6BB9 = temp_v1_2;
        D_801C7078 = (temp_v1_2 * 0x18) + D_801C7068;
      }
      else
      {
        *((s8 *) (((char *) (&D_801C7062)) + 0)) = (s8) D_801C7068;
        *((s8 *) (((char *) (&D_801C7062)) + 1)) = (s8) D_801C6BB9;
        *((s16 *) (((char *) (&D_801C7062)) + 4)) = (s16) (D_801C7068 + (D_801C6BB9 * 0x18));
        D_801C6BB6 = func_800DE41C(0, 0, 3, 0, 0x53, 0xFF, NULL, 0, &func_801B4070, (((f32) (*((s8 *) (((char *) (&D_801C7062)) + 0)))) * 400.0f) * 0.5f, 0, (((f32) (*((s8 *) (((char *) (&D_801C7062)) + 1)))) * 400.0f) * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
        temp_v0 = D_801C6BB6 * 0x64;
        __base_D_8011F2F4 = &D_8011F2F4;
        *(__base_D_8011F2F4 + temp_v0) = (*(__base_D_8011F2F4 + temp_v0)) | 0x20;
        *(__repair_phase_storage.pointer + temp_v0) = 0xC;
        D_801C7AB6 = D_801C7AB6 + 4;
        D_801C7068 = (*((u8 *) (((char *) (&D_801C6BB0)) + 0))) + D_801C6B22;
        temp_v1_2 = (*((u8 *) (((char *) (&D_801C6BB0)) + 1))) + D_801C6B23;
        D_801C6BB9 = temp_v1_2;
        D_801C7078 = (temp_v1_2 * 0x18) + D_801C7068;
      }
      if (((D_801C7469 == 0) | (D_801C7469 == 2)) != 0)
      {
        if (temp_v0)
        {
          D_801C6B20 = 5;
          var_v0_3 = 0x33;
        }
        else
        {
          D_801C6B20 = 5;
          var_v0_3 = 0x33;
        }
        if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 4)
        {
          goto block_7;
        }
      }
      else
        if (((D_801C7469 == 1) | (D_801C7469 == 3)) != 0)
      {
        D_801C6B20 = 0;
        var_v0_3 = 0x2E;
        if ((*((u8 *) (((char *) D_801C7AB0) + 0))) == 4)
        {
          block_7:
          D_801C6B20 = var_v0_3;

        }
      }
      *((s32 *) (((s8 *) (&D_801C7D30)) + (D_801C7078 * 0x10))) = 0;
      *((s32 *) (((s8 *) (&D_801C7D31)) + ((2 * D_801C7078) * 8))) = 1;
      temp_a0_3 = D_801C7078 * 0x10;
      *((s32 *) (((s8 *) (&D_801C7D34)) + temp_a0_3)) = (D_801C6B20 * 8) + (&D_8031445C);
      temp_v0_2 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, temp_a0_3 + (&D_801C7D30), 0, NULL, (((f32) D_801C7068) * 400.0f) * 0.5f, 0, (((f32) D_801C6BB9) * 400.0f) * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
      temp_a0_4 = (temp_v0_2 & 0xFFFF) * 0x64;
      *(__base_D_8011F2F4 + temp_a0_4) = (*(__base_D_8011F2F4 - (-temp_a0_4))) | 8;
      var_a1 = D_801C7078;
      *((s32 *) (((s8 *) (&D_801C6BE0)) + (var_a1 * 2))) = temp_v0_2;
      *inline_fn(var_a1) = *((u8 *) (((char *) D_801C7AB0) + 2));
      *((s32 *) (((s8 *) (&D_801C7080)) + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5))) = D_801C7469;
      *((s32 *) (((s8 *) (&D_801C7081)) + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5))) = 0;
      *((s32 *) (((s8 *) (&D_801C7082)) + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5))) = (u8) D_801C7068;
      *((s32 *) (((s8 *) (&D_801C7083)) + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5))) = (u8) D_801C6BB9;
      *((s32 *) (((s8 *) (&D_801C7084)) + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5))) = (u8) D_801C6B20;
      D_801C6B27 = *((u8 *) (((char *) D_801C7AB0) + 2));
      *((u8 *) (((char *) D_801C7AB0) + 2)) = 2U;
      D_801C7AB6 += 1;
      *((f32 *) (((s8 *) (&D_8011F308)) + temp_a0_4)) = (((f32) D_801C7068) * 400.0f) * 0.5f;
      *((s32 *) (((s8 *) (&D_8011F30C)) + temp_a0_4)) = 0;
      *((f32 *) (((s8 *) (&D_8011F310)) + temp_a0_4)) = (((f32) D_801C6BB9) * 400.0f) * 0.5f;
      temp_v0_3 = D_801C7D18 * 0x64;
      *((f32 *) (((s8 *) (&D_8011F308)) + temp_v0_3)) = -10000.0f;
      *((f32 *) (((s8 *) (&D_8011F30C)) + temp_v0_3)) = -10000.0f;
      *((f32 *) (((s8 *) (&D_8011F310)) + temp_v0_3)) = -10000.0f;
      D_801C6B29 = 0;
      var_s1 = 0xB;
      D_801C5EA4 = 0;
      var_a0 = 0x40;
      goto block_17;
    }
    goto block_10;
  }
  var_v0_2 = arg0 & 0xFFFF;
  block_10:
  temp_v1_3 = var_v0_2 * 0x70;

  var_v0 = temp_s1 & 0xFF;
  if ((*((s32 *) (((s8 *) (&D_801E9990)) + temp_v1_3))) == 0)
  {
    var_v0 = temp_s1 & 0xFF;
    if ((*((s32 *) (((s8 *) (&D_801E9994)) + temp_v1_3))) == 1)
    {
      *(D_8011F2FD + (D_801C746A * 0x64)) = 1;
      __repair_phase_storage.value = 0;
      var_v0_4 = 0 & 0xFF;
      __repair_rows:
      {
        temp_a1 = (var_v0_4 * 2) + (&D_801C7470);
        temp_v1_4 = *temp_a1;
        if (temp_v1_4 != 0xFFFF)
        {
          *(D_8011F2FD + (temp_v1_4 * 0x64)) = 2;
          *temp_a1 = 0xFFFF;
        }
        do
        {
          __repair_phase_storage.value += 1;
        }
        while (0);
        var_v0_4 = __repair_phase_storage.value & 0xFF;
      }

      if (((u32) (__repair_phase_storage.value & 0xFF)) < 4U)
      {
        goto __repair_rows;
      }
      var_a1 = (u16) (&D_801C6BB4);
      *(D_8011F2FD + ((*((s32 *) (((s8 *) (&D_801C6BE0)) + ((*((u16 *) (((char *) ((u16) (&D_801C6BB4))) + 0))) * 2)))) * 0x64)) = 1;
      *((s32 *) (((s8 *) (&D_801C6BE0)) + ((*((u16 *) (((char *) ((u16) (&D_801C6BB4))) + 0))) * 2))) = 0xFFFF;
      *((s32 *) (((s8 *) (&D_801C7AD8)) + D_801C7078)) = 0xFF;
      *((u8 *) (((char *) D_801C7AB0) + 2)) = 0U;
      D_801C7AB6 = 0;
      *((s32 *) (((s8 *) (&D_801C7080)) + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5))) = 4;
      *((s32 *) (((s8 *) (&D_801C7081)) + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5))) = 0;
      *((s32 *) (((s8 *) (&D_801C7082)) + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5))) = -1;
      *((s32 *) (((s8 *) (&D_801C7083)) + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5))) = -1;
      *((s32 *) (((s8 *) (&D_801C7084)) + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5))) = -1;
      D_801C7068 = (s8) (*((u8 *) (((char *) ((u16) (&D_801C6BB4))) + (-4))));
      D_801C6BB9 = (s8) (*((u8 *) (((char *) ((u16) (&D_801C6BB4))) + (-3))));
      D_801C7469 = 4;
      var_a0 = 0x3F;
      block_17:
      func_8014B854((var_s1 = 1, var_a0));

      var_v0 = var_s1 & 0xFF;
    }
  }
  return var_v0;
}

