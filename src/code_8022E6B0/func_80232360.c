#include "common_local_source_339302417703.h"

extern u8 D_8006FAF0[];
extern u8 D_80229B20[];
extern u8 D_8022B050[];
extern u32 D_802328C0[];
extern u8 D_8023306C[];
extern u8 D_80233084[];
extern void func_8003DE60();

void func_80232360(u16 arg0, u16 arg1) {
    u16 mode;
    u16 s2;
    u16 s1;
    u16 s0;
    u32 val;

    s2 = arg0;
    mode = *(u16 *)(D_8006FAF0 + 0x20);
    if ((mode == 0) | (mode >= 0xA)) {
        *(u32 *)(D_8022B050 + (s2 & 0xFFFF) * 0x8F0) = (u32)D_80229B20;
        return;
    }
    s1 = s2 & 0xFFFF;
    s0 = arg1 & 0xFFFF;
    func_8003DE60(D_8023306C, s1, s0);
    mode = *(u16 *)(D_8006FAF0 + 0x20);
    val = D_802328C0[mode * 16 + s0];
    if (val != 0) {
        *(u32 *)(D_8022B050 + s1 * 0x8F0) = val;
        return;
    }
    *(u32 *)(D_8022B050 + (s2 & 0xFFFF) * 0x8F0) = (u32)D_80229B20;
    func_8003DE60(D_80233084);
}
