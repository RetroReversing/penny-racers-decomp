u32 osVirtualToPhysical(void *);
u32 *_n_filterBuffer(u8 *p, s32 n, u32 *cmd) {
s32 flags,gain;
u32 *last;
n >>=8;
cmd[0]=0x0B000020;
cmd[1]=osVirtualToPhysical(p+8);
flags=p[0x2f]<<16;
gain=*(u16 *)(p+2)|0x0e000000;
cmd[2]=flags|gain;
last=cmd+4;
cmd[3]=(n<<24)|(osVirtualToPhysical(*(void **)(p+0x28))&0xffffff);
*(s32 *)(p+0x2c)=0;
return last;
}
