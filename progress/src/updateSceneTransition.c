extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
extern u16 D_80190C98;
extern u8 D_80190CB0;
extern u8 D_80190CA8;
extern u8 D_80190CB2;
extern u16 sMenuState;
extern s16 sFadeLevel;
extern u8 menuNextScene;
extern s32 D_8021AFDC;
extern s32 menuChoice;
extern s32 D_80168BB0;
extern s16 gameState;
s32 objCreate();
void initModelTransforms(void);
void initObjList(void);
void createNoticeScreenObj(void);
void func_801CF468(s32, s32, s32, s32);
void setScreenTransition(s32, s32, s32, s32, s32);
void func_801E1EEC(s32, s32);
void updateMenuSelect(void);
void drawMenuOptions(void);
void updateChoiceMenu(void);
void drawSelectionPanel(void);
void updateSelectMenu(void);
void func_80216D80(void);
/* Scene transition state machine for one object: spawns the transition objects in order, waits for them to finish, then resets the scene and sets the next state. */ void updateSceneTransition(s32 objIndex)
{
  u8 *entry;
  u16 *spawnedIdPtr;
  u8 *spawnedActivePtr;
  u16 state;
  entry = D_8011F2F0 + ((objIndex & 0xFFFF) * 0x64);
  spawnedIdPtr = &D_80190C98;
  spawnedActivePtr = ((u8 *) spawnedIdPtr) + 0x18;
  state = *((u16 *) (entry + 0x3E));
  switch (state)
  {
    case 0x0:
      if ((*((u8 *) (*((u8 **) (D_8011F350 + (D_8018BC3C * 0x64)))))) == 0)
    {
      sFadeLevel = 0;
      *((u16 *) (entry + 0x3E)) = 0x10;
      if (!(menuNextScene == 2))
      {
        if (menuNextScene == 3)
        {
          *((u16 *) (entry + 0x3E)) = 0x20;
        }
      }
      else
      {
        *((u16 *) (entry + 0x3E)) = 0x30;
        D_80190CB2 = 0;
        do
        {
          func_801E1EEC(7, 0);
        }
        while (0);
      }
    }
      break;

    case 0x10:
      *spawnedIdPtr = objCreate(0, 0, 3, 0, 0x4A, 0, 0, updateMenuSelect, drawMenuOptions, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      *spawnedActivePtr = 1;
      *((u16 *) (entry + 0x3E)) = 0x18;
      goto check;

    case 0x20:
      *spawnedIdPtr = objCreate(0, 0, 3, 0, 0x4A, 0, 0, updateChoiceMenu, drawSelectionPanel, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      *spawnedActivePtr = 1;
      *((u16 *) (entry + 0x3E)) = 0x28;
      goto check;

    case 0x30:
      D_80190CA8 = 0;
      *spawnedIdPtr = objCreate(0, 0, 3, 0, 0x4A, 0, 0, updateSelectMenu, func_80216D80, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      *spawnedActivePtr = 1;
      *((u16 *) (entry + 0x3E)) = 0x38;
      goto check;

    case 0x18:

    case 0x28:

    case 0x38:
      check:
    if ((*spawnedActivePtr) == 0)
    {
      D_8011F2FD[(*spawnedIdPtr) * 0x64] = 2;
      *((u16 *) (entry + 0x3E)) = sMenuState;
    }

      break;

    case 0xF0:
      setScreenTransition(2, 6, 0, 0, 0);
      *((u16 *) (entry + 0x3E)) = 0xF8;

    case 0xF8:
      if ((*((u8 *) (*((u8 **) (D_8011F350 + (D_8018BC3C * 0x64)))))) == 0)
    {
      initModelTransforms();
      initObjList();
      createNoticeScreenObj();
      func_801CF468(D_8018BC3C, 0, 0, 0);
      D_8021AFDC = 0x2A;
      menuChoice = 2;
      D_80168BB0 = 2;
      gameState = 0x16;
    }
      break;

    case 0xFA:
      setScreenTransition(2, 0x14, 0, 0, 0);
      *((u16 *) (entry + 0x3E)) = 0xFB;

    case 0xFB:
      if ((*((u8 *) (*((u8 **) (D_8011F350 + (D_8018BC3C * 0x64)))))) == 0)
    {
      initModelTransforms();
      initObjList();
      createNoticeScreenObj();
      func_801CF468(D_8018BC3C, 0, 0, 0);
      D_8021AFDC = 0x2A;
      menuChoice = 2;
      D_80168BB0 = 2;
    }
      break;

  }

}

