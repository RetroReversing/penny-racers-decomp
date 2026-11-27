typedef struct { u16 f0; u8 pad[98]; } Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
typedef struct { u8 *p; u8 pad[96]; } Slot_8011F350;
extern Slot_8011F350 D_8011F350[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern s32 D_801E99C0;
extern s32 D_8021AFDC;
extern s32 D_8021B060;
extern s8 D_8021B079;
extern u8 D_8021B0B0;
extern s8 D_8021B0C0;
extern f32 D_8021E140;
extern volatile s32 D_8021E168;
extern u8 D_8021E678;
extern f32 D_8021EEA0;
extern s32 D_8021EEB4;
extern u16 D_8021F02C;
void func_800DE2E0(void);
void func_800DE38C(void);
void func_8014B854(s32);
void func_801CF468(u16, s32, s32, s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_80205EBC(f32 *, s32, f32, s32, s32);
void func_80231C5C(void);

void func_80206164(u16 arg0)
{
  switch (D_8011F32E[arg0].f0) {
  case 0:
    D_8021B0C0 = 0;
    if (D_8011F350[D_8018BC3C].p[0] == 0) {
      D_8011F32E[arg0].f0 = 1;
    }
    D_8021F02C = 0;
    D_8021B0B0 = 0;
    break;
  case 1: {
    s32 *state;
    state = &D_801E99C0;
    do {} while (0);
    if (*state == 1) {
      if (D_8021E678 == 2) {
        func_8014B854(0x3D);
        func_80203DF8(2, 6, 0, 0, 0);
        D_8021B060 = 2;
        D_8011F32E[arg0].f0 = 2;
        if (*(u16 *) ((u8 *) state - 0x68) == 0x3404) {
          D_8021B079 = 1;
        }
      } else if (D_801E99C0 == 1 && D_8021E678 != 2) {
        D_8021E678 = 1;
        D_8021EEA0 = 0.0f;
        D_8021EEB4 = 0;
        D_8021E168 = 0x22;
        D_8021E140 = 0.0f;
      }
    }
    { s32 v; if (D_8021E168 >= 0x22) v = 0x22; else v = D_8021E168 + 0xA; D_8021E168 = v; }
    if (D_8021E168 == 0x22 && D_8021E678 == 0) {
      func_80205EBC(&D_8021E140, 0, D_8021EEA0, D_8021EEB4, D_8021B0B0);
      if ((s32) D_8021E140 == (s32) D_8021EEA0) {
        D_8021EEA0 = D_8021EEA0 / 1.8;
      }
      if (-0.5 < D_8021EEA0) {
        D_8021E678 = 1;
      }
      if (D_8021B0B0 == 0) {
        D_8021B0B0 = 1;
      }
    }
    D_8021F02C++;
    if (D_8021F02C >= 0x259) {
      func_80203DF8(2, 0x3C, 0xFF, 0xFF, 0xFF);
      D_8021B060 = 0x2C;
      D_8011F32E[arg0].f0 = 2;
    }
    break;
  }
  case 2:
    if (D_8011F350[D_8018BC3C].p[0] == 0) {
      func_800DE38C();
      func_800DE2E0();
      func_80231C5C();
      func_801CF468(D_8018BC3C, 0, 0, 0);
      D_8021AFDC = 0;
      D_80168BB0 = D_8021B060;
    }
    break;
  }
}
