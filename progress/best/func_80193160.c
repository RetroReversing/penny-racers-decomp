extern unsigned short D_801C6BB4;
extern short D_801C7066;
u16 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8014B854();
s32 func_80192E00();
s32 func_80199AB0();
s32 func_8019F7C0();
extern char D_8011F2F4[];
extern char D_8011F2FB[];
extern char D_8011F2FD[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F32F[];
extern s16 D_801C5EA4;
extern u8 D_801C6B22;
extern u8 D_801C6B23;
extern u8 D_801C6B27;
extern s8 D_801C6B29;
extern volatile unsigned short D_801C6BB6;
extern u8 D_801C6BB9;
extern char D_801C6BE0[];
extern u8 D_801C7068;
extern u16 D_801C7074;
extern u16 D_801C7078;
extern char D_801C7080[];
extern char D_801C7081[];
extern char D_801C7082[];
extern char D_801C7083[];
extern char D_801C7084[];
extern u8 D_801C7469;
extern u16 D_801C746A;
extern void * volatile D_801C7AB0;
extern u8 D_801C7AB6;
extern short D_801C7AB8;
extern char D_801C7AD8[];
extern u16 D_801C7D18;
extern char D_801C7D30[];
extern char D_801C7D31[];
extern char D_801C7D34[];
extern char D_801E9990[];
extern char D_801E9994[];
extern char D_8031445C[];
extern s32 func_801B4070;
s32 func_80193160(volatile int arg0)
{
  union 
  {
    char *pointer;
    s32 value;
  } __repair_phase_storage;
  s32 var_a0;
  s32 temp_a0;
  s32 temp_a0_3;
  s32 temp_s0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 temp_v1_2;
  s32 var_v0;
  s32 var_v0_2;
  u16 temp_v0;
  u16 var_a1;
  u16 __repair_result_var_a1;
  u8 temp_a0_2;
  u8 temp_v1;
  u8 var_s1;
  do
  {
    var_s1 = *(D_8011F32F + (D_801C7074 * 0x64)); temp_s0 = arg0 & 0xFFFF;
    func_8019F7C0(temp_s0);
    func_80192E00(func_80199AB0(temp_s0) & 0xFF);
    var_v0_2 = arg0 & 0xFFFF; temp_a0 = temp_s0 * 0x70;
    if ((*((s32 *) (D_801E9990 + temp_a0))) == 1)
    {
      s32 var_a0_arm;
      var_v0_2 = arg0 & 0xFFFF;
      if ((*((s32 *) (D_801E9994 + temp_a0))) == 0)
      {
        if (D_801C7469 != 4)
        {
          *(D_801C7D30 + (D_801C6BB4 * 0x10)) = 0;
          *(D_801C7D31 + (D_801C6BB4 * 0x10)) = 1;
          *((s32 *) (D_801C7D34 + (D_801C6BB4 * 0x10))) = ((*((s8 *) (((char *) (&D_801C6BB4)) + (-2)))) * 8) + D_8031445C; temp_v0 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, (D_801C6BB4 * 0x10) + D_801C7D30, 0, NULL, (((f32) (*((s8 *) (((char *) (&D_801C6BB4)) + (-4))))) * 400.0f) * 0.5f, 0, (((f32) (*((s8 *) (((char *) (&D_801C6BB4)) + (-3))))) * 400.0f) * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f); temp_v1_2 = temp_v0 & 0xFFFF; temp_v0_2 = temp_v1_2 * 0x64; __repair_phase_storage.pointer = D_8011F2F4;
          *(__repair_phase_storage.pointer + temp_v0_2) = (*(__repair_phase_storage.pointer + temp_v0_2)) | 8;
          *((s16 *) (D_801C6BE0 + (D_801C6BB4 * 2))) = temp_v0;
          do
          {
            *(D_801C7AD8 + D_801C6BB4) = *((u8 *) (((char *) D_801C7AB0) + 2));
            *(D_801C7080 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = D_801C7469;
            *(D_801C7081 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = 0;
            *(D_801C7082 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = (u8) (*((s8 *) (((char *) (&D_801C6BB4)) + (-4))));
            *(D_801C7083 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = (u8) (*((s8 *) (((char *) (&D_801C6BB4)) + (-3))));
            *(D_801C7084 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = (u8) (*((s8 *) (((char *) (&D_801C6BB4)) + (-2))));
            *((u8 *) (((char *) D_801C7AB0) + 2)) = 1U; D_801C7AB6 = 1; D_801C7066 = (s16) (((s8) (*((u8 *) (((char *) (&D_801C7066)) + (-4))))) + ((*((s8 *) (((char *) (&D_801C7066)) + (-3)))) * 0x18)); D_801C6BB6 = func_800DE41C(0, 0, 3, 0, 0x53, 0xFF, NULL, 0, &func_801B4070, (((f32) ((s8) (*((u8 *) (((char *) (&D_801C7066)) + (-4)))))) * 400.0f) * 0.5f, 0, (((f32) (*((s8 *) (((char *) (&D_801C7066)) + (-3))))) * 400.0f) * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f); temp_v0_3 = D_801C6BB6 * 0x64;
            *(__repair_phase_storage.pointer + temp_v0_3) = (*(__repair_phase_storage.pointer + temp_v0_3)) | 0x20;
            *(D_8011F2FB + temp_v0_3) = 0xC; D_801C7AB6 += 4;
          }
          while (0);
          temp_a0_2 = D_801C7068 + D_801C6B22; D_801C7068 = temp_a0_2; temp_v1 = D_801C6BB9 + D_801C6B23; D_801C6BB9 = temp_v1; D_801C7AB8 = 4; D_801C7078 = ((s8) temp_a0_2) + (((s8) temp_v1) * 0x18);
          *(D_801C7D30 + (D_801C7078 * 0x10)) = 0;
          *(D_801C7D31 + (D_801C7078 * 0x10)) = 1; temp_v1_2 = D_801C7078 * 0x10;
          *((s32 *) (D_801C7D34 + temp_v1_2)) = ((*((s8 *) (((char *) (&D_801C6BB4)) + (-2)))) * 8) + D_8031445C; temp_v0 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, temp_v1_2 + D_801C7D30, 0, NULL, (((f32) ((s8) D_801C7068)) * 400.0f) * 0.5f, 0, (((f32) ((s8) D_801C6BB9)) * 400.0f) * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f); temp_s0 = temp_v0 & 0xFFFF; temp_a0_3 = temp_s0 * 0x64;
          *(__repair_phase_storage.pointer + temp_a0_3) = (*(__repair_phase_storage.pointer + temp_a0_3)) | 8;
          *((s16 *) (D_801C6BE0 + (D_801C7078 * 2))) = temp_v0;
          *(D_801C7AD8 + D_801C7078) = *((u8 *) (((char *) D_801C7AB0) + 2));
          *(D_801C7080 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = D_801C7469;
          *(D_801C7081 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = 0;
          *(D_801C7082 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = D_801C7068;
          *(D_801C7083 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = D_801C6BB9;
          *(D_801C7084 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = (u8) (*((s8 *) (((char *) (&D_801C6BB4)) + (-2)))); D_801C6B27 = *((u8 *) (((char *) D_801C7AB0) + 2));
          *((u8 *) (((char *) D_801C7AB0) + 2)) = 2U; D_801C7AB6 += 1;
          *((f32 *) (D_8011F308 + temp_a0_3)) = (((f32) ((s8) D_801C7068)) * 400.0f) * 0.5f;
          *((u16 *) (D_8011F30C + temp_a0_3)) = 0;
          *((f32 *) (D_8011F310 + temp_a0_3)) = (((f32) ((s8) D_801C6BB9)) * 400.0f) * 0.5f; temp_v0_4 = D_801C7D18 * 0x64;
          *((f32 *) (D_8011F308 + temp_v0_4)) = -10000.0f;
          *((u16 *) (D_8011F30C + temp_v0_4)) = -10000.0f;
          *((f32 *) (D_8011F310 + temp_v0_4)) = -10000.0f; D_801C6B29 = 0; var_s1 = 0xB; D_801C5EA4 = 0; var_a0_arm = 0x40;
          goto block_7;
        }
        goto block_8;
      }
    }
    __repair_phase_storage.value = var_v0_2 * 0x70; var_v0 = var_s1 & 0xFF;
  }
  while (0);
  if ((*((s32 *) (D_801E9990 + __repair_phase_storage.value))) == 0)
  {
    var_v0 = var_s1 & 0xFF;
    if ((*((s32 *) (D_801E9994 + __repair_phase_storage.value))) == 1)
    {
      *((u8 *) (((char *) D_801C7AB0) + 2)) = 0U;
      D_801C7AB6 = 0;
      var_a1 = 4;
      *(D_801C7080 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = 4;
      *(D_801C7081 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = 0;
      *(D_801C7082 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = -1;
      *(D_801C7083 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = -1;
      *(D_801C7084 + ((*((u8 *) (((char *) D_801C7AB0) + 2))) * 5)) = -1;
      *(D_8011F2FD + (D_801C746A * 0x64)) = 1;
      D_801C7469 = 4;
      var_s1 = 1;
      var_a0 = 0x3F;
      block_7:
      func_8014B854(var_a0, 4);

      block_8:
      var_v0 = var_s1 & 0xFF;

    }
  }
  return var_v0;
}

