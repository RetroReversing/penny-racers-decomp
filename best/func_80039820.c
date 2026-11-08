/* identical to func_8008DD00 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
typedef struct {u32 type,flags,boot,bootSize,ucode,ucodeSize,data,dataSize,stack,stackSize,output,outputSize,input,inputSize,yield,yieldSize;} Task8;
extern Task8 D_800AB9A0;
void func_8003DAA0(void *,void *,s32);
u32 func_80034640(void *);
void func_8003EBF0(void *,s32);
void func_8003F0D0(s32);
s32 func_8003F0E0(s32);
s32 func_8003F110(s32,s32,void *,s32);
s32 func_8003F0A0(void);
void func_80039820(Task8 *arg0) {
Task8 *p=&D_800AB9A0;
func_8003DAA0(arg0,p,64);
if (D_800AB9A0.ucode) {
D_800AB9A0.ucode=func_80034640((void *)D_800AB9A0.ucode);
}
if (D_800AB9A0.data) {
D_800AB9A0.data=func_80034640((void *)D_800AB9A0.data);
}
if (D_800AB9A0.stack) {
D_800AB9A0.stack=func_80034640((void *)D_800AB9A0.stack);
}
if (D_800AB9A0.output) {
D_800AB9A0.output=func_80034640((void *)D_800AB9A0.output);
}
if (D_800AB9A0.outputSize) {
D_800AB9A0.outputSize=func_80034640((void *)D_800AB9A0.outputSize);
}
if (D_800AB9A0.input) {
D_800AB9A0.input=func_80034640((void *)D_800AB9A0.input);
}
if (D_800AB9A0.yield) {
D_800AB9A0.yield=func_80034640((void *)D_800AB9A0.yield);
}
if(D_800AB9A0.flags&1) {
D_800AB9A0.data=D_800AB9A0.yield;
D_800AB9A0.dataSize=D_800AB9A0.yieldSize;
arg0->flags&=~1;
if(D_800AB9A0.flags&4) {
D_800AB9A0.ucode=*(u32 *)((arg0->yield+0xBFC)|0xA0000000);
}
}
func_8003EBF0(p,64);
func_8003F0D0(0x2B00);
do {}while(func_8003F0E0(0x04001000)==-1);
do {}while(func_8003F110(1,0x04000FC0,p,64)==-1);
do {}while(func_8003F0A0()!=0);
do {}while(func_8003F110(1,0x04001000,(void *)p->boot,p->bootSize)==-1);
}
