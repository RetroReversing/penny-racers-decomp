extern s32 D_80048120[];
extern u8 sRowBoard[];
extern u8 D_800DD3E0[];
extern u8 D_80092C04;
extern u8 D_8006E7A0[];
void osRecvMesg(s32, s32, s32);
u8 __osContDataCrc(void *);
void __osSiGetAccess(void);
void __osSiRelAccess(void);
void __osSiRawStartDma(s32, void *);
void *memcpy(void *, const void *, u32);

/* Reads a 40-byte controller-pak block over SI DMA for the given channel, checks its CRC, and returns a status code (5 if the channel is empty, 4 on a bad CRC). */ u32 readControllerPakBlock(s32 *req)
{
  u8 block[0x28];
  u8 *src = D_800DD3E0;
  s32 i;
  u32 status;

  if (D_80048120[req[2]] == 0)
    return 5;
  __osSiGetAccess();
  D_80092C04 = 3;
  __osSiRawStartDma(1, sRowBoard + (req[2] << 6));
  osRecvMesg(req[1], 0, 1);
  __osSiRawStartDma(0, src);
  osRecvMesg(req[1], 0, 1);
  if (req[2] != 0)
  {
    for (i = 0; i < req[2]; i++)
      src++;
  }
  memcpy(block, src, 0x28);
  status = (block[2] & 0xC0) >> 4;
  if (status == 0 && __osContDataCrc(D_8006E7A0) != block[0x26])
    status = 4;
  __osSiRelAccess();
  return status;
}
