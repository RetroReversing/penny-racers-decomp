extern s32 D_80046D74;
extern u8 D_80092BE0[];
void osCreateMesgQueue(void *mq, void *msg, s32 count);
s32 osSendMesg(void *mq, void *msg, s32 flags);
s32 osRecvMesg(void *mq, void *msg, s32 flags);
typedef struct 
{
  s16 type;
  s16 pad12;
  void *p14;
  s32 f18;
  s32 f1c;
  s8 f20;
  s8 pad21;
  s16 f22;
} Msg;
s32 func_800297E8(s8 arg0, s32 arg1, s16 arg2)
{
  u8 mq[0x18];
  Msg m;
  s32 buf;
  s32 *q;
  s16 kind = 0x4001;
  if (D_80046D74 != 0)
  {
    osCreateMesgQueue(mq, &buf, 1);
    q = (s32 *)mq;
    m.f20 = arg0;
    m.type = kind;
    m.f18 = arg1;
    m.f22 = arg2;
    m.p14 = q;
    osSendMesg(D_80092BE0, &m, 1);
    osRecvMesg(q, 0, 1);
    return m.f1c;
  }
  return -1;
}
