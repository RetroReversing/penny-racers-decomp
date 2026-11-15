extern void *func_80038340(void *, void *, s32, s32, s32);
extern void alEvtqNew(void *, void *, s32);
extern s32 func_8002D0CC(void *, void *);
extern void alEvtqPostEvent(void *, s16 *, s32);
extern void func_8002FEBC(void *);
extern void func_8002C7D8(void);
void n_alSndpNew(void *arg0, void *arg1)
{
  volatile short sp18;
  u32 i;
  void *temp_s0;
  u8 *p;
  s32 pad[2];
  *((s32 *) (((u8 *) arg0) + 0x3C)) = -1;
  *((s32 *) (((u8 *) arg0) + 0x48)) = 0x3E80;
  *((u32 *) (((u8 *) arg0) + 0x44)) = *((u32 *) arg1);
  p = func_80038340(0, 0, *((s32 *) (((u8 *) arg1) + 8)), 1, (*((u32 *) arg1)) * 0x30);
  *((void **) (((u8 *) arg0) + 0x40)) = p;
  for (i = 0; i < (*((u32 *) arg1)); i++)
  {
    *((s32 *) (p + 0x1C)) = 0;
    p += 0x30;
  }

  temp_s0 = ((u8 *) arg0) + 0x14;
  alEvtqNew(temp_s0, func_80038340(0, 0, *((s32 *) (((u8 *) arg1) + 8)), 1, (*((s32 *) (((u8 *) arg1) + 4))) * 0x1C), *((s32 *) (((u8 *) arg1) + 4)));
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((void **) (((u8 *) arg0) + 8)) = func_8002C7D8;
  *((void **) (((u8 *) arg0) + 4)) = arg0;
  func_8002FEBC(arg0);
  sp18 = 5;
  alEvtqPostEvent(temp_s0, &sp18, *((s32 *) (((u8 *) arg0) + 0x48)));
  *((s32 *) (((u8 *) arg0) + 0x4C)) = func_8002D0CC(temp_s0, ((u8 *) arg0) + 0x28);
}

