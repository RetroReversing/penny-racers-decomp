/* identical to PiRawStartDma in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
extern u8 *piCurrentDevs[]; extern s32 D_A4600000; extern s32 osVirtualToPhysical(void*);

/* Starts a PI DMA. s0 is the device/domain record (domain at +9, timing bytes at
 * +5..+8, cart address word at +12). piCurrentDevs[domain] caches the last record
 * programmed for that domain; the timing registers are only rewritten when a
 * byte changed. Then DRAM address (PI_DRAM_ADDR), cart address (PI_CART_ADDR) and
 * length (PI_WR_LEN for s1 == 0, PI_RD_LEN for s1 == 1) are written. s3 is the
 * byte count. Returns 0, or -1 for a bad direction. */
/* Starts a PI DMA between DRAM and cartridge, reprogramming timing registers only when the domain's cached record changed. */ s32 PiRawStartDma(u8 *dev,s32 direction,s32 cartFlags,void *dramAddr,s32 length){
u32 domain;u8 *cached;u32 cachedTiming;volatile u32 *timingReg;
if(*(volatile u32*)0xa4600010&3)do{}while(*(volatile u32*)0xa4600010&3);
domain=dev[9];cached=piCurrentDevs[domain];
if(cached!=dev){
 if(domain==0){
 if(cached[5]!=dev[5])*(volatile u32*)0xa4600014=dev[5];
 if(cached[6]!=dev[6])*(volatile u32*)0xa460001c=dev[6];
 if(cached[7]!=dev[7])*(volatile u32*)0xa4600020=dev[7]; cachedTiming=cached[8];cached=(u8 *)(u32)dev[8];if(cachedTiming!=(u32)cached){timingReg=(volatile u32*)0xa4600018;goto writeTiming;}
 }else{
 if(cached[5]!=dev[5])*(volatile u32*)0xa4600024=dev[5];
 if(cached[6]!=dev[6])*(volatile u32*)0xa460002c=dev[6];
 if(cached[7]!=dev[7])*(volatile u32*)0xa4600030=dev[7];
 cachedTiming=cached[8];cached=(u8 *)(u32)dev[8];if(cachedTiming!=(u32)cached){timingReg=(volatile u32*)0xa4600028;goto writeTiming;}
 }
 goto done;
 writeTiming:*timingReg=(u32)cached;
 done:piCurrentDevs[domain]=dev;
}
*(volatile u32*)0xa4600000=osVirtualToPhysical(dramAddr);
*(volatile u32*)0xa4600004=(*(u32*)(dev+12)|cartFlags)&0x1fffffff;
{ volatile u32 *lengthReg;
switch(direction){case 0:lengthReg=(volatile u32*)0xa460000c;break;case 1:lengthReg=(volatile u32*)0xa4600008;break;default:return -1;}
*lengthReg=length-1;return 0; }
}
