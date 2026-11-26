typedef struct ALink { struct ALink *next; struct ALink *prev; } ALink;
typedef struct DMABuf { ALink node; s32 startAddr; u32 lastFrame; char *ptr; } DMABuf;
typedef struct { u8 initialized; DMABuf *firstUsed; DMABuf *firstFree; } DMAState;
typedef struct { u16 type; u8 pri; u8 status; void *retQueue; void *dramAddr; u32 devAddr; u32 size; void *piHandle; } IoMesg;
extern DMAState D_8005D7A0;
extern u32 D_80046C30;
extern char D_8005D088[];
extern IoMesg D_8005D1A0[];
extern s32 D_8005DCB0;

s32 auDmaCallBack(s32 addr, s32 len)
{
    void *foundBuffer;
    s32 delta, addrEnd, startAddr, endAddr;
    DMABuf *dmaPtr, *lastDmaPtr;
    s32 handle;
    IoMesg *mb;

    lastDmaPtr = 0;
    dmaPtr = D_8005D7A0.firstUsed;
    addrEnd = addr + len;

    while (dmaPtr) {
        startAddr = dmaPtr->startAddr;
        endAddr = startAddr + 0x400;
        if (addr < startAddr)
            break;
        else if (addrEnd <= endAddr) {
            dmaPtr->lastFrame = D_80046C30;
            foundBuffer = dmaPtr->ptr + addr - dmaPtr->startAddr;
            return osVirtualToPhysical(foundBuffer);
        }
        lastDmaPtr = dmaPtr;
        dmaPtr = (DMABuf *) dmaPtr->node.next;
    }

    dmaPtr = D_8005D7A0.firstFree;
    if (!dmaPtr) {
        return (u32) D_8005D7A0.firstUsed->ptr - 0x80000000;
    }
    D_8005D7A0.firstFree = (DMABuf *) dmaPtr->node.next;
    alUnlink(dmaPtr);

    if (lastDmaPtr)
        alLink(dmaPtr, lastDmaPtr);
    else if (D_8005D7A0.firstUsed) {
        lastDmaPtr = D_8005D7A0.firstUsed;
        D_8005D7A0.firstUsed = dmaPtr;
        dmaPtr->node.next = (ALink *) lastDmaPtr;
        dmaPtr->node.prev = 0;
        lastDmaPtr->node.prev = (ALink *) dmaPtr;
    } else {
        D_8005D7A0.firstUsed = dmaPtr;
        dmaPtr->node.next = 0;
        dmaPtr->node.prev = 0;
    }

    delta = addr & 1;
    handle = osCartRomInit();
addr -= delta;
dmaPtr->startAddr = addr;
mb = &D_8005D1A0[D_8005DCB0++];
foundBuffer = dmaPtr->ptr;
dmaPtr->lastFrame = D_80046C30;
    mb->pri = 0;
    mb->retQueue = D_8005D088;
    mb->dramAddr = foundBuffer;
    mb->devAddr = addr;
    mb->size = 0x400;
    osEPiStartDma(handle, mb, 0);

    return osVirtualToPhysical(foundBuffer) + delta;
}
