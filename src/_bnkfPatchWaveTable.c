typedef struct { u32 base; s32 len; u8 type,flags; u16 pad; u32 loop,book; } PR_WaveTable;
void _bnkfPatchWaveTable(PR_WaveTable *p,u32 bank,u32 wave) { if(!p->flags) { p->flags=1; p->base+=wave; if(p->type==0) { p->book+=bank; if(p->loop) p->loop+=bank; } else if(p->type==1) { if(p->loop) p->loop+=bank; } } }
