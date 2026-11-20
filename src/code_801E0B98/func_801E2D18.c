#include "common_local_source_339302417488.h"

extern u8 D_801C5E9C[];
extern u8 D_801C7080[];
extern u8 D_801F18E4[];
extern u8 D_801F18F8[];
extern u8 D_801F18F9[];
extern u8 D_801F18FA[];
extern u8 D_801F18FB[];
extern u8 D_801F18FC[];

void func_801E2D18(void) {
    u32 b0, b1, b2, b3, b4;
    u32 i;
    u32 off;

    D_801C5E9C[0] = D_801F18E4[0];
    D_801C5E9C[1] = D_801F18E4[1];
    D_801C5E9C[2] = D_801F18E4[2];
    D_801C5E9C[3] = D_801F18E4[3];
    i = 0;
    b0 = (u32)D_801F18F8;
    b1 = (u32)D_801F18F9;
    b2 = (u32)D_801F18FA;
    b3 = (u32)D_801F18FB;
    b4 = (u32)D_801F18FC;
    for (; i < 200; i++) {
        off = i * 5;
        D_801C7080[off + 0] = *(u8 *)(off + b0);
        D_801C7080[off + 1] = *(u8 *)(off + b1);
        D_801C7080[off + 2] = *(u8 *)(off + b2);
        D_801C7080[off + 3] = *(u8 *)(off + b3);
        D_801C7080[off + 4] = *(u8 *)(off + b4);
    }
}
