#include "common.h"

extern u8 *D_80046DF4;
void alUnlink(void *);
void alLink(void *,void *);
#define F(p,t,o) (*(t *)((u8 *)(p)+(o)))
s32 _allocatePVoice(void **out,s16 priority) {
u8 *p;
s32 stolen=0;
p=F(D_80046DF4,u8 *,0x20);
if(p || (p=F(D_80046DF4,u8 *,0x10))) {
*out=p;
alUnlink(p);
alLink(p,D_80046DF4+0x18);
} else {
p=F(D_80046DF4,u8 *,0x18);
while(p) {
if(priority>=F(F(p,u8 *,8),s16,0x16) && !F(p,s32,0x88)) {
*out=p;
stolen=1;
priority=F(F(p,u8 *,8),s16,0x16);
}
p=F(p,u8 *,0);
}
}
return stolen;
}
