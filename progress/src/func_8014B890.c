u8 func_8014BA14(u16);
void func_801D65BC(s32);
typedef struct
{
  u8 kind;
  u8 pad1[0xC];
  u8 mode;
  u8 padE[0x30];
  u16 state;
  u8 pad40[0x24];
} Rec8014B890;
extern Rec8014B890 D_8011F2F0[];
extern u16 D_80189C9E;
extern u16 D_80189CAA;
extern u8 D_8018BC35[];
extern s16 D_80190CB2;

void func_8014B890(u16 arg0)
{
  Rec8014B890 *rec = &D_8011F2F0[arg0];
  s16 *timer = &D_80190CB2;
  u8 i;

  switch (rec->state)
  {
    case 0:
      for (i = 0; i < 6; i++)
      {
        if (D_8018BC35[i] == 0)
          break;
      }
      if (i < 3)
      {
        rec->kind = func_8014BA14(D_80189C9E);
        if (rec->kind == 0)
          func_801D65BC(0x12);
        if (rec->kind == 1)
          func_801D65BC(0x14);
        *timer = 0xB4;
      }
      else
      {
        rec->kind = func_8014BA14(D_80189CAA);
        if (rec->kind < 2)
          func_801D65BC(0x13);
        *timer = 0xC8;
      }
      rec->state = 0x11;
      if (rec->kind == 2)
        rec->state = 0xF0;
      break;
    case 0x11:
      if (--*timer < 0)
      {
        func_801D65BC(6);
        rec->state = 0xF0;
      }
      break;
    case 0xF0:
      rec->mode = 2;
      break;
  }
}
