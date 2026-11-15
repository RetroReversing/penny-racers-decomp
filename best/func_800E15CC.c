extern u16 func_800E1850;
extern u16 D_8011F068[];
extern u8 D_8011F2F0[];
void func_800E0A00(s32, s32, u16 *);
void func_800E15CC(void) {
 u16 n; s32 cur; u8 *e; s32 tmp;
 n=0; cur=func_800E1850;
 do {
 e=D_8011F2F0+(u16)cur*100;
 if (*(s32 *)(e+0x54)!=0 && *(u8 *)(e+0xD)==0) {D_8011F068[n]=cur; n++;}
 cur=*(u16 *)(e+0x10);
 } while ((u16)cur!=0xFFFF);
 D_8011F068[n]=0xFFFF;
 tmp=n-1;
 if(tmp>0) func_800E0A00(0,tmp,D_8011F068);
}
