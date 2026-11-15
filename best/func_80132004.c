extern u8 D_800DB1B8[],D_8006FAF0[];
extern u8 D_80126FF6,D_8011F2F0,D_8011F2FC,D_8011F308,D_8011F310,D_8011F350;
extern u8 D_8022A770[],D_8022AD04,D_8022AD0C,D_80220ED8[];
extern u8 D_8018BC33,D_80189CC8,D_8018D398,D_8016EFF0[],D_8016F658[],D_80175278[],D_8016EE00[];
extern u16 D_80189C96,D_80167F08[],D_80167F1C[];
extern f32 D_80167F30[];
extern void *D_80182DC8[],*D_80182DF0[],*D_80167E40[],*D_80167E50[];
extern void func_801CA140(),func_801CA468(),func_801CC150(),func_801CB9EC();
#define MODE (*(u16 *)(D_8006FAF0+0x20))
#define COUNT (*(s16 *)(D_800DB1B8+0x2108))
#define POSX(n) (*(f32 *)(&D_8011F308+(n)*100))
#define POSZ(n) (*(f32 *)(&D_8011F310+(n)*100))
#define DRAW_MAP(Y) \
func_801CC150(arg0,236,Y,0,0,64,64,64,64,64,64,0,0,319,239,D_80182DC8[MODE],D_80182DF0[MODE]); \
for (i=5;i>=0;i--) { \
 p=D_8022A770+i*2288; \
 if (*(u16 *)(p+2)!=65535) { \
  switch(MODE) { \
  case 1: x=POSX(*(u16 *)(p+2))*D_80167F30[MODE]; z=-POSZ(*(u16 *)(p+2))*D_80167F30[MODE]; break; \
  case 2: x=-POSX(*(u16 *)(p+2))*D_80167F30[MODE]; z=POSZ(*(u16 *)(p+2))*D_80167F30[MODE]; break; \
  case 3: x=POSX(*(u16 *)(p+2))*D_80167F30[MODE]; z=-POSZ(*(u16 *)(p+2)); z*=D_80167F30[MODE]; break; \
  case 9: z=POSX(*(u16 *)(p+2))*D_80167F30[MODE]; x=POSZ(*(u16 *)(p+2))*D_80167F30[MODE]; break; \
  } \
  func_801CB9EC(arg0,(u16)((u32)z+D_80167F08[MODE]+264),(u16)((u32)x+D_80167F1C[MODE]+Y+28),8,D_80175278,D_80167E40[*(&D_8018D398+i)],0,1,0,8,8,16,8,0); \
 } }
void func_80132004(u32 **arg0,u16 arg1) {
char *__repair_addr;

 s32 i,off,t; u8 *p; u32 *dl; f32 x,z;
 if (D_80126FF6!=COUNT-1) return;
 off=arg1*100;
 p=D_8022A770+*(&D_8011F2F0+off)*2288;
 dl=*arg0; *arg0=dl+2; dl[0]=0x06000000; dl[1]=(u32)D_80220ED8;
 func_801CA140();
 func_801CA468(arg0,*(&D_8011F2FC+off));
 if (COUNT==1 && p[0x879]!=1) {
  if (!D_8018BC33) func_801CC150(arg0,236,158,0,0,64,51,64,51,64,51,0,0,319,239,D_8016EFF0,D_8016F658);
  else if(D_80182DC8[MODE]) { DRAW_MAP(145) }
 }
 if(COUNT==2 && D_80189CC8!=3 && D_80182DC8[MODE]) { DRAW_MAP(88) }
 if(D_80189CC8==3) {
  x=(*(u16 *)(*(u8 **)(&D_8011F350+D_80189C96*100)+12))-2;
  for(i=0;i<COUNT;) {
__repair_addr = (char *)(&D_8022AD0C+i*2288);

   t=*(s32 *)(__repair_addr);
   if(t<100) t=0; else t-=*(s16 *)(&D_8022AD04+i*2288)*100;
   z=*(u16 *)(*(u8 **)(&D_8011F350+D_80189C96*100)+10)+(t-4);
   func_801CB9EC(arg0,(u16)(u32)z,(u16)(u32)x,8,D_8016EE00,D_80167E50[*(&D_8018D398+i)],0,1,0,8,8,80,8,(u16)++i);
  }
 }
}
