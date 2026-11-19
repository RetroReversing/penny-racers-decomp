#include "common.h"

typedef struct {u32 w0,w1;} PRCmd;
extern void *D_80046DF4;
PRCmd *n_alMainBusPull(s32 arg0, PRCmd *arg1)
{
 PRCmd *p,*out;
 void *synth=D_80046DF4;
 p=arg1++;
 p->w0=0x020004E0; p->w1=0x2E0;
 out=(*(PRCmd *(**)(s32,PRCmd *))((u8 *)*(void **)((u8 *)synth+0x3C)+4))(arg0,arg1);
 { PRCmd *first=out++;
 first->w0=0x0C007FFF; first->w1=0x07C004E0; }
 { PRCmd *second=out++;
 second->w0=0x0C007FFF; second->w1=0x09300650; }
 return out;
}
