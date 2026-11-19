#include "common.h"

u32 alCSeqSecToTicks(void **seq, f32 sec, u32 tempo) { return (u32)((sec*1000000.0 * *(u32 *)((u8 *)*seq+0x40))/tempo); }
