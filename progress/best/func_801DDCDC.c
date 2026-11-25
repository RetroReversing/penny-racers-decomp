s32 nuContPakOpen();
extern s32 D_801E87C4;
extern char D_801F1898[];
typedef struct 
{
  u16 f0;
  u8 pad[14];
} Slot_801F18A0;
extern Slot_801F18A0 D_801F18A0[];
void func_801DDCDC(s32 arg0, s32 arg1)
{
  u8 temp_a1;
  s32 temp_s0;
  unsigned short temp_a2;
  do
  {
    temp_a2 = D_801F18A0[arg0 & 0xFF].f0;
  }
  while (0);
  switch (temp_a2)
  {
    case 0:
      temp_a2 = 0;
      break;

    case 2:
      temp_a2 = 1;
      temp_a1 = arg0 & 0xFF;
      if ((arg1 & 0xFF) == 1)
    {
      temp_s0 = temp_a1 * 0x10;
      nuContPakOpen(temp_s0 + D_801F1898, temp_a1);
      temp_a2 = (D_801F18A0[temp_a1].f0 != 0) * 2;
    }
      break;

    case 10:
      temp_a2 = 2;
      break;

    case 11:

    default:
      temp_a2 = 3;
      break;

    case 5:
      temp_a2 = 4;
      break;

  }

  D_801E87C4 = temp_a2;
}

