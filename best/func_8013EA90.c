void func_8013EA90(u8 *arg0,s32 arg1,s32 arg2,s32 arg3) {
s16 b,r,g;
r=arg0[23];g=arg0[24];b=arg0[25];
arg1=r+arg1;
r=arg1;g=g+arg2;b=b+arg3;
if ((arg1<<16)<0) r=0; else if (r>=256) r=255;
if (((s32)g<<16)<0) g=0; else if (g>=256) g=255;
if (((s32)b<<16)<0) b=0; else if (b>=256) b=255;
arg0[23]=r;arg0[24]=g;arg0[25]=b;
}
