typedef struct {
/* 0x00 */ u8 f0;
u8 pad1[0xB];
/* 0x0C */ u8 fC;
u8 padD[0x31];
/* 0x3E */ u16 f3E;
/* 0x40 */ u16 f40;
u8 pad42[2];
/* 0x44 */ f32 f44;
/* 0x48 */ f32 f48;
/* 0x4C */ f32 f4C;
u8 pad50[0x14];
} Obj;
typedef struct { s32 f0, f4, f8, fC; u8 pad[0x60]; } Pad;
typedef struct { void *pfs; s32 file_no; s32 error; s32 type; } Pak;
extern Obj D_8011F2F0[];
extern Pad D_801E9988[];
extern Pak D_801F1898[];
extern u8 D_801F18E0[];
extern u8 D_80189B38[];
extern u8 D_80190CB2;
extern u8 D_801C5EA0;
extern s32 D_801C698C[];
extern s32 D_801C69AC[];
extern u16 D_801E879C;
extern s32 D_801E87A0[];
extern u8 D_801E87A8[];
extern u8 D_801E87BC[];
extern u8 D_801E87E4;
extern u32 D_801E973C;
extern u8 D_801E9766;
extern u8 D_801E9780;
extern u8 D_801E9798;
extern u16 sceneOverlayObjId;
extern u16 D_801E9B32;
extern u8 D_801E9B34;
extern u8 D_801F1888;
extern u8 D_8021B00C[];
extern u8 D_8021B064[];
extern u8 D_8021B070[];
extern u8 D_8021B690[];
extern s8 menuInputLock;
void func_800DEFF8(void);
void func_800DF094(void);
void func_800DF138(u16);
void func_800DF170(u16);
void func_800DF1A8(u16);
void func_8014B590(s32);
void func_8014B714(s32);
void func_801B7584(s32, s32);
void playStageSound(s32, s32);
void func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_801DDCDC(s32, s32);
u8 compressDataTable(void);
void unpressPairTable(void);
u32 func_801E2BA4(void);
void func_801E2BFC(void);
void func_801E2D18(void);
void func_801E2E48(u16);
void func_801E2F38(u16);
s32 func_801E2FCC(u16);
void nuContPakCodeSet(s32, s32);
void nuContPakFileOpenJis(void *, u8 *, u8 *, s32, s32);
void nuContPakFileReadWrite(void *, s32, s32, u8 *, s32);
void nuContPakOpen(void *, s32);
void nuContPakRepairId(void *);

void func_801D8EF0(u16 arg0) {
u8 mode = D_801F1888;
s32 id = D_8011F2F0[arg0].fC;
u32 i;
u32 sum;
u8 count;
s32 err;

switch (D_8011F2F0[arg0].f3E) {
case 0:
D_801E9798 = 0;
D_801E9780 = 0;
D_801E879C = 0;
D_8011F2F0[arg0].f3E = 1;
break;
case 18:
func_800DEFF8();
func_800DF138(arg0);
D_8011F2F0[arg0].f48 = 0.0f;
D_8011F2F0[arg0].f3E = D_8011F2F0[arg0].f44;
D_8011F2F0[arg0].f40 = D_8011F2F0[arg0].f0;
func_800DF1A8(D_801E9B32);
D_801E9780 = 0;
break;
case 19:
func_800DF094();
D_8011F2F0[arg0].f3E = 1;
D_8011F2F0[arg0].f40 = 1;
func_800DF170(D_801E9B32);
break;
case 20:
D_8011F2F0[arg0].f48 = (u16) ((u16) D_8011F2F0[arg0].f48 + 1);
if ((u16) D_8011F2F0[arg0].f48 > (u16) D_8011F2F0[arg0].f4C) {
D_8011F2F0[arg0].f3E = 0x13;
}
if (D_801E9988[(u8) id].f8 == 1) {
D_8011F2F0[arg0].f3E = 0x13;
}
break;
case 21:
if (D_801E9988[(u8) id].f8 == 1) {
D_8011F2F0[arg0].f3E = 0x13;
}
break;
case 22:
D_8011F2F0[arg0].f48 = (u16) ((u16) D_8011F2F0[arg0].f48 + 1);
if ((u16) D_8011F2F0[arg0].f48 > (u16) D_8011F2F0[arg0].f4C) {
D_8011F2F0[arg0].f3E = 0x13;
}
break;
case 23:
if (D_801E9988[(u8) id].f0 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 0;
D_801E9798 = 0;
} else if (D_801E9988[(u8) id].f4 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 1;
D_801E9798 = 0;
} else if (D_801E9988[(u8) id].f8 == 1) {
if (D_801E9780 == 1) {
playStageSound(7, 0x3D);
nuContPakRepairId(&D_801F1898[(u8) id]);
switch (D_801F1898[(u8) id].error) {
case 0:
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xf0, 0x12, 0x16, (u8) id, 0xe);
break;
case 1:
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xa);
break;
case 2:
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xb);
break;
default:
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xf0, 0x12, 0x16, (u8) id, 0xf);
break;
}
} else {
playStageSound(7, 0x3A);
nuContPakOpen(&D_801F1898[(u8) id], (u8) id);
if (func_801DDCDC((u8) id, 1) == 2) {
func_801DD938(0x10, 0x1C, 0xA, 6, 0xC8, 0xb4, 0x12, 0x20, (u8) id, 0x2f);
} else {
D_8011F2F0[arg0].f3E = 0x13;
}
}
}
break;
case 32:
if (D_801E9988[(u8) id].f0 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 0;
D_801E9798 = 0;
} else if (D_801E9988[(u8) id].f4 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 1;
D_801E9798 = 0;
} else if (D_801E9988[(u8) id].f8 == 1) {
if (D_801E9780 == 1) {
playStageSound(7, 0x3A);
D_801E879C = 1;
D_8011F2F0[arg0].f3E = 0x13;
} else {
playStageSound(7, 0x3D);
func_801DD938(0x10, 0x1C, 0xA, 6, 0xC8, 0xb4, 0x12, 0x17, (u8) id, 0xd);
}
}
break;
case 24:
if (D_801E9988[0].f0 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 0;
D_801E9798 = 0;
} else if (D_801E9988[0].f4 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 1;
D_801E9798 = 0;
} else if (D_801E9988[0].f8 == 1) {
if (D_801E9780 == 1) {
playStageSound(7, 0x3D);
D_8011F2F0[sceneOverlayObjId].f3E = 0x1E;
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0x78, 0x12, 0x16, 0, 0x2d);
} else {
playStageSound(7, 0x3A);
D_8011F2F0[sceneOverlayObjId].f3E = 0x1F;
D_8011F2F0[arg0].f3E = 0x13;
}
} else if (D_801E9988[0].fC == 1) {
playStageSound(7, 0x3A);
D_8011F2F0[sceneOverlayObjId].f3E = 0x1F;
D_8011F2F0[arg0].f3E = 0x13;
}
break;
case 25:
if (D_801E9988[(u8) id].f0 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 0;
D_801E9798 = 0;
} else if (D_801E9988[(u8) id].f4 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 1;
D_801E9798 = 0;
} else if (D_801E9988[(u8) id].f8 == 1) {
if (D_801E9780 == 1) {
playStageSound(7, 0x3D);
D_8011F2F0[arg0].f40 = 0x12;
D_8011F2F0[arg0].f44 = 27.0f;
D_8011F2F0[arg0].f48 = 0.0f;
D_8011F2F0[arg0].f4C = 120.0f;
D_8011F2F0[arg0].f3E = 0x1A;
} else {
playStageSound(7, 0x3A);
D_8011F2F0[arg0].f3E = 0x13;
}
} else if (D_801E9988[(u8) id].fC == 1) {
playStageSound(7, 0x3A);
D_8011F2F0[arg0].f3E = 0x13;
}
break;
case 26:
D_8011F2F0[arg0].f48 = (u16) ((u16) D_8011F2F0[arg0].f48 + 1);
if ((u16) D_8011F2F0[arg0].f48 > (u16) D_8011F2F0[arg0].f4C) {
D_8011F2F0[arg0].f3E = D_8011F2F0[arg0].f44;
}
break;
case 27:
nuContPakCodeSet(D_801E87A0[0], D_801E87A0[1]);
nuContPakFileOpenJis(&D_801F1898[id], D_801E87A8, D_801E87BC, 0, 0x4400);
err = D_801F1898[id].error;
if (err == 5) {
nuContPakFileOpenJis(&D_801F1898[id], D_801E87A8, D_801E87BC, 1, 0x4400);
err = D_801F1898[id].error;
} else if (err == 0) {
err = 9;
}
switch (err) {
case 0:
D_801E9766 = 1;
D_8011F2F0[arg0].f3E = 0x13;
break;
case 1:
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xa);
break;
case 2:
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xb);
break;
case 7:
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x13);
break;
case 8:
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x14);
break;
case 9:
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x15);
break;
default:
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xc);
break;
}
break;
case 28:
if (D_801E9988[(u8) id].f0 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 0;
D_801E9798 = 0;
} else if (D_801E9988[(u8) id].f4 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 1;
D_801E9798 = 0;
} else if (D_801E9988[(u8) id].f8 == 1) {
if (D_801E9780 == 1) {
playStageSound(7, 0x3D);
if (mode & 1) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x1d, (u8) id, 0x18);
} else {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x1d, (u8) id, 0x17);
}
} else {
playStageSound(7, 0x3A);
D_8011F2F0[arg0].f3E = 0x13;
}
} else if (D_801E9988[(u8) id].fC == 1) {
playStageSound(7, 0x3A);
D_8011F2F0[arg0].f3E = 0x13;
}
break;
case 29:
D_8011F2F0[arg0].f48 = (u16) ((u16) D_8011F2F0[arg0].f48 + 1);
if ((u16) D_8011F2F0[arg0].f48 > (u16) D_8011F2F0[arg0].f4C) {
D_8011F2F0[arg0].f3E = 0x13;
}
if ((u16) D_8011F2F0[arg0].f48 == 60) {
switch (mode) {
case 0:
D_801E87E4 = compressDataTable();
nuContPakFileReadWrite(&D_801F1898[id], 0, 0x3200, D_801F18E0, 1);
if ((D_801F1898[id].error != 0) || (D_801F1898[id].type != 1)) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xc);
return;
}
nuContPakFileReadWrite(&D_801F1898[id], 0, 0x3200, D_801F18E0, 0);
if ((D_801F1898[id].error != 0) || (D_801F1898[id].type != 1)) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xc);
return;
}
D_801E973C = *(u32 *) D_801F18E0;
sum = 0;
for (i = 4; i < 0x3200; i++) {
sum += D_801F18E0[i];
}
if (D_801E973C != sum) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x22);
return;
}
break;
case 1:
nuContPakFileReadWrite(&D_801F1898[id], 0, 0x3200, D_801F18E0, 0);
if ((D_801F1898[id].error != 0) || (D_801F1898[id].type != 1)) {
if (D_801F1898[(u8) id].error == 6) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x24);
} else {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xc);
}
return;
}
D_801E973C = *(u32 *) D_801F18E0;
sum = 0;
for (i = 4; i < 0x3200; i++) {
sum += D_801F18E0[i];
}
if (D_801E973C != sum) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x23);
return;
}
if (D_801E973C == 0 && sum == 0) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x24);
return;
}
unpressPairTable();
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x14, (u8) id, 0x2b);
break;
case 2:
func_8014B590((u8) id);
nuContPakFileReadWrite(&D_801F1898[(u8) id], 0x3200, 0x140, D_80189B38, 1);
if ((D_801F1898[(u8) id].error != 0) || (D_801F1898[(u8) id].type != 1)) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xc);
return;
}
nuContPakFileReadWrite(&D_801F1898[id], 0x3200, 0x140, D_80189B38, 0);
if ((D_801F1898[id].error != 0) || (D_801F1898[id].type != 1)) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xc);
return;
}
D_801E973C = *(u32 *) D_80189B38;
sum = 0;
for (i = 4; i < 0x140; i++) {
sum += D_80189B38[i];
}
if (D_801E973C != sum) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x25);
return;
}
break;
case 3:
nuContPakFileReadWrite(&D_801F1898[id], 0x3200, 0x140, D_80189B38, 0);
if ((D_801F1898[id].error != 0) || (D_801F1898[id].type != 1)) {
if (D_801F1898[(u8) id].error == 6) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x27);
} else {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xc);
}
return;
}
D_801E973C = *(u32 *) D_80189B38;
sum = 0;
for (i = 4; i < 0x140; i++) {
sum += D_80189B38[i];
}
if (D_801E973C != sum) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x26);
return;
}
if (D_801E973C == 0 && sum == 0) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x27);
return;
}
func_8014B714((u8) id);
{
s8 *p = &menuInputLock;
D_8021B064[*p] = 1;
D_8021B00C[*p] = 1;
}
break;
case 4:
func_801E2BFC();
nuContPakFileReadWrite(&D_801F1898[id], (D_801E9B34 << 10) + 0x3340, 0x400, D_801F18E0, 1);
if ((D_801F1898[id].error != 0) || (D_801F1898[id].type != 1)) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xc);
return;
}
nuContPakFileReadWrite(&D_801F1898[id], (D_801E9B34 << 10) + 0x3340, 0x400, D_801F18E0, 0);
if ((D_801F1898[id].error != 0) || (D_801F1898[id].type != 1)) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xc);
return;
}
D_801E973C = *(u32 *) D_801F18E0;
if (D_801E973C != func_801E2BA4()) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x28);
return;
}
{
u8 *flags = &D_80190CB2;
*flags |= D_8021B690[D_801E9B34];
}
break;
case 5:
nuContPakFileReadWrite(&D_801F1898[id], (D_801E9B34 << 10) + 0x3340, 0x400, D_801F18E0, 0);
if ((D_801F1898[id].error != 0) || (D_801F1898[id].type != 1)) {
if (D_801F1898[(u8) id].error == 6) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x2a);
} else {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0xc);
}
return;
}
D_801E973C = *(u32 *) D_801F18E0;
sum = func_801E2BA4();
if (D_801E973C != sum) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x29);
return;
}
if (D_801E973C == 0 && sum == 0) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x16, (u8) id, 0x2a);
return;
}
func_801E2D18();
D_801C5EA0 = 1;
break;
case 6:
count = 0;
for (i = 0; i < 9; i++) {
if (D_8021B070[i] == 1) {
id = (u16) i;
func_801E2E48(id);
func_801E2F38(id);
if (func_801E2FCC(id) != 0) {
func_801E2E48(id);
count++;
}
}
}
if (count != 0) {
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x14, 0, 0x66);
D_8011F2F0[arg0].f3E = 0x13;
}
break;
}
}
break;
case 30:
if (D_801E9988[(u8) id].f0 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 0;
D_801E9798 = 0;
} else if (D_801E9988[(u8) id].f4 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 1;
D_801E9798 = 0;
} else if (D_801E9988[(u8) id].f8 == 1) {
if (D_801E9780 == 1) {
playStageSound(7, 0x3D);
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xb4, 0x12, 0x1d, (u8) id, 0x69);
} else {
playStageSound(7, 0x3A);
D_8011F2F0[arg0].f3E = 0x13;
}
} else if (D_801E9988[(u8) id].fC == 1) {
playStageSound(7, 0x3A);
D_8011F2F0[arg0].f3E = 0x13;
}
break;
case 31:
if (D_801E9988[(u8) id].f0 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 0;
D_801E9798 = 0;
} else if (D_801E9988[(u8) id].f4 == 1) {
playStageSound(7, 0x3B);
D_801E9780 = 1;
D_801E9798 = 0;
} else if (D_801E9988[(u8) id].f8 == 1) {
if (D_801E9780 == 1) {
playStageSound(7, 0x3D);
func_801B7584(D_801C698C[D_801E9B34], D_801C69AC[D_801E9B34]);
D_801C5EA0 = 1;
func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0x78, 0x12, 0x16, (u8) id, 0x2c);
} else {
playStageSound(7, 0x3A);
D_8011F2F0[arg0].f3E = 0x13;
}
} else if (D_801E9988[(u8) id].fC == 1) {
playStageSound(7, 0x3A);
D_8011F2F0[arg0].f3E = 0x13;
}
break;
}
if (D_801E9798 < 30) {
D_801E9798++;
} else {
D_801E9798 = 0;
}
}
