#include "common_local_source_339302417553.h"

void func_80149CC4(s32, s32);
extern s32 D_8018D3A0;
extern s32 D_8018D3A4;
extern s32 D_8018D3A8;
extern s32 D_8018D3AC;
extern s32 D_8018D3B0;
extern s32 D_8018D3B4;
extern s32 D_8018D3B8;
extern s32 D_8018D3BC;

void func_80203CB0(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 << 5;
    *(s32 *)((u8 *)&D_8018D3A0 + temp_v1) = 0x1FFF;
    *(s32 *)((u8 *)&D_8018D3A4 + temp_v1) = 0x01FFFFFF;
    *(s32 *)((u8 *)&D_8018D3A8 + temp_v1) = 0xFFF;
    *(s32 *)((u8 *)&D_8018D3AC + temp_v1) = 0x1FF;
    *(s32 *)((u8 *)&D_8018D3B0 + temp_v1) = 0x3FF;
    *(s32 *)((u8 *)&D_8018D3B4 + temp_v1) = 0xFF;
    *(s32 *)((u8 *)&D_8018D3B8 + temp_v1) = 0x1FFFFF;
    *(s32 *)((u8 *)&D_8018D3BC + temp_v1) = 0x7FFF;
    func_80149CC4(arg0, 0);
}
