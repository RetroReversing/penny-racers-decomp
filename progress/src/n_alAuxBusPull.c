extern u8 *D_80046DF4;
u32 *runVoiceNotes(s32,s32,u32 *);
u32 *n_alAuxBusPull(s32 sample,u32 *cmd) {
u8 *bus=*(u8 **)(D_80046DF4+0x40);
s32 *sources=*(s32 **)(bus+0x1c);
s32 i;
u32 *c=cmd;
cmd+=2;
c[0]=0x020007c0;
c[1]=0x2e0;
for(i=0;i<*(s32 *)(bus+0x14);i++) {
cmd=runVoiceNotes(sources[i],sample,cmd);
}
return cmd;
}
