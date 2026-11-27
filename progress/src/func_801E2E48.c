extern u8 sSaveData[], D_801E9018[], D_801E97CC[];
void func_801E2E00(s32, void *);
void func_801E2E48(s32 arg0) {
 s32 i=0;
 s32 index=arg0 & 0xFFFF;
 u8 *dst=sSaveData;
 s32 off=index*0x30;
 do {
 *(u8 *)((off+i)+(u32)dst)=D_801E9018[off+i];
 i++;
 } while(i<0x30);
 func_801E2E00(arg0 & 0xFFFF, D_801E97CC+(arg0 & 0xFFFF)*0x30);
}
