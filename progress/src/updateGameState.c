extern s8 D_80046830;
extern u8 D_80046831;
extern u8 D_80046832;
extern s32 D_80046834;
extern s16 D_80046838;
extern u64 D_8006E790;
extern volatile u16 gameState;
extern u8 D_8006FB38[];
extern volatile short D_8006FE58;
extern volatile u16 D_80072BDC;
extern u8 D_80092C30[][0x23AC0];
extern u8 D_801E4420;
extern s32 D_801E99C0;
extern u8 sCars[][0x8F0];
extern u64 osGetTime(void);
extern void func_800341C0(u64);
/* Per-frame game state machine: runs the step for the current gameState, resets the sCars when a race starts, and flips the split-screen buffer. */ void updateGameState(s32 arg0)
{
  s32 carIndex;

  func_800341C0((u64) 0);
  if ((*(s32 *)&D_80046838) == 0)
  {
    func_801D7F60();
  }
  func_800E1728();
  switch (gameState)
  {
    case 0x384:
      func_800DE38C();
      func_800DE2E0();
      D_80046831 = 1;
      D_80046832 = 0;
      (*(u8 *)&D_80046830) = 0;
      for (carIndex = 0; carIndex < 7; carIndex++)
      {
        resetCar(sCars[carIndex]);
      }
      gameState = 8;
      D_80072BDC = gameState;
      gameState = 0x18;
      D_8006FE58 = 0;
      break;

    case 0:
      break;

    case 1:
      gameState = 0x12;
      break;

    case 2:
      func_801FD3B4();
      gameState = 3;
      break;

    case 3:
      func_801FD528();
      D_8006FE58 = 1;
      break;

    case 8:
      func_80143D70();
      gameState = 9;
      break;

    case 9:
      func_80143F68();
      D_8006FE58 = 1;
      break;

    case 0xA:
      initRaceScene();
      gameState = 0xB;
      break;

    case 0xB:
      func_80144800();
      D_8006FE58 = 1;
      break;

    case 0x12:
      func_8022F0E0();
      gameState = 0x13;
      break;

    case 0x13:
      D_8006FE58 = 1;
      func_8022F2F8();
      break;

    case 0x14:
      func_8022E6B0();
      gameState = 0x15;
      break;

    case 0x15:
      func_8022F0D8();
      D_8006FE58 = 1;
      break;

    case 0x1A:
      initRaceStage();
      gameState = 0x1B;
      break;

    case 0x1B:
      func_80232818();
      D_8006FE58 = 1;
      break;

    case 0x16:
      func_801B3C74();
      gameState = 0x17;
      alSeqpStop(D_8006FB38);
      break;

    case 0x17:
      func_80192670();
      D_8006FE58 = 1;
      break;

    case 0x18:
      if ((D_801E99C0 != 0) && (D_801E4420 & 1))
    {
      func_801E0B98();
      gameState = 0x19;
    }
    else
    {
      gameState = D_80072BDC;
    }
      break;

    case 0x19:
      func_801E0F08();
      D_8006FE58 = 1;
      break;

  }

  if (((arg0 < 2) && (D_8006FE58 == 1)) && ((D_80046831 != 0) || (D_80046832 != 0)))
  {
    buildFrameDisplayList(D_80092C30[D_80046834]);
    do
    {
      D_80046834 ^= 1;
    }
    while (0);
    D_80046831 = 0;
  }
  else
  {
    D_80046831 = 1;
  }
  D_8006E790 = osGetTime();
}
