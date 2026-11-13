typedef struct 
{
  u16 type;
  u8 status;
  u8 pad;
} OSContStat;
typedef struct 
{
  u8 txsize;
  u8 rxsize;
  u8 cmd;
  u8 address;
  u8 data[8];
  u8 stat;
} EepFmt;
s32 __osEepStatus(s32, OSContStat *);
void __osPackEepWriteData(u8, u8 *);
void func_8003F350(s32, void *);
void func_8003F464(void);
void func_8003F4D0(void);
s32 osRecvMesg(s32, s32, s32);
extern u8 D_8006FF10[];
extern s8 D_80092C04;
s32 osEepromWrite(s32 mq, u8 address, u8 *buffer)
{
  s32 i;
  volatile char ret;
  u8 *ptr;
  OSContStat sdata;
  EepFmt fmt;
  func_8003F464();
  __osEepStatus(mq, &sdata);
  ret = __osEepStatus(mq, &sdata);
  if (ret != 0)
  {
    func_8003F4D0();
    return 8;
  }
  if ((((float) (sdata.type & 0xC000)) != 0x8000) && ((sdata.type & 0xC000) != 0xC000))
  {
    func_8003F4D0();
    return 8;
  }
  if (address > 0x40)
  {
    func_8003F4D0();
    return -1;
  }
  while (sdata.status & 0x80)
  {
    __osEepStatus(mq, &sdata);
  }

  __osPackEepWriteData(address, buffer);
  func_8003F350(1, D_8006FF10);
  do
  {
    osRecvMesg(mq, 0, 1);
  }
  while (0);
  func_8003F350(0, D_8006FF10);
  D_80092C04 = 5;
  osRecvMesg(mq, 0, 1);
  ptr = D_8006FF10;
  for (i = 0; i < 4; i++)
  {
    ptr++;
  }

  fmt = *((EepFmt *) ptr);
  func_8003F4D0();
  return (fmt.stat & 0xC0) >> 4;
}

