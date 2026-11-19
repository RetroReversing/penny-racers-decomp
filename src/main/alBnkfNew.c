#include "common.h"

extern void _bnkfPatchBank(void *, u32, s32);

typedef struct { s16 revision; s16 count; u32 banks[1]; } BFile;

void alBnkfNew(BFile *arg0, s32 arg1) {
    BFile *f;
    u32 base;
    s32 table;
    s32 i;

    f = arg0;
    base = (u32)arg0;
    table = arg1;
    if (f->revision == 0x4231) {
        for (i = 0; i < f->count; i++) {
            f->banks[i] += base;
            if (f->banks[i] != 0) {
                _bnkfPatchBank((void *)f->banks[i], base, table);
            }
        }
    }
}
