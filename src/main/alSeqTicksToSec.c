#include "common.h"

typedef struct { u8 pad[0x18]; s16 division; } PR_Seq;
f32 alSeqTicksToSec(PR_Seq *seq,s32 ticks,u32 tempo) { return ((f32)ticks*(f32)tempo)/((f32)seq->division*1000000.0); }
