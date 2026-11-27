extern u32 getCop0Status(void);
extern void setCop0Status(s32);
extern u32 swapFpcCsr(u32);
extern s32 si_read_word(s32,s32*);
extern s32 siWriteWordChecked(s32,s32);
extern void osWritebackDCache(s32,s32);
extern void osInvalICache(s32,s32);
extern void osMapTLBRdb(void);
extern void osPiRawReadIo(s32,u32*);
extern u64 func_80042630(u64,u64);
extern void func_8003DDC0(void*,s32);
typedef struct {u32 a,b,c,d;} VectorCode;
extern VectorCode func_8003E0D0;
extern s32 osTvType,osResetType,osAppNmiBuffer;
extern u64 usableRamSize;
extern s32 osViClock;
extern u8 D_800D5702[];

/* Boots the OS: sets up CP0 status and FPU control, copies the exception vectors,
   reads RAM size from PI, and picks the VI clock from osTvType (0 PAL, 2 MPAL, else NTSC). */
void osInitialize(void) {
    s32 pifStatus;
    u32 ramSize = 0;

    *(s32*)(D_800D5702+0x7cda) = 1;
    setCop0Status(getCop0Status() | 0x20000000);
    swapFpcCsr(0x1000800);
    do {} while (si_read_word(0x1fc007fc, &pifStatus));
    do {} while (siWriteWordChecked(0x1fc007fc, pifStatus | 8));
    *(VectorCode*)0x80000000 = func_8003E0D0;
    *(VectorCode*)0x80000080 = func_8003E0D0;
    *(VectorCode*)0x80000100 = func_8003E0D0;
    *(VectorCode*)0x80000180 = func_8003E0D0;
    osWritebackDCache(0x80000000, 0x190);
    osInvalICache(0x80000000, 0x190);
    osMapTLBRdb();
    osPiRawReadIo(4, &ramSize);
    ramSize &= 0xfffffff0;
    if (ramSize) usableRamSize = ramSize;
    usableRamSize = func_80042630(usableRamSize * 3, 4);
    if (!osResetType) func_8003DDC0(&osAppNmiBuffer, 0x40);
    if (!osTvType) osViClock = 0x2f5b2d2;
    else if (osTvType == 2) osViClock = 0x2e6025c;
    else osViClock = 0x2e6d354;
}
