typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern u8 D_8011F350[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
void func_80207044(s32 arg0)
{
  u16 state;
  if (D_8011F32E)
  {
    state = D_8011F32E[arg0 & 0xFFFF].f0;
  }
  else
  {
    state = D_8011F32E[arg0 & 0xFFFF].f0;
  }
  if (state == 0)
  {
    if ((*(*((u8 **) (D_8011F350 + (D_8018BC3C * 0x64))))) == 0)
    {
      if (D_8018BC3C || arg0)
      {
        D_8011F32E[arg0 & 0xFFFF].f0 = 1;
      }
      else
      {
        D_8011F32E[arg0 & 0xFFFF].f0 = 1;
      }
    }
  }
}

