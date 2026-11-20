#include "common_local_source_339302417272.h"

extern u8 D_8018A277[],D_80190CB2;
void func_801CA140(void);
void func_8014A4C8(s32,s32,s16,s32,s32);
void func_8014B048(s32 arg0){
s32 i,v;
func_801CA140();
i=0;
do{
if((D_8018A277[i]&32)&&(D_8018A277[i]!=255)){
v=15;if(D_80190CB2&2)v=16;
func_8014A4C8(arg0,165,(s16)(i*37+71),7,v);
}
i++;
}while(i<3);
}
