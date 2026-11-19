#include "common.h"

void *__n_allocParam(void);
s32 func_8002E6E4(u8 *, s32, void *);
extern void *D_80046DF4;
void n_alSynStopVoice(void *arg0)
{
 if (*(void **)((u8 *)arg0+8)) {
 void *p = __n_allocParam();
 if(p) {
 s32 delta = *(s32 *)((u8 *)D_80046DF4+0x28) + *(s32 *)((u8 *)*(void **)((u8 *)arg0+8)+0x88);
 *(s16 *)((u8 *)p+8)=15;
 *(s32 *)p=0;
 *(s32 *)((u8 *)p+4)=delta;
 func_8002E6E4(*(u8 **)((u8 *)arg0+8),3,p);
 }
 }
}
