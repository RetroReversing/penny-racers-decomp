#include "common.h"

/* identical to __osLeoAbnormalResume in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
extern s32 D_800470C0;
extern u8 D_80068880[];
extern void __osLeoResume(void);

/* Abnormal resume of the 64DD LEO ASIC. Waits for the PI DMA to go idle (PI_STATUS at
 * 0xA4600010), writes the saved command word with bit 28 set to the LEO command register
 * (0xA5000510), waits again, writes the saved word back, resumes LEO, resets PI and
 * sets the event bits in D_800470C0. */
void __osLeoAbnormalResume(void)
{
  void *reg;
  u32 status;
  u32 *saved = (u32 *)(*(u8 **)(D_80068880 + 0x72A8) + 0x14);

  status = *(volatile u32 *)0xA4600010;
  if (status & 3)
    do
    {
      status = *(volatile u32 *)0xA4600010;
    }
    while (status & 3);
  reg = (void *)0xA5000510;
  *(volatile u32 *)reg = saved[4] | 0x10000000;
  status = *(volatile u32 *)0xA4600010;
  if (status & 3)
    do
    {
      status = *(volatile u32 *)0xA4600010;
    }
    while (status & 3);
  status = saved[4];
  *(volatile u32 *)0xA5000510 = status;
  __osLeoResume();
  *(volatile u32 *)0xA4600010 = 2;
  D_800470C0 |= 0x100401;
}
