#include "common_local_source_339302417645.h"

s16 func_800DE41C(s32,s32,s32,s32,s32,s32,s32,void*,void*,s32,s32,s32,s32,s32,s32,s32,s32,s32);
extern s16 D_8021F09A; extern u16 D_8021F02E[];
extern s32 func_80215480,func_802155CC;
void func_802153C4(s32 arg0,s32 arg1,s32 arg2,s8 arg3,u8 arg4,u8 arg5){
D_8021F09A=func_800DE41C(0,0,3,0,arg0&255,0,0,&func_80215480,&func_802155CC,arg1,arg2,0,0,0,0,0,0,0);
D_8021F02E[0]=0;D_8021F02E[1]=0;
((u8*)D_8021F02E)[4]=arg3;((u8*)D_8021F02E)[5]=arg4;((u8*)D_8021F02E)[6]=arg5;
}
