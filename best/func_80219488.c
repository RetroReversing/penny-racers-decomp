typedef struct { u8 index; u8 pad[61]; u16 state; u8 rest[36]; } Entry;
typedef struct { s16 timer; u8 tick; u8 pad; u8 mode; u8 pad2; u8 kind; u8 pad3; u8 busy; } State;
extern Entry D_8011F2F0[];
extern u8 *D_8011F350;
extern s16 D_80190CA6;
extern u8 D_80190CAE,D_80190CAC,D_80190CAA;
extern u16 D_8018BC3C;
extern u8 D_8021C994, D_8021C840, D_8021C841;
extern u8 D_80190CB2, D_8021B01A, D_80046832;
extern s16 D_8021E1A6, D_8006F9E8;
extern s32 D_8021AFDC, D_80168BB0;
extern void func_8021AB34(),func_8021A214(),func_8021A334();
extern void func_801D65BC(),func_800DE41C(s32,s32,s32,s32,s32,s32,s32,void (*)(),void (*)(),f32,f32,s32,s32,s32,s32,s32,s32,s32),func_80028100(),func_80203DF8(),func_8021AF20(),func_800DE38C(),func_800DE2E0(),func_80231C5C(),func_801CF468();
void func_80219488(u16 id) {
Entry *p=&D_8011F2F0[id];
s16 *s=&D_80190CA6; u8 *busy=&D_80190CAE;
((u8 *)s)[2]++;
switch(p->state) {
case 0:
if ((*(u8 **)((u8 *)&D_8011F350 + D_8018BC3C*100))[0]) break;
func_801D65BC(1);
func_800DE41C(0,0,3,0,0x85,0,0,func_8021AB34,0,0,0,0,0,0,0,0,0,0);
p->index=0; *s=5; D_80190CB2=0; p->state=32; break;
case 32:
if (--*s < 0) { *busy=0; p->state=33; } break;
case 33:
if(*busy) break;
if(*(&D_8021C994+p->index)<240) {
func_800DE41C(0,p->index,3,0,0x84,0,0,func_8021A214,func_8021A334,40.0f,240.0f,0,0,0,0,0,0,0);
*busy=1;
} else switch(*(&D_8021C994+p->index)) {
case 254:*s=16;p->state=32;break;
case 255:*s=900;D_80190CB2=1;p->state=34;break;
}
p->index++;break;
case 34:
if(--*s<0) {*s=0;p->index=0;p->state=40;if(D_8021E1A6!=3)p->state=48;} break;
case 40:
if(--*s<0) {*busy=0;p->state=41;} break;
case 41:
if(*busy) break;
if(*(&D_8021C840+p->index*2)<240) {
func_800DE41C(0,p->index,3,0,0x84,D_80190CAC,0,func_8021A214,func_8021A334,0,240.0f,0,0,0,0,0,0,0);
*busy=1;
} else switch(*(&D_8021C840+p->index*2)) {
case 254:*s=*(&D_8021C841+p->index*2)<<4;p->state=40;break;
case 255:p->state=48;break;
case 253:D_80190CAA=*(&D_8021C841+p->index*2);break;
case 252:D_80190CAC=*(&D_8021C841+p->index*2);break;
}
p->index++;break;
case 48:func_80028100(0,100);func_80203DF8(2,90,255,255,255);p->state=49;break;
case 49:
if ((*(u8 **)((u8 *)&D_8011F350 + D_8018BC3C*100))[0]) break;
*s=4;p->state=50;break;
case 50:
if(--*s<0) {func_8021AF20(id);*s=30;p->state=51;}
case 51:
if(--*s<0) {
func_800DE38C();func_800DE2E0();func_80231C5C();func_801CF468(D_8018BC3C,255,255,255);
D_8021B01A=0;D_8021AFDC=48;D_80046832=0;D_8006F9E8=8;D_80168BB0=0;p->state=56;
}break;
case 1: break;
case 2: break;
case 3: break;
case 4: break;
case 5: break;
case 6: break;
case 7: break;
case 8: break;
case 9: break;
case 10: break;
case 11: break;
case 12: break;
case 13: break;
case 14: break;
case 15: break;
case 16: break;
case 17: break;
case 18: break;
case 19: break;
case 20: break;
case 21: break;
case 22: break;
case 23: break;
case 24: break;
case 25: break;
case 26: break;
case 27: break;
case 28: break;
case 29: break;
case 30: break;
case 31: break;
case 35: break;
case 36: break;
case 37: break;
case 38: break;
case 39: break;
case 42: break;
case 43: break;
case 44: break;
case 45: break;
case 46: break;
case 47: break;
case 52: break;
case 53: break;
case 54: break;
case 55: break;
case 56: break;
}
}
