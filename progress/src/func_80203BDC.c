s32 func_80149CC4(s32, s32);
s32 func_8014A030(s32, s32, s32);
extern s32 D_8018D3A0;
extern s32 D_8018D3A4;
extern s32 D_8018D3A8;
extern s32 D_8018D3AC;
extern s32 D_8018D3B0;
extern s32 D_8018D3B4;
extern s32 D_8018D3B8;
extern s32 D_8018D3BC;
extern s32 D_8021AFFC;
void func_80203BDC(s32 arg0)
{
    s32 temp_s0 = arg0 << 5;
    *((s32 *)((u8 *)&D_8018D3A0 + temp_s0)) = 0;
    *((s32 *)((u8 *)&D_8018D3A4 + temp_s0)) = 0x4081;
    *((s32 *)((u8 *)&D_8018D3A8 + temp_s0)) = 1;
    *((s32 *)((u8 *)&D_8018D3AC + temp_s0)) = 1;
    *((s32 *)((u8 *)&D_8018D3B0 + temp_s0)) = 1;
    *((s32 *)((u8 *)&D_8018D3B4 + temp_s0)) = 0;
    *((s32 *)((u8 *)&D_8018D3B8 + temp_s0)) = 0;
    *((s32 *)((u8 *)&D_8018D3BC + temp_s0)) = 8;
    *((s32 *)((u8 *)&D_8018D3A0 + temp_s0)) = func_8014A030(*((s32 *)((u8 *)&D_8018D3A0 + temp_s0)), *((s32 *)((u8 *)&D_8021AFFC + arg0 * 4)), 1);
    func_80149CC4(arg0, 0);
}
