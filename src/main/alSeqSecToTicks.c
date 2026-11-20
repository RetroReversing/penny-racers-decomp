#include "common.h"

u32 alSeqSecToTicks(void *seq, f32 sec, u32 tempo) { return (u32)((sec * 1000000.0 * *(s16 *)((u8 *)seq+0x18)) / tempo); }
