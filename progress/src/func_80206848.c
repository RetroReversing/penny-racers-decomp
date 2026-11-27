typedef struct
{
  u16 f0;
  u8 pad[98];
} Slot_8011F32E;
typedef struct
{
  u8 *p;
  u8 pad[96];
} Slot_8011F350;
extern Slot_8011F32E D_8011F32E[];
extern Slot_8011F350 D_8011F350[];
extern u16 D_8018BC3C;
extern s32 D_80168BB0;
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern s32 D_8021B060;
extern u8 D_8021B0C0;
s32 func_8014A870(s32, s32, s32);
void func_8014B854(s32);
void func_800DE2E0(void);
void func_800DE38C(void);
void func_80231C5C(void);
void func_801CF468(s32, s32, s32, s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_80206848(u16 arg0)
{
  s32 buttons;
  switch (D_8011F32E[arg0].f0) {
    case 0:
      if (*D_8011F350[D_8018BC3C].p == 0) {
        D_8011F32E[arg0].f0 = 1;
      }
      break;
    case 1:
      buttons = func_8014A870(0x1E, 7, 0);
      if (buttons & 1) {
        func_8014B854(0x3B);
        D_8021B0C0--;
      }
      if (buttons & 2) {
        func_8014B854(0x3B);
        D_8021B0C0++;
      }
      D_8021B0C0 &= 3;
      if (buttons & 0x10) {
        func_8014B854(0x3D);
        switch (D_8021B0C0) {
          case 0:
            func_80203DF8(2, 6, 0, 0, 0);
            D_8021AFDC = 2;
            D_8021B060 = 4;
            D_8011F32E[arg0].f0 = 3;
            break;
          case 1:
            func_80203DF8(2, 6, 0, 0, 0);
            D_8021AFDC = 2;
            D_8021AFE0 = 2;
            D_8021B060 = 0x2A;
            D_8011F32E[arg0].f0 = 3;
            break;
          case 2:
            func_80203DF8(2, 6, 0, 0, 0);
            D_8021AFDC = 2;
            D_8021AFE0 = 2;
            D_8021B060 = 0x1C;
            D_8011F32E[arg0].f0 = 3;
            break;
          case 3:
            func_80203DF8(2, 6, 0, 0, 0);
            D_8021AFDC = 2;
            D_8021AFE0 = 2;
            D_8021B060 = 0x26;
            D_8011F32E[arg0].f0 = 3;
            break;
        }
      }
      if (buttons & 0x20) {
        func_8014B854(0x3A);
        func_80203DF8(2, 6, 0, 0, 0);
        D_8021AFDC = 2;
        D_8021B060 = 0;
        D_8011F32E[arg0].f0 = 3;
      }
      break;
    case 3:
      if (*D_8011F350[D_8018BC3C].p == 0) {
        func_800DE38C();
        func_800DE2E0();
        func_80231C5C();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        D_80168BB0 = D_8021B060;
      }
      break;
  }
}
