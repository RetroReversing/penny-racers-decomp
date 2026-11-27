/* adapted from similar verified C in func_8008FBC0 in V-RALLY-PAL (matched), with its names changed by decompdecomp */
typedef struct {
    s32 errStatus;
    s32 dramAddr;
    s32 C2Addr;
    s32 sectorSize;
    u32 C1ErrNum;
    s32 C1ErrSector[4];
} DiskBlock;
typedef struct {
    s32 cmdType;
    u16 transferMode;
    u16 blockNum;
    s32 sectorNum;
    s32 pad0C;
    s32 bmCtlShadow;
    s32 pad14;
    DiskBlock block[2];
} DiskXfer;
extern void PiRawStartDma(void*,s32,u32,s32,s32);
extern s32 D_800470C0;
extern u8 *D_8006FB28;
extern void __osLeoResume(void),__osLeoAbnormalResume(void);

#define PI_STATUS (*(volatile s32 *)0xA4600010)
#define LEO_STATUS (*(volatile s32 *)0xA5000508)
#define LEO_BM_CTL (*(volatile s32 *)0xA5000510)
#define WAITIO(x) x = PI_STATUS; while (x & 3) { x = PI_STATUS; }

/* Disk drive (LEO) interrupt step. Advances the current read/seek transfer by
 * one step: checks the drive status, handles the error and bus-mode bits,
 * starts the next DMA into the block's DRAM buffer, and marks the block's
 * errStatus. Returns 1 while the transfer is still running, 0 when the drive
 * has finished, and resumes or aborts the LEO command when it is done. */
/* Disk drive (LEO) interrupt step: advances the current read or seek transfer by one step, starts the next DMA and records each block's error status. */ s32 __osLeoInterrupt(void) {
    volatile s32 piStatus;
    s32 leoStatus;
    u32 bmCtl;
    DiskXfer *xfer;
    DiskBlock *curBlock;
    DiskBlock *firstBlock;
    s32 *c2Words;

    xfer = (DiskXfer *)(D_8006FB28 + 0x14);
    curBlock = &xfer->block[xfer->blockNum];
    piStatus = PI_STATUS;
    if (piStatus & 1) {
        curBlock->errStatus = 0x1D;
        D_800470C0 &= ~0x800;
        __osLeoResume();
        return 1;
    }
    WAITIO(piStatus);
    leoStatus = LEO_STATUS;
    if (leoStatus & 0x02000000) {
        WAITIO(piStatus);
        LEO_BM_CTL = xfer->bmCtlShadow | 0x01000000;
        curBlock->errStatus = 0;
        return 0;
    }
    if (xfer->cmdType == 2) return 1;
    if (leoStatus & 0x08000000) {
        WAITIO(piStatus);
        leoStatus = LEO_STATUS;
        curBlock->errStatus = 0x16;
        __osLeoResume();
        PI_STATUS = 2;
        D_800470C0 |= 0x100401;
        return 1;
    }
    if (xfer->cmdType == 1) {
        if (!(leoStatus & 0x40000000)) {
            if (xfer->sectorNum + 1 != xfer->transferMode * 0x55) {
                curBlock->errStatus = 0x18;
                __osLeoAbnormalResume();
                return 1;
            }
            PI_STATUS = 2;
            D_800470C0 |= 0x100401;
            curBlock->errStatus = 0;
            __osLeoResume();
            return 1;
        }
        curBlock->dramAddr += curBlock->sectorSize;
        xfer->sectorNum++;
        PiRawStartDma(D_8006FB28, 1, 0x05000400, curBlock->dramAddr, curBlock->sectorSize);
        return 1;
    }
    if (xfer->cmdType == 0) {
        if (xfer->transferMode == 3) {
            if ((s32)curBlock->C1ErrNum + 0x11 < xfer->sectorNum) {
                curBlock->errStatus = 0;
                __osLeoAbnormalResume();
                return 1;
            }
            if (!(leoStatus & 0x40000000)) {
                curBlock->errStatus = 0x17;
                __osLeoAbnormalResume();
                return 1;
            }
        } else {
            curBlock->dramAddr += curBlock->sectorSize;
        }
        bmCtl = LEO_BM_CTL;
        if (((bmCtl & 0x200000) && (bmCtl & 0x400000)) || (bmCtl & 0x02000000)) {
            if (curBlock->C1ErrNum > 3) {
                if (xfer->transferMode != 3 || xfer->sectorNum > 0x52) {
                    curBlock->errStatus = 0x17;
                    __osLeoAbnormalResume();
                    return 1;
                }
            } else {
                curBlock->C1ErrSector[curBlock->C1ErrNum] = xfer->sectorNum + 1;
            }
            curBlock->C1ErrNum++;
        }
        if (leoStatus & 0x10000000) {
            if (xfer->sectorNum + 1 != 0x58) {
                curBlock->errStatus = 0x18;
                __osLeoAbnormalResume();
            }
            if (xfer->transferMode == 2 && xfer->blockNum == 0) {
                xfer->blockNum = 1;
                xfer->sectorNum = -1;
                xfer->block[1].dramAddr -= xfer->block[1].sectorSize;
                curBlock->errStatus = 0x16;
            } else {
                PI_STATUS = 2;
                D_800470C0 |= 0x100401;
                xfer->cmdType = 2;
                curBlock->errStatus = 0;
            }
            PiRawStartDma(D_8006FB28, 0, 0x05000000, curBlock->C2Addr, curBlock->sectorSize * 4);
            return 1;
        }
        if (xfer->sectorNum == -1 && xfer->transferMode == 2 && xfer->blockNum == 1) {
            firstBlock = &xfer->block[0];
            if (firstBlock->C1ErrNum == 0) {
                c2Words = (s32 *)firstBlock->C2Addr;
                if (c2Words[0] | c2Words[1] | c2Words[2] | c2Words[3]) {
                    firstBlock->errStatus = 24;
                    __osLeoAbnormalResume();
                    return 1;
                }
            }
            firstBlock->errStatus = 0;
            __osLeoResume();
        }
        xfer->sectorNum++;
        if (leoStatus & 0x40000000) {
            if (xfer->sectorNum > 0x54) {
                curBlock->errStatus = 0x18;
                __osLeoAbnormalResume();
                return 1;
            }
            PiRawStartDma(D_8006FB28, 0, 0x05000400, curBlock->dramAddr, curBlock->sectorSize);
            curBlock->errStatus = 0;
            return 1;
        }
        if (xfer->sectorNum < 0x55) {
            curBlock->errStatus = 0x18;
            __osLeoAbnormalResume();
            return 1;
        }
        return 1;
    }
    curBlock->errStatus = 4;
    __osLeoAbnormalResume();
    return 1;
}
