typedef struct {u32 w0,w1;} PRCmd;
PRCmd *adpcmDecodeChunk(PRCmd *p, void *arg1, s32 arg2, s32 arg3, u16 arg4, s32 arg5, s32 arg6) {
 s32 addr, offset, nbytes;
 if(arg3 > 0) {
  addr = (*(s32 (**)(s32,s32,s32))((char*)arg1+0x28))(*(s32*)((char*)arg1+0x3c),arg3,*(s32*)((char*)arg1+0x2c));
  offset=addr&7;
  arg3+=offset;
  nbytes=arg3;
  { s32 delta = (nbytes & 7) - 8; nbytes = nbytes - delta; }
  { PRCmd *a=p++;
  { u32 size = (nbytes&0xfff)<<12; u32 low = (arg5&0xfff)|0x04000000; a->w0=size|low; }
  a->w1=addr-offset; }
 } else offset=0;
 if(arg6&2) {
  PRCmd *a=p++;
  a->w0=0x0f000000;
  a->w1=*(u32*)((char*)arg1+0x10)&0x1fffffff;
 }
 { PRCmd *a=p++;
 a->w0=(*(u32*)((char*)arg1+0xc)&0xffffff)|0x01000000;
 a->w1=(arg6<<28)|(((arg2*2)&0xfff)<<16)|(offset<<12)|(arg4&0xfff); }
 *(s32*)((char*)arg1+0x38)=0;
 return p;
}
