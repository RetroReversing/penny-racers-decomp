extern u8 D_8018A277[],D_80190CB2;
void gfxSetup2DState(void);
void gfxDrawSprite(s32,s32,s16,s32,s32);
void func_8014B048(s32 arg0){
s32 i,v;
gfxSetup2DState();
i=0;
do{
if((D_8018A277[i]&32)&&(D_8018A277[i]!=255)){
v=15;if(D_80190CB2&2)v=16;
gfxDrawSprite(arg0,165,(s16)(i*37+71),7,v);
}
i++;
}while(i<3);
}
