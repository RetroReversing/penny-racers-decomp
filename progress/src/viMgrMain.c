extern u16 D_8006C370; extern u32 D_8006F9EC,D_8006E798; extern u64 D_8006FE98;
void *func_8003F320(void); void __osViSwapContext(void); u32 func_8003EA20(void); void __osTimerInterrupt(void); void osRecvMesg(s32,void*,s32);void osSendMesg(s32,s32,s32);
#define F(p,t,o) (*(t*)((u8*)(p)+(o)))
/* VI manager thread loop: waits for event messages, swaps the display context on retrace, and tracks frame timing and timer interrupts. */ void viMgrMain(void *arg0){
 u16 *retMsg=NULL; s32 firstFrame=0; u32 elapsed; void *devMgr; void *mgr;
 devMgr=arg0;
 D_8006C370=F(func_8003F320(),u16,2); if(!D_8006C370)D_8006C370=1;
 firstFrame=0;
 mgr=devMgr;
 for(;;){osRecvMesg(F(mgr,s32,12),&retMsg,1);switch(*retMsg){case 13:
 __osViSwapContext(); if(--D_8006C370==0){devMgr=func_8003F320();if(F(devMgr,s32,16))osSendMesg(F(devMgr,s32,16),F(devMgr,s32,20),0);D_8006C370=F(devMgr,u16,2);}
 D_8006F9EC++;if(firstFrame){firstFrame=0;elapsed=func_8003EA20();D_8006FE98=elapsed;}
 elapsed=D_8006E798;D_8006E798=func_8003EA20();elapsed=D_8006E798-elapsed;D_8006FE98+=elapsed;break;
 case 14:__osTimerInterrupt();break;}}}
