#include "common_local_source_339302417611.h"

typedef struct {
    u32 w0;
    u32 w1;
} Gfx;

extern u8 D_80168166;
extern u8 D_80126FF6;
extern u8 D_80183BE0;

void func_8020FED8(Gfx **arg0) {
    Gfx *temp_a2;
    Gfx *temp_v1;

    temp_a2 = *arg0;
    (*arg0)++;
    temp_a2->w0 = 0xFD100000;
    temp_a2->w1 = (u32)((D_80168166 << 0xB) + ((D_80126FF6 << 0xC) + &D_80183BE0));
    temp_v1 = *arg0;
    (*arg0)++;
    temp_v1->w0 = 0xF5100000;
    temp_v1->w1 = 0x07014050;
    temp_v1 = *arg0;
    (*arg0)++;
    temp_v1->w0 = 0xE6000000;
    temp_v1->w1 = 0;
    temp_v1 = *arg0;
    (*arg0)++;
    temp_v1->w0 = 0xF3000000;
    temp_v1->w1 = 0x073FF100;
    temp_v1 = *arg0;
    (*arg0)++;
    temp_v1->w0 = 0xE7000000;
    temp_v1->w1 = 0;
    temp_v1 = *arg0;
    (*arg0)++;
    temp_v1->w0 = 0xF5101000;
    temp_v1->w1 = 0x14050;
    temp_v1 = *arg0;
    (*arg0)++;
    temp_v1->w0 = 0xF2000000;
    temp_v1->w1 = 0x7C07C;
}
