extern short D_800DD2C0;
s32 func_801CA140();
s32 func_801CA468();
s32 func_801CABF4();
s32 func_801CAF18();
s32 func_801CC150();
extern char D_800DA260[];
extern char D_800DA26A[];
extern char D_800DB1B8[];
extern char D_8011F2FC[];
extern char D_8011F32E[];
extern u8 D_80126FF6;
extern char D_80173170[];
extern char D_80173970[];
extern char D_80173998[];
extern char D_80173C40[];
extern unsigned char D_8018993F[];
extern u8 D_80189DC0;
extern u8 D_8018A248;
extern u8 D_8018BC32;
extern char D_8018D661[];
extern char D_801CF4C8[];
extern char D_801D4390[];
extern char D_80220ED8[];
extern char D_80237630[];
void func_80137F60(void **arg0, volatile unsigned short arg1)
{
  int __repair_literal;
  char *__base_D_8011F2FC;
  char *__base_D_800DA260;
  u16 sp4E;
  s32 sp54;
  volatile unsigned char __repair_phase_temp_s1;
  short temp_v0;
  s32 var_s0;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  temp_v0 = (u16) arg1;
  do
  {
    if (D_80126FF6 == (D_800DD2C0 - 1))
    {
      do
      {
        sp54 = ((u16) arg1) * 0x64;
        if ((*((u16 *) (D_8011F32E + sp54))) != 0)
        {
          __repair_phase_storage.pointer = *arg0;
          *arg0 = __repair_phase_storage.pointer + 8;
          do
          {
            *((s32 *) (((char *) __repair_phase_storage.pointer) + 0)) = 0x06000000;
            *((s32 **) (((char *) __repair_phase_storage.pointer) + 4)) = &D_80220ED8;
            func_801CA140();
            func_801CA468(arg0, D_8018A248);
            do
            {
              func_801CC150(arg0, 0x2C, D_80189DC0 + 0x12, 0, 0, 0x50, 0x33, 0x50, 0x33, 0x50, 0x33, ((u16) arg1) * 0, 0, 0x13F, 0xEF, &D_80173170, &D_80173970);
              __base_D_8011F2FC = D_8011F2FC;
            }
            while (0);
          }
          while (0);
          __repair_literal = 1;
          if (((s32) (*(__base_D_8011F2FC + sp54))) > __repair_literal)
          {
            sp54 = ((u16) arg1) * 0x64;
            do
            {
              func_801CA468((var_s0 = 1, arg0), D_8018BC32);
              __repair_phase_temp_s1 = var_s0 * 0x18;
              func_801CC150(arg0, (*(D_8018D661 + 1)) + 0x28, (s16) (__repair_phase_temp_s1 + 0x3B), 0, 0, 0x60, 0xE, 0x60, 0xE, 0x60, 0xE, 0, 0, 0xA0, 0xEF, &D_80173998, &D_80173C40);
              if ((*(D_8018D661 + var_s0)) == 0)
              {
                func_801CAF18(arg0, 0x1E, (__repair_phase_temp_s1 + 0x34) & 0xFFFF, (var_s0 + 0x10) & 0xFFFF, &D_801CF4C8, &D_801D4390, 0, 0xA, 0xE, 0xA0, 0xFC);
              }
              func_801CA468(arg0, *(D_8018993F - (-var_s0)));
              __repair_literal = *((u16 *) (D_80237630 + (1 * 2))); __repair_phase_storage.value = __repair_literal * 0x178;
              do
              {
                func_801CABF4(arg0, 0x37, ((var_s0 * 0x18) + 0x37) & 0xFFFF, 0xA, &D_801D4390, (__repair_phase_storage.value + (D_800DA26A + 0x64)) + ((*((u16 *) ((__base_D_800DA260 = D_800DA260) + __repair_phase_storage.value))) * 0x12), 0, &D_801CF4C8, 0xA, (float) 0xE, 0xA0, 0xFC);
              }
              while (0);
              var_s0 += 1;
            }
            while (var_s0 < ((s32) (*(__base_D_8011F2FC + sp54))));
          }
        }
      }
      while (0);
    }
  }
  while (0);
}

