typedef struct { unsigned short flags; unsigned char pad[98]; } Slot;
extern Slot D_8011F2F2[];

void func_800DF1A8(unsigned short arg0)
{
  D_8011F2F2[arg0].flags &= ~0x20;
}
