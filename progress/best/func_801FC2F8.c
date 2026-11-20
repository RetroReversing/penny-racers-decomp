static __inline__ int __repair_inline(s32 a, s32 b) { return a < b; }
typedef struct {u16 flag; u8 pad[98];} Flag100;
typedef struct {s32 x,y; f32 z; s32 a,b,c; u8 pad[12];} State36;
extern Flag100 D_8011F32E[];
extern State36 D_80221080[];
void func_801FC2F8(u32 arg0) {
 register int i;
 if(D_8011F32E[arg0&0xFFFF].flag==0) {
  for(i=2;__repair_inline(i, 3);i++) {
   D_80221080[(unsigned short)i].a=0;
   D_80221080[(unsigned short)i].b=0;
   D_80221080[(unsigned short)i].c=0;
   D_80221080[(unsigned short)i].x=0;
   D_80221080[(unsigned short)i].z=1000.0f;
   D_80221080[(unsigned short)i].y=0;
  }
  D_8011F32E[arg0&0xFFFF].flag=1;
 }
}
