#include "common.h"

typedef struct { u32 envelope; u32 keymap; u32 wavetable; u8 pad[2]; u8 flags; u8 padf; } PR_BankSound;
extern void _bnkfPatchWaveTable(u32, u32, u32);
void _bnkfPatchSound(PR_BankSound *p,u32 base,u32 waveBase) { if (!p->flags) { p->flags=1; p->envelope+=base; p->keymap+=base; p->wavetable+=base; _bnkfPatchWaveTable(p->wavetable,base,waveBase); } }
