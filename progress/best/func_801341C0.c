inline static u8 __repair_inline(u8 a)
{
  return a;
}

extern short D_800DD2C0;
s32 func_801CA140();
s32 func_801CAF18();
s32 func_801CB9EC();
s32 func_801CC150();
extern char D_800DB1B8[];
extern char D_8011F2F0[];
extern char D_8011F2FC[];
extern char D_8011F334[];
extern u8 D_80126FF6;
extern char D_8016ED50[];
extern char D_8016EDD8[];
extern char D_8016EE00[];
extern char D_8016EF48[];
extern char D_80170F20[];
extern char D_80171018[];
extern char D_801D51C8[];
extern char D_801D5470[];
extern char D_80220ED8[];
extern volatile unsigned char D_8022ACD3[];
extern char D_8022ACD4[];
extern char D_8022ACD6[];
extern unsigned char D_8022AFE9[];
void func_801341C0(void **arg0, volatile short arg1)
{
  s32 sp4C;
  s32 __repair_phase___repair_phase_sp4C;
  f32 temp_fv1;
  s16 temp_s1_2;
  s32 temp_s0;
  unsigned long temp_s1;
  s32 temp_s2;
  s32 var_v0;
  u8 temp_fp;
  u8 temp_s7;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  do
  {
    if (D_80126FF6 == (D_800DD2C0 - 1))
    {
      temp_fp = arg1 & 0xFFFF; sp4C = temp_fp * 0x64; temp_fp = __repair_inline(*(D_8011F2F0 + sp4C));
      if ((*(D_8022AFE9 + (temp_fp * 0x8F0))) != ((unsigned char) 5))
      {
        temp_s7 = *(D_8011F2FC + sp4C); sp4C = temp_fp * 0x6C;
        do
        {
          if ((((s32) temp_s7) + 1) <= 3)
          {
            sp4C += 0xE;
          }
          temp_fv1 = *((f32 *) (D_8011F334 + ((arg1 & 0xFFFF) * 0x64)));
        }
        while (0);
        if (!(temp_fv1 >= 2.1474836e9f))
        {
          var_v0 = ((s32) temp_fv1) & 8;
        }
        else
        {
          var_v0 = (((s32) (temp_fv1 - 2.1474836e9f)) | 0x80000000) & 8;
        }
        if (var_v0 == 0)
        {
          if (1)
          {
            __repair_phase_storage.pointer = *arg0;
            *arg0 = __repair_phase_storage.pointer + 8;
            *((s32 *) (((char *) __repair_phase_storage.pointer) + 0)) = 0x06000000;
            *((s32 **) (((char *) __repair_phase_storage.pointer) + 4)) = &D_80220ED8; __repair_phase_storage.value = (-(temp_s7 != 4)) & temp_s7;
            func_801CA140(arg0);
            temp_s1 = (0x10 + sp4C) & 0xFFFF;
            func_801CAF18(arg0, 0x28, temp_s1, 0xA, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70);
            func_801CAF18(arg0, 0x40, (sp4C + 0x10) & 0xFFFF, 0xB, &D_801D51C8, &D_801D5470, 0, 8, 0xC, 0x70, 0xC);
            if (((s32) __repair_phase_storage.value) == 4)
            {
              if (temp_s1)
              {
                func_801CC150(arg0, 0x5C, (s16) (sp4C + 0x11), 0, 0, 0x30, 0xA, 0x30, 0xA, 0x30, 0xA, 0, 0, 0x13F, 0xEF, &D_80170F20, &D_80171018);
              }
              else
              {
                func_801CC150(arg0, 0x5C, (s16) (sp4C + 0x11), 0, 0, 0x30, 0xA, 0x30, 0xA, 0x30, 0xA, 0, 0, 0x13F, 0xEF, &D_80170F20, &D_80171018);
              }
            }
            else
            {
              ;
              func_801CC150(arg0, 0x5C, sp4C + 0x12, 0, 0, 0x20, 8, 0x20, 8, 0x20, 8, 0, 0, 0x13F, 0xEF, &D_8016ED50, &D_8016EDD8);
              func_801CB9EC(arg0, 0x77, (sp4C + 0x12) & 0xFFFF, 8, &D_8016EE00, &D_8016EF48, 0, 1, 0, 8, 8, 0x50, 8, __repair_phase_storage.value & 0xFFFF);
            }
            temp_s2 = (sp4C + 0x10) & 0xFFFF; var_v0 = temp_fp * 0x8F0; __repair_phase___repair_phase_sp4C = var_v0 + (__repair_phase_storage.value * 5);
            func_801CB9EC(arg0, 0x18, temp_s2, 9, &D_801D51C8, &D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) (*(D_8022ACD3 + (var_v0 + (__repair_phase_storage.value * 5)))));
          }
          func_801CB9EC(arg0, 0x30, temp_s2, 9, &D_801D51C8, &D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) (*(D_8022ACD4 + (var_v0 + (__repair_phase_storage.value * 5)))));
          func_801CB9EC(arg0, 0x48, temp_s2, 9, &D_801D51C8, &D_801D5470, 0, 2, 0, 8, 0xC, 0x70, 0xC, (s32) (*(D_8022ACD6 + (var_v0 + (__repair_phase_storage.value * 5)))));
        }
      }
    }
  }
  while (0);
}

