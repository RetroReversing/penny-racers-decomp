void *func_8002AB9C();
s32 func_8002E6E4(void *, s32, void *);
extern void *D_80046DF4;
volatile unsigned short n_alSynStopVoice(void *arg0)
{
  if ((*((void **) (((char *) arg0) + 8))) != NULL)
  {
    void *temp_v0;
    temp_v0 = func_8002AB9C();
    if (temp_v0 != NULL)
    {
      *((s16 *) (((char *) temp_v0) + 8)) = 0xF;
      *((s32 *) (((char *) temp_v0) + 0)) = 0;
      *((s32 *) (((char *) temp_v0) + 4)) = (s32) ((*((s32 *) (((char *) D_80046DF4) + 0x28))) + (*((s32 *) (((char *) (*((void **) (((char *) arg0) + 8)))) + 0x88))));
      func_8002E6E4(*((void **) (((char *) arg0) + 8)), 3, temp_v0);
    }
  }
}

