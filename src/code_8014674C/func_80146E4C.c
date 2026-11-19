#include "common_local_source_339302416471.h"

extern u8 D_80168CE4[];
u16 func_80146E4C(u16 arg0) { u16 x=arg0; s32 r=0; if((arg0&0xF00)<0x800){r=D_80168CE4[(x>>8)&7];r+=arg0&0x1F;}else{switch(x){case 0x2FFF:case 0x4FFF:r=10;break;case 0x3FFF:r=18;break;}}return r;}
