void *__n_allocParam(void);
void _n_freePVoice(void *);
s32 func_8002E6E4(void *, s32, void *);
extern u8 *D_80046DF4;
#define F(p,t,o) (*(t *)((u8 *)(p)+(o)))
void n_alSynFreeVoice(void *v) {
void *p=F(v,void *,8); void *a;
if(p) {
 if(F(p,s32,0x88)) {
 a=__n_allocParam();
 if(a) {
 F(a,s32,4)=F(D_80046DF4,s32,0x28)+F(F(v,void *,8),s32,0x88);
 F(a,s16,8)=0;
 F(a,void *,12)=F(v,void *,8);
 func_8002E6E4(F(v,void *,8),3,a);
 F(v,void *,8)=0;
 }
 } else { _n_freePVoice(p); F(v,void *,8)=0; }
}
}
