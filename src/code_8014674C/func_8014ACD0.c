#include "common_local_source_339302417269.h"

typedef struct Racer {
    u8 pad0[0x18];
    f32 f18;
    f32 f1C;
    u8 pad1[4];
    f32 f24;
    u8 pad2[8];
    f32 f30;
    u8 pad3[0xA];
    u16 state;
} Racer;

extern u8 D_8011F2F0[];
extern f64 D_80183738;

void func_8014ACD0(s32 arg0) {
    Racer *r = (Racer *)(D_8011F2F0 + (arg0 & 0xFFFF) * 100);

    switch (r->state) {
    case 0:
        r->f24 = 142.0f;
        r->f18 = 142.0f;
        r->f1C = r->f24;
        r->f30 = -2.0f;
        r->state = 1;
        /* fallthrough */
    case 1:
        r->f18 = r->f18 + r->f30;
        r->f1C = r->f1C - r->f30;
        r->f30 = (f32)((f64)r->f30 + D_80183738);
        if (r->f18 > r->f24) {
            r->state = 0;
        }
        break;
    }
}
