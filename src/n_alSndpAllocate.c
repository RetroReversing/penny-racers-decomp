extern void *D_80046DF4;
s32 n_alSndpAllocate(void *arg0) {
 s16 i;
 void *p, *player;
 s32 base;
 player = *(void **)((char *)D_80046DF4+0xC);
 base = *(s32 *)((char *)player+0x40);
 for(i=0;i<*(s32 *)((char *)player+0x44);i++) {
 p=(void *)(i*0x30+base);
 if (*(void **)((char *)p+0x1C)==0) {
 *(void **)((char *)p+0x1C)=arg0;
 *(s16 *)((char *)p+0x20)=5;
 *(s32 *)((char *)p+0x28)=0;
 *(f32 *)((char *)p+0x24)=1.0f;
 *(s8 *)((char *)p+0x2E)=0x40;
 *(s8 *)((char *)p+0x2F)=0;
 *(s16 *)((char *)p+0x2C)=(*(u8 *)((char *)arg0+0xD)*0x7FFF)/127;
 return i;
 }
 }
 return -1;
}
