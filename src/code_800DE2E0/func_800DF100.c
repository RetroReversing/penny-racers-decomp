#include "common_local_source_339302416391.h"

typedef struct {
    u16 flags;
    u8 pad[98];
} Slot;

extern Slot D_8011F2F2[];

void func_800DF100(s32 arg0) {
    D_8011F2F2[arg0 & 0xFFFF].flags |= 0x10;
}
