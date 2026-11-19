void func_8013EA18(u8 *arg0,s32 arg1,s32 arg2,s32 arg3) {
s16 r=arg1;
if ((arg1<<16)<0) r=0; else if (r>=256) r=255;
if ((arg2<<16)<0) arg2=0; else if ((s16)arg2>=256) arg2=255;
if ((arg3<<16)<0) arg3=0; else if ((s16)arg3>=256) arg3=255;
arg0[23]=r;arg0[24]=arg2;arg0[25]=arg3;
}
