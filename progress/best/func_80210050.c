extern unsigned char D_8021EEC0;
extern float D_8021EECC;
extern unsigned char D_8021EEC3;
extern int D_8021EFA0;
extern signed char D_8021EEC2;
extern short D_8021EEC4;
extern signed char D_8021EEC1;
extern signed char D_8021F260;
extern signed char D_8021F261;
extern signed char D_8021F262;
extern signed char D_8021F264;
s32 func_800294A0();
s16 func_800DE41C();
s32 func_80203DF8();
short func_80211B40();
s32 func_80211B90();
s32 func_80211C08();
s32 func_802153C4();
s32 func_8021FCA4();
extern char D_419270[];
extern char D_41CF00[];
typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F304;
extern Slot_8011F304 D_8011F304[];
extern unsigned int D_8011F340[];
extern char D_80187BF0[];
typedef struct 
{
  u16 f0;
  u8 pad[16];
} Slot_80187C00;
extern Slot_80187C00 D_80187C00[];
extern char D_8018F5D0[];
extern char D_80190C98[];
extern char D_801D5A90[];
extern f64 D_8021DD20;
extern s8 D_8021E15F;
extern char D_8021E230[];
extern char D_8021E231[];
extern u8 D_8021EEA8;
extern char D_8021F036[];
extern char D_8021F048[];
extern char D_8021F270[];
extern char D_8021FE04[];
extern char D_8022026C[];
extern f32 D_80220E40;
extern char D_80221080[];
extern char D_8022108C[];
extern char D_80237DC0[];
extern char D_80238EC0[];
extern char D_8030BD90[];
extern s32 func_8013DD2C;
extern s32 func_80149A80;
extern s32 func_8021078C;
extern s32 func_802109DC;
extern s32 func_80210D88;
extern s32 func_80210F70;
extern s32 func_802114C8;
inline static int inline_fn(s32 arg0)
{
  return arg0 * 0x10;
}

void func_80210050(void)
{
  char *var_a2;
  char *var_a3;
  s32 temp_a0;
  s32 temp_v0;
  volatile unsigned int temp_v0_2;
  s32 var_s2;
  s32 var_s2_2;
  s32 var_t1;
  s32 var_t1_2;
  s32 var_v0;
  s32 var_v0_2;
  s8 temp_t1;
  union 
  {
    void *pointer;
    s32 value;
  } __repair_phase_storage;
  func_800294A0(D_419270, D_8030BD90, D_41CF00 - D_419270);
  D_8021EEC0 = (u8) D_8021EEA8;
  D_8021EECC = (f32) (((f64) D_8021EEC0) * D_8021DD20);
  D_8021EEC3 = (u8) (*(D_8021E230 + (D_8021E15F * 0x110)));
  D_8021EFA0 = (s32) (((D_8021EFA0 & 0xFFFF7FFF) & (~0x4000)) & (~0x2000));
  D_8021EEC2 = 0;
  D_8021EEC4 = 0x88;
  D_8021EEC1 = 0x5A;
  D_8021F260 = 0;
  D_8021F261 = 0;
  D_8021F262 = 0;
  D_8021F264 = 0;
  func_80211B40(&D_8021EEC0);
  var_s2 = 0;
  func_80211B90();
  func_80211C08();
  var_t1 = 0;
  do
  {
    loop_2:
    temp_a0 = var_s2 * 2;

    *(temp_a0 + ((var_t1 * 0x12) + D_80187BF0)) = *(temp_a0 + (inline_fn(var_t1) + ((D_8021E15F * 0xE0) + D_8021F270)));
    var_s2 += 1;
    if (var_s2 < 8)
    {
      goto loop_2;
    }
    D_80187C00[var_t1].f0 = 0xFFFF;
    *(D_8021F036 + var_t1) = *(((D_8021E15F * 0xE) + D_8021F048) + var_t1);
    var_t1 += 1;
    var_s2 = 0;
  }
  while (var_t1 < 0xE);
  var_v0 = 0 * 8;
  __repair_rows_:
  {
    temp_v0 = (var_v0 + var_s2) * 4;
    *(D_80221080 + temp_v0) = 0;
    *(D_8022108C + temp_v0) = 0;
    var_s2 += 1;
    var_v0 = var_s2 * 8;
  }

  if ((var_s2 - 1) < (4 - 1))
  {
    goto __repair_rows_;
  }
  func_800DE41C(0, 0, 3, 0, 0x7F, 0, NULL, D_801D5A90, NULL, 0, 0, 0, 0, 0);
  func_802153C4(0x40, 0x3F000000, 0, 0xB7, 0xA9, 0x8A);
  func_8021FCA4();
  func_800DE41C(0, 0, 3, 0, 0x42, 0xFF, NULL, NULL, D_8021FE04, 0, 0, 0, 0);
  D_80220E40 = 10.0f;
  func_800DE41C(0, 0, 3, 0, 0x44, 0xFF, NULL, NULL, D_8022026C, 0, 0, 0);
  func_800DE41C(0, 0, 3, 0, 0x4A, 1, NULL, &func_80149A80, NULL, 0, 0, 0, 0, 0x41F00000, 0x42480000, 0, 0);
  func_800DE41C(0, 0, 3, 0, 0x4A, 0, NULL, &func_8021078C, &func_802109DC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  var_t1_2 = 0;
  var_s2_2 = 0;
  do
  {
    var_v0_2 = 0 * 2;
    loop_8:
    temp_v0_2 = (((var_v0_2 + var_s2_2) * 4) + var_s2_2) * 4;

    var_a3 = temp_v0_2 + ((var_t1_2 * 0x1A0) + D_8018F5D0);
    var_a2 = temp_v0_2 + D_80238EC0;
    (&__repair_phase_storage)->pointer = var_a2 + 0x30;
    loop_9:
    *((s32 *) (((char *) var_a3) + 0)) = *((s32 *) (((char *) var_a2) + 0));

    *((s32 *) (((char *) var_a3) + 4)) = (s32) (*((s32 *) (((char *) var_a2) + 4)));
    *((s32 *) (((char *) var_a3) + 8)) = (s32) (*((s32 *) (((char *) var_a2) + 8)));
    *((s32 *) (((char *) var_a3) + 0xC)) = (s32) (*((s32 *) (((char *) var_a2) + 0xC)));
    var_a2 += 0x10;
    var_a3 += 0x10;
    if (var_a2 != __repair_phase_storage.pointer)
    {
      goto loop_9;
    }
    *((s32 *) var_a3) = *((s32 *) var_a2);
    var_s2_2 += 1;
    var_v0_2 = var_s2_2 * 2;
    if (var_s2_2 < 8)
    {
      goto loop_8;
    }
    var_t1_2 = var_t1_2 + 1;
    var_s2_2 = 0;
  }
  while (var_t1_2 < 0xE);
  if (((s32) D_8021EEC3) > 0)
  {
    __repair_rows:
    {
      temp_t1 = *(((D_8021E15F * 0x110) + var_s2_2) + D_8021E231);
      __repair_phase_storage.value = temp_t1 * 2;
      *((u16 *) (D_80190C98 + (temp_t1 * 2))) = func_800DE41C(0, var_s2_2 & 0xFF, 1, 0, 0x54, 0xFF, (temp_t1 * 0x1A0) + D_8018F5D0, &func_80210D88, &func_80210F70, 0x40200000, 0x404CCC32, 0, 0xC18B3308, 0x43A68000, 0x4059997C, 0x3CCCCCCD, 0x3CCCCCCD);
      *((void **) (((char *) (*(D_8011F340 + (D_8011F304[*((u16 *) (D_80190C98 + __repair_phase_storage.value))].f0 * 0x64)))) + 4)) = (void *) ((temp_t1 * 0xC) + D_80237DC0);
      var_s2_2 += 1;
    }

    if (var_s2_2 < ((s32) D_8021EEC3))
    {
      goto __repair_rows;
    }
  }
  func_800DE41C(0, 0, 3, 0, 0x59, 0, NULL, NULL, &func_802114C8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, NULL, NULL, &func_8013DD2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  func_80203DF8(1, 6, 0, 0, 0);
}

