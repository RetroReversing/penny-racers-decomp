#include "common_local_source_339302417373.h"

extern u8 D_8011F350[],D_8011F2FD[];
void func_8015CF2C(s32 arg0){
 s32 off=(u16)arg0*100;
 u8 *obj=*(u8 **)(D_8011F350+off);
 s16 t;
 *(f32 *)(obj+0x70)+=15.0f;
 t=*(u16 *)(obj+0x14)-1;
 *(u16 *)(obj+0x14)=t;
 if(t<0) {
 func_8013E49C(*(u16 *)(obj+0x76));
 *(D_8011F2FD+off)=2;
 }
 func_8013EDFC(arg0&0xFFFF,obj);
}
