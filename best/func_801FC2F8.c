typedef struct {u16 flag; u8 pad[98];} Flag100;
typedef struct {s32 x,y; f32 z; s32 a,b,c; u8 pad[12];} State36;
extern Flag100 D_8011F32E[];
extern State36 D_80221080[];
void func_801FC2F8(u32 arg0) {
 u16 i;
 if(D_8011F32E[arg0&0xFFFF].flag==0) {
  for(i=2;i<3;i++) {
   D_80221080[i].a=0;
   D_80221080[i].b=0;
   D_80221080[i].c=0;
   D_80221080[i].x=0;
   D_80221080[i].y=0;
   D_80221080[i].z=1000.0f;
  }
  D_8011F32E[arg0&0xFFFF].flag=1;
 }
}
