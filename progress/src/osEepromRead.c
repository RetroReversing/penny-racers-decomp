extern void __osSiGetAccess(void);
extern void __osSiRelAccess(void);
extern void __osPackEepReadData(u8);
extern s32 __osEepStatus(s32, u16 *);
extern void __osSiRawStartDma(s32, void *);
extern s32 osRecvMesg(s32, void *, s32);
extern u8 D_80092C04;
extern u8 osEepPifBuffer[];

/* Reads one 8-byte block from the EEPROM at the given block address into buffer. Returns 0 on success, -1 if the address is out of range, or 8 if the EEPROM is not ready or is absent. */
u32 osEepromRead(s32 mq, u8 address, u8 *buffer) {
    u8 statusBuf[8];
    u8 recvBuf[12];
    u16 eepType;
    u32 result;
    u8 *src;
    u8 *cursor;
    s32 i;
    __osSiGetAccess();
    result = __osEepStatus(mq, (u16 *)statusBuf);
    eepType = (*(u16 *)statusBuf & 0xC000) & 0xFFFF;
    cursor = osEepPifBuffer;
    if (result != 0) {
        __osSiRelAccess();
        return 8;
    }
    if (eepType == 0x8000) {
        if (address > 0x40) {
            __osSiRelAccess();
            return -1;
        }
    } else if (eepType != 0xC000) {
        __osSiRelAccess();
        return 8;
    }
    while (statusBuf[2] & 0x80) {
        __osEepStatus(mq, (u16 *)statusBuf);
    }
    __osPackEepReadData(address);
    __osSiRawStartDma(1, osEepPifBuffer);
    osRecvMesg(mq, 0, 1);
    __osSiRawStartDma(0, osEepPifBuffer);
    D_80092C04 = 4;
    osRecvMesg(mq, 0, 1);
    for (i = 3; i >= 0; i--) cursor++;
    __builtin_memcpy(recvBuf, cursor, 12);
    result = (recvBuf[1] & 0xC0) >> 4;
    if (result == 0) {
        src = recvBuf + 4;
        do { *buffer++ = *src++; } while ((s32)src < (s32)(recvBuf + 12));
    }
    __osSiRelAccess();
    return result;
}
