s32 alLink(void *, void *);
s32 alUnlink(void *);
s32 func_8002D164(void *, s16 *, s32);
s32 func_80032300(void *, s32);
s32 n_alSynSetVol(void *, s32, s32);
void __n_seqpReleaseVoice(void *arg0, void *arg1, s32 arg2)
{
  int sp10;
  void *sp14;
  volatile unsigned long long pad2;
  void *temp_s1;
  void *temp_s2;
  volatile unsigned short pad;
  void *var_s0;
  temp_s2 = *((void **) (((char *) arg1) + 0x10));
  if ((*((u8 *) (((char *) temp_s2) + 0x34))) == 0)
  {
    var_s0 = *((void **) (((char *) arg0) + 0x50));
    if (var_s0 != NULL)
    {
      do
      {
        temp_s1 = *((void **) (((char *) var_s0) + 0));
        if (((*((s16 *) (((char *) var_s0) + 0xC))) == 6) && ((*((s32 *) (((char *) var_s0) + 0x10))) == arg1))
        {
          if (temp_s1 != NULL)
          {
            *((s32 *) (((char *) temp_s1) + 8)) = (s32) ((*((s32 *) (8 + ((char *) temp_s1)))) + (*((s32 *) (((char *) var_s0) + 8))));
          }
          alUnlink(var_s0);
          alLink(var_s0, arg0 + 0x48);
        }
        var_s0 = temp_s1;
      }
      while (var_s0 != NULL);
    }
  }
  *((s8 *) (((char *) temp_s2) + 0x33)) = 0;
  *((u8 *) (((char *) temp_s2) + 0x34)) = 3U;
  *((s8 *) (((char *) temp_s2) + 0x30)) = 0;
  *((s32 *) (((char *) temp_s2) + 0x24)) = (s32) ((*((s32 *) (((char *) arg0) + 0x1C))) + arg2);
  func_80032300(arg1, 0);
  n_alSynSetVol(arg1, 0, arg2);
  sp10 = 5;
  sp14 = arg1;
  func_8002D164(arg0 + 0x48, &sp10, arg2);
}

