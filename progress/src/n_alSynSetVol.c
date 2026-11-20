void *__n_allocParam(void);
s32 _n_timeToSamples(s32);
s32 func_8002E6E4(void *,s32,void *);
extern u8 *D_80046DF4;
#define F(p,t,o) (*(t *)((u8 *)(p)+(o)))
void n_alSynSetVol(void *v,s16 vol,s32 time) {
void *a;
s32 when;
if(F(v,void *,8)) {
 a=__n_allocParam();
 if(a) {
 when=F(D_80046DF4,s32,0x28)+F(F(v,void *,8),s32,0x88);
 F(a,s16,8)=0xb;
 F(a,s32,12)=vol;
 F(a,s32,4)=when;
 F(a,s32,16)=_n_timeToSamples(time);
 F(a,s32,0)=0;
 func_8002E6E4(F(v,void *,8),3,a);
 }
}
}
