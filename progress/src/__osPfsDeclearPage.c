/* identical to func_800099D0 in Resident Evil II (local match library) (matched), with its names changed by decompdecomp */
s32 __osClearPage(u8 *, s32, s32, u8);

/* Chains free pages in the controller page table for a new file and clears each one; returns an error code. */ s32 __osPfsDeclearPage(u8 *pfs, u16 *pageTable, s32 numPages, s32 *firstPageOut, u8 bankId, s32 *pageCount, s32 *lastPageOut) {
    u8 pageBuf[0x20];
    s32 ret;
    s32 startPage;
    s32 i;
    s32 prevPage;
    s32 firstPage;
    s32 k;

    ret = 0;
    startPage = 1;
    if (bankId == 0) {
        startPage = *(s32 *)(pfs + 0x60);
    }
    i = startPage;
    for (; i < 0x80; i++) {
        if (pageTable[i] == 3) {
            break;
        }
    }
    if (i == 0x80) {
        *firstPageOut = -1;
        return ret;
    }
    for (k = 0x1F; k >= 0; k--) {
        pageBuf[k] = 0;
    }
    *pageCount = 1;
    prevPage = i;
    firstPage = prevPage;
    i = prevPage + 1;
    if (*pageCount < numPages && i < 0x80) {
        do {
            if (pageTable[i] == 3) {
                u8 *p = (u8 *)(pageTable + prevPage);
                p[0] = bankId;
                p[1] = i;
                ret = __osClearPage(pfs, prevPage, (s32)pageBuf, bankId & 0xFF);
                if (ret != 0) {
                    return ret;
                }
                (*pageCount)++;
                prevPage = i;
            }
            i++;
        } while (*pageCount < numPages && i < 0x80);
    }
    *firstPageOut = firstPage;
    if (i == 0x80 && *pageCount < numPages) {
        *lastPageOut = prevPage;
        return ret;
    }
    {
        u16 *q = pageTable + prevPage;
        *q = 1;
    }
    ret = __osClearPage(pfs, prevPage, (s32)pageBuf, bankId);
    *lastPageOut = 0;
    return ret;
}
