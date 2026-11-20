extern s32 alHeapInit();
extern s32 alHeapDBAlloc();
extern s32 osCreateMesgQueue();
extern s32 osAiSetFrequency();
extern s32 n_alInit();
extern s32 osCreateThread();
extern s32 osStartThread();
extern u8 D_80046C3C;
extern char D_8006E780[];
extern s32 D_8005CFC0;
extern s32 D_8005CFC4;
extern s32 D_8005D078;
extern s32 D_8005D07C;
extern s32 D_8005D080;
extern char D_8005D088[];
extern char D_8005D0A0[];
extern char D_80072B80[];
extern char D_8005D01C[];
extern char D_8005CFD8[];
extern char D_8005CFE0[];
extern char D_8005CFE4[];
extern char D_8005CFE8[];
extern char D_8005CFF0[];
extern char D_8005CFF4[];
extern char D_8005CFF8[];
extern char D_8005CFFC[];
extern char D_8005D000[];
extern char D_8005D004[];
extern char D_8005D010[];
extern char D_8005D014[];
extern char D_8006FCB4[];
extern char D_800437A0[];
extern char D_800485C0[];
extern char D_8004CE10[];
extern char D_8004EFC0[];
extern char auDmaNew[];
extern char func_800276E0[];
extern char func_800428B0[];
void nuAuStlMgrInit(s32 arg0, s32 arg1, s32 *arg2)
{
  u32 i;
  s32 a0;
  s32 v1;
  s32 size;
  D_80046C3C = 1;
  alHeapInit(D_8006E780, arg0, arg1);
  D_8005CFC0 = alHeapDBAlloc(0, 0, D_8006E780, 1, 0x2000);
  D_8005CFC4 = alHeapDBAlloc(0, 0, D_8006E780, 1, 0x2000);
  D_8005D078 = alHeapDBAlloc(0, 0, D_8006E780, 1, 0x8000);
  D_8005D07C = alHeapDBAlloc(0, 0, D_8006E780, 1, 0x8000);
  D_8005D080 = alHeapDBAlloc(0, 0, D_8006E780, 1, 0x8000);
  osCreateMesgQueue(D_8005D088, D_8005D0A0, 0x40);
  arg2[4] = (s32) auDmaNew;
  arg2[5] = (s32) D_8006E780;
  arg2[6] = osAiSetFrequency(arg2[6]);
  n_alInit(D_80072B80, arg2);
  a0 = 0;
  v1 = 0;
  size = (s32) (func_800428B0 + 0xD0) - (s32) func_800428B0;
  for (i = 0; (i + 1) <= 2; i++)
  {
    *((s32 *) (D_8005D01C + v1)) = 0;
    *((s32 *) (D_8005CFD8 + v1)) = 2;
    *((s32 *) (D_8005CFE0 + v1)) = (s32) func_800428B0;
    *((s32 *) (D_8005CFE4 + v1)) = size;
    *((s32 *) (D_8005CFE8 + v1)) = (s32) D_800437A0;
    *((s32 *) (D_8005CFF0 + v1)) = (s32) D_800485C0;
    *((s32 *) (D_8005CFF4 + v1)) = 0x800;
    *((s32 *) (D_8005CFF8 + v1)) = 0;
 do { *((s32 *) (D_8005CFFC + v1)) = 0; } while (0);
    *((s32 *) (D_8005D000 + v1)) = 0;
    *((s32 *) (D_8005D004 + v1)) = 0;
    *((s32 *) (D_8005D010 + v1)) = 0;
    *((s32 *) (D_8005D014 + v1)) = 0;
    *((s32 *) (D_8006FCB4 + a0)) = 0;
    a0 += 0x184;
    v1 += 0x58;
  }

  osCreateThread(D_8004CE10, 6, func_800276E0, 0, D_8004EFC0, 0x46);/*__repair_call_balance*/if(a0){
  osStartThread(D_8004CE10);}else{
  osStartThread(D_8004CE10);}
}
