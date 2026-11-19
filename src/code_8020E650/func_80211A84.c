#include "common_local_source_339302417622.h"

typedef struct {f32 val;u8 pad[0xD0];s32 flags;} Obj;
extern Obj D_8021EECC;
extern u8 D_8011F308[],D_8011F2FD[];
#define D_8021DDD0 0.1
void func_80211A84(u16 arg0){
Obj *p=&D_8021EECC;
s32 off=arg0*100;
p->val=(*(f32 *)(D_8011F308+off)-p->val)/6.0f+p->val;
if ((f64)*(f32 *)(D_8011F308+off)-D_8021DDD0 < (f64)p->val && (f64)p->val < (f64)*(f32 *)(D_8011F308+off)+D_8021DDD0) {
p->val=*(f32 *)(D_8011F308+off);
D_8021EECC.flags &= ~0x2000;
D_8011F2FD[off]=2;
}
}
