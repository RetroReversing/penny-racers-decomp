typedef struct ALink { struct ALink *next; struct ALink *prev; } ALink;
typedef struct DMABuf { ALink node; s32 startAddr; u32 lastFrame; char *ptr; } DMABuf;
typedef struct { u8 initialized; DMABuf *firstUsed; DMABuf *firstFree; } DMAState;
typedef struct { u16 type; u8 pri; u8 status; void *retQueue; void *dramAddr; u32 devAddr; u32 size; void *piHandle; } IoMesg;
extern DMAState D_8005D7A0;
extern u32 auFrameCount;
extern char D_8005D088[];
extern IoMesg D_8005D1A0[];
extern s32 D_8005DCB0;

/* Audio DMA callback: returns the physical address of a ROM range, reusing a cached 1KB buffer when one covers it or else queuing a new cart-to-RAM DMA. */
s32 auDmaCallBack(s32 romAddr, s32 length)
{
    void *buffer;
    s32 misalign, romEnd, bufStart, bufEnd;
    DMABuf *buf, *prevBuf;
    s32 cartHandle;
    IoMesg *msg;

    prevBuf = 0;
    buf = D_8005D7A0.firstUsed;
    romEnd = romAddr + length;

    while (buf) {
        bufStart = buf->startAddr;
        bufEnd = bufStart + 0x400;
        if (romAddr < bufStart)
            break;
        else if (romEnd <= bufEnd) {
            buf->lastFrame = auFrameCount;
            buffer = buf->ptr + romAddr - buf->startAddr;
            return osVirtualToPhysical(buffer);
        }
        prevBuf = buf;
        buf = (DMABuf *) buf->node.next;
    }

    buf = D_8005D7A0.firstFree;
    if (!buf) {
        return (u32) D_8005D7A0.firstUsed->ptr - 0x80000000;
    }
    D_8005D7A0.firstFree = (DMABuf *) buf->node.next;
    alUnlink(buf);

    if (prevBuf)
        alLink(buf, prevBuf);
    else if (D_8005D7A0.firstUsed) {
        prevBuf = D_8005D7A0.firstUsed;
        D_8005D7A0.firstUsed = buf;
        buf->node.next = (ALink *) prevBuf;
        buf->node.prev = 0;
        prevBuf->node.prev = (ALink *) buf;
    } else {
        D_8005D7A0.firstUsed = buf;
        buf->node.next = 0;
        buf->node.prev = 0;
    }

    misalign = romAddr & 1;
    cartHandle = osCartRomInit();
    romAddr -= misalign;
    buf->startAddr = romAddr;
    msg = &D_8005D1A0[D_8005DCB0++];
    buffer = buf->ptr;
    buf->lastFrame = auFrameCount;
    msg->pri = 0;
    msg->retQueue = D_8005D088;
    msg->dramAddr = buffer;
    msg->devAddr = romAddr;
    msg->size = 0x400;
    osEPiStartDma(cartHandle, msg, 0);

    return osVirtualToPhysical(buffer) + misalign;
}
