s32 nuContPakOpen();
extern s32 D_801E87C4;
extern char D_801F1898[];
typedef struct
{
  s32 f0;
  u8 pad[12];
} Slot_801F18A0;
extern Slot_801F18A0 D_801F18A0[];

void func_801DDCDC(s32 arg0, s32 arg1)
{
  s32 v;

  switch (D_801F18A0[arg0 & 0xFF].f0) {
    case 0:
      v = 0;
      break;
    case 2:
      if ((arg1 & 0xFF) == 1) {
        nuContPakOpen(D_801F1898 + ((arg0 & 0xFF) * 0x10), arg0 & 0xFF);
        v = (D_801F18A0[arg0 & 0xFF].f0 != 0) * 2;
      } else {
        v = 1;
      }
      break;
    case 10:
      v = 2;
      break;
    case 1:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 11:
    default:
      v = 3;
      break;
    case 5:
      v = 4;
      break;
  }
  D_801E87C4 = v;
}
