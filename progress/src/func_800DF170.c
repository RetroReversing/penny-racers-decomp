typedef struct { unsigned short flags; unsigned char pad[98]; } Slot;
extern Slot sNodeFlags[];

void func_800DF170(unsigned short arg0)
{
  sNodeFlags[arg0].flags |= 0x20;
}
