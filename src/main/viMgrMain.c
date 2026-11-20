#include "common_local_source_339302416886.h"

extern u16 D_8006C370; extern u32 D_8006F9EC,D_8006E798; extern u64 D_8006FE98;
void *func_8003F320(void); void func_8003A140(void); u32 func_8003EA20(void); void __osTimerInterrupt(void); void osRecvMesg(s32,void*,s32);void osSendMesg(s32,s32,s32);
#define F(p,t,o) (*(t*)((u8*)(p)+(o)))
void viMgrMain(void *arg0){
 u16 *msg=NULL; s32 first=0; u32 count; void *ctx; void *q;
 ctx=arg0;
 D_8006C370=F(func_8003F320(),u16,2); if(!D_8006C370)D_8006C370=1;
 first=0;
 q=ctx;
 for(;;){osRecvMesg(F(q,s32,12),&msg,1);switch(*msg){case 13:
 func_8003A140(); if(--D_8006C370==0){ctx=func_8003F320();if(F(ctx,s32,16))osSendMesg(F(ctx,s32,16),F(ctx,s32,20),0);D_8006C370=F(ctx,u16,2);}
 D_8006F9EC++;if(first){first=0;count=func_8003EA20();D_8006FE98=count;}
 count=D_8006E798;D_8006E798=func_8003EA20();count=D_8006E798-count;D_8006FE98+=count;break;
 case 14:__osTimerInterrupt();break;}}}
