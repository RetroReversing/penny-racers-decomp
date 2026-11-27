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
extern Slot_8011F32E playerSlots[];
extern Slot_8011F350 D_8011F350[];
extern u16 D_8018BC3C;
extern s32 D_80168BB0;
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern s32 menuChoice;
extern u8 menuCursor;
s32 getMenuNavMask(s32, s32, s32);
void playMenuSound(s32);
void initObjList(void);
void initModelTransforms(void);
void createNoticeScreenObj(void);
void func_801CF468(s32, s32, s32, s32);
void setScreenTransition(s32, s32, s32, s32, s32);
/* Per-frame menu state machine: waits for the load, handles cursor input, then starts the transition and publishes menuChoice. */ void updateMenuScreen(u16 slot)
{
  s32 navFlags;
  switch (playerSlots[slot].f0) {
    case 0:
      if (*D_8011F350[D_8018BC3C].p == 0) {
        playerSlots[slot].f0 = 1;
      }
      break;
    case 1:
      navFlags = getMenuNavMask(0x1E, 7, 0);
      if (navFlags & 1) {
        playMenuSound(0x3B);
        menuCursor--;
      }
      if (navFlags & 2) {
        playMenuSound(0x3B);
        menuCursor++;
      }
      menuCursor &= 3;
      if (navFlags & 0x10) {
        playMenuSound(0x3D);
        switch (menuCursor) {
          case 0:
            setScreenTransition(2, 6, 0, 0, 0);
            D_8021AFDC = 2;
            menuChoice = 4;
            playerSlots[slot].f0 = 3;
            break;
          case 1:
            setScreenTransition(2, 6, 0, 0, 0);
            D_8021AFDC = 2;
            D_8021AFE0 = 2;
            menuChoice = 0x2A;
            playerSlots[slot].f0 = 3;
            break;
          case 2:
            setScreenTransition(2, 6, 0, 0, 0);
            D_8021AFDC = 2;
            D_8021AFE0 = 2;
            menuChoice = 0x1C;
            playerSlots[slot].f0 = 3;
            break;
          case 3:
            setScreenTransition(2, 6, 0, 0, 0);
            D_8021AFDC = 2;
            D_8021AFE0 = 2;
            menuChoice = 0x26;
            playerSlots[slot].f0 = 3;
            break;
        }
      }
      if (navFlags & 0x20) {
        playMenuSound(0x3A);
        setScreenTransition(2, 6, 0, 0, 0);
        D_8021AFDC = 2;
        menuChoice = 0;
        playerSlots[slot].f0 = 3;
      }
      break;
    case 3:
      if (*D_8011F350[D_8018BC3C].p == 0) {
        initModelTransforms();
        initObjList();
        createNoticeScreenObj();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        D_80168BB0 = menuChoice;
      }
      break;
  }
}
