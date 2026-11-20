s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, s32, s32, s32, s32, s32, s32, f32, f32, f32);
extern u8 D_8016D150[];
extern u8 D_802398E8[];
extern u8 D_8023991C[];
extern u8 func_8013AE60[];
extern u8 func_80151178[];
extern u8 func_801513E4[];
extern u8 func_80151F50[];
extern u8 func_80151F70[];
extern u8 func_80151FFC[];
extern u8 func_8015211C[];
extern u8 func_80152198[];
extern u8 func_801522F8[];
extern u8 func_80152374[];
extern u8 func_80152720[];

void func_801528B4(void) {
    func_800DE41C(0, 7, 2, 0, 0x53, 0x96, D_8016D150, func_80151F70, func_80151FFC, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    func_800DE41C(0, 7, 2, 0, 0x54, 0x96, D_8016D150 + 0x10, func_8015211C, func_80152198, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
}
