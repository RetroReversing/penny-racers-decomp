/* adapted from similar verified C in func_8008BB80 in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern u32 func_8003EA30(void);
extern void func_8003EBE0(s32);
extern u32 func_8003EBD0(u32);
extern s32 si_read_word(s32,s32*);
extern s32 siWriteWordChecked(s32,s32);
extern void func_8003EBF0(s32,s32);
extern void func_8003EA40(s32,s32);
extern void osMapTLBRdb(void);
extern void func_8003CF70(s32,u32*);
extern u64 func_80042630(u64,u64);
extern void func_8003DDC0(void*,s32);
typedef struct {u32 a,b,c,d;} VectorCode;
extern VectorCode func_8003E0D0;
extern VectorCode D_80000000;
extern s32 D_80000300,D_8000030C,D_8000031C;
extern u64 D_800A1CC0;
extern s32 D_800A1CC8;
extern u8 D_800D5702[];

/* Boot-time setup: flags the boot as done, sets the FPU control register,
 * clears the PIF/status word, installs the common exception vector at the
 * four exception entry points, writes that code back to memory and
 * invalidates the instruction cache. Then sets the RAM-size-derived value
 * D_800A1CC0 and picks the region constant D_800A1CC8 from D_80000300. */
void func_80033C20(void) {
 s32 pifStatus; u32 ramSize=0;
 *(s32*)(D_800D5702+0x7cda)=1; func_8003EBE0(func_8003EA30()|0x20000000);
 func_8003EBD0(0x1000800);
 do {} while(si_read_word(0x1fc007fc,&pifStatus));
 do {} while(siWriteWordChecked(0x1fc007fc,pifStatus|8));
 *(VectorCode*)0x80000000=func_8003E0D0;
 *(VectorCode*)0x80000080=func_8003E0D0;
 *(VectorCode*)0x80000100=func_8003E0D0;
 *(VectorCode*)0x80000180=func_8003E0D0;
 func_8003EBF0(0x80000000,0x190); func_8003EA40(0x80000000,0x190);
 osMapTLBRdb(); func_8003CF70(4,&ramSize);
 ramSize &= 0xfffffff0; if(ramSize) D_800A1CC0=ramSize; D_800A1CC0=func_80042630(D_800A1CC0*3,4); if(!D_8000030C) func_8003DDC0(&D_8000031C,0x40);
 if(!D_80000300) D_800A1CC8=0x2f5b2d2;
 else if(D_80000300==2) D_800A1CC8=0x2e6025c;
 else D_800A1CC8=0x2e6d354;
}
