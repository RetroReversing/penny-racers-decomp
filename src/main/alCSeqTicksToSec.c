#include "common.h"

f32 alCSeqTicksToSec(void **seq, s32 ticks, u32 tempo)
{
 return ((f32)ticks * (f32)tempo) / ((f32)*(u32 *)((u8 *)*seq+0x40) * 1000000.0);
}
