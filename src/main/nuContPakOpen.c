#include "common.h"

s32 osCreateMesgQueue(void *, void *, s32);
s32 osRecvMesg(void *, void *, s32);
s32 osSendMesg(void *, void *, s32);
extern s32 D_80046D6C;
extern s32 D_80092BE0;
extern s32 D_800DDEB8;

typedef struct {
  s32 w[6];
} MsgQueue;

typedef struct {
  s16 type;
  s32 *data;
  void **arg;
} PakMsg;

void nuContPakOpen(void **arg0, s32 arg1)
{
  MsgQueue sp10;
  PakMsg sp28;
  s32 sp38;
  void *temp_v0;

  if (D_80046D6C != 0)
  {
    osCreateMesgQueue(&sp10, &sp38, 1);
    temp_v0 = (char *) (arg1 * 0x68) + (s32) (&D_800DDEB8);
    *arg0 = temp_v0;
    *((s32 *) (((char *) temp_v0) + 8)) = arg1;
    sp28.type = 0x2001;
    sp28.arg = arg0;
    sp28.data = (s32 *) &sp10;
    osSendMesg(&D_80092BE0, &sp28, 1);
    osRecvMesg(&sp10, 0, 1);
  }
}
