#include "common_local_source_339302417267.h"

extern u32 D_8018D3A4;
extern u32 D_8018D3A8;
extern u32 D_8018D3AC;
extern u32 D_8018D3B0;
extern u32 D_8018D3B4;
extern u32 D_8018D3B8;
extern u32 D_8018D3BC;

s32 func_8014AB2C(s32 arg0, s32 arg1) {
    s32 off = (arg0 & 0xFF) << 5;
    u32 bits = *(u32 *)((u8 *)&D_8018D3A4 + off) & ~0x4081;
    bits |= *(u32 *)((u8 *)&D_8018D3A8 + off) & ~1;
    bits |= *(u32 *)((u8 *)&D_8018D3AC + off) & ~1;
    bits |= *(u32 *)((u8 *)&D_8018D3B0 + off) & ~1;
    bits |= *(u32 *)((u8 *)&D_8018D3B4 + off);
    bits |= *(u32 *)((u8 *)&D_8018D3B8 + off);
    bits |= *(u32 *)((u8 *)&D_8018D3BC + off) & ~8;
    return (bits == 0) & ((arg1 & 0xFF) == 1);
}
