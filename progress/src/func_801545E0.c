extern u8 D_8016D2C8[][16];
extern u8 D_8023991C[];
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void liftCopyFlags();
void func_80152720();
void func_80153D40();
void func_80153EA8();
void func_80153EE8();
void func_80153F74();
void func_8015409C();
void func_80154128();
void func_8015426C();
void func_801542F8();
void func_80154418();
void func_80154494();

void func_801545E0(void)
{
    objCreate(0, 20, 2, 0, 0x51, 0xff, D_8016D2C8[0], func_80153D40, 0, 0.0f, -4.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 21, 2, 0, 0x51, 0xff, D_8016D2C8[1], func_80153D40, 0, 0.0f, -4.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 27, 2, 0, 0x54, 0x64, D_8016D2C8[2], func_80153EE8, func_80153F74, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 28, 2, 0, 0x54, 0x64, D_8016D2C8[3], func_80153EE8, func_80153F74, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 17, 2, 0, 0x51, 0xff, D_8016D2C8[4], liftCopyFlags, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 20, 2, 0, 0x51, 0xc8, D_8016D2C8[5], func_8015426C, func_801542F8, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 11, 2, 128, 0x51, 0xff, D_8016D2C8[6], liftCopyFlags, 0, 1375.0f, 130.0f, -3450.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 28, 2, 0, 0x53, 0x9b, D_8016D2C8[7], func_80154418, func_80154494, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 28, 2, 0, 0x53, 0x9b, D_8016D2C8[8], func_80154418, func_80154494, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 28, 2, 0, 0x55, 0x9b, D_8016D2C8[9], func_8015409C, func_80154128, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 28, 2, 0, 0x55, 0x9b, D_8016D2C8[10], func_8015409C, func_80154128, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 10, 2, 0, 0x51, 0xff, D_8016D2C8[11], liftCopyFlags, 0, 1746.4599609375f, 51.0f, -2435.840087890625f, 0.0f, -171.3699951171875f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 13, 2, 0, 0x51, 0xff, D_8016D2C8[11], liftCopyFlags, 0, 735.489990234375f, 51.0f, -3842.360107421875f, 0.0f, -90.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 17, 2, 0, 0x51, 0xff, D_8016D2C8[11], liftCopyFlags, 0, -1100.0f, 1.0f, -1747.6199951171875f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 38, 2, 0, 0x51, 0xff, D_8016D2C8[11], liftCopyFlags, 0, 2384.60009765625f, -99.0f, 3806.800048828125f, 0.0f, 90.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 9, 2, 0, 0x51, 0x96, D_8016D2C8[12], liftCopyFlags, func_80153EA8, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 0, 2, 128, 0x51, 0xff, D_8016D2C8[13], liftCopyFlags, 0, 2296.0f, 58.0f, 1204.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 0, 2, 128, 0x51, 0xff, D_8016D2C8[13], liftCopyFlags, 0, 2504.0f, 58.0f, 1204.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 0, 2, 0, 0x51, 0x96, D_8016D2C8[14], liftCopyFlags, func_80153EA8, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 11, 2, 0, 0x51, 0xff, D_8023991C, liftCopyFlags, 0, 600.4000244140625f, 181.9600067138672f, -3150.56005859375f, -10.199999809265137f, 98.16000366210938f, 0.0f, 2.0f, 2.0f, 1.0f);
    objCreate(0, 12, 2, 0, 0x51, 0xff, D_8023991C, liftCopyFlags, 0, 1198.72998046875f, 149.1199951171875f, -4496.2099609375f, 0.0f, -18.440000534057617f, -180.0f, 3.0f, 3.0f, 1.0f);
    objCreate(0, 32, 2, 0, 0x51, 0xff, D_8023991C, liftCopyFlags, 0, 392.9700012207031f, 75.0f, 4557.2998046875f, 0.0f, -157.57000732421875f, -180.0f, 2.0f, 2.0f, 1.0f);
    objCreate(0, 35, 2, 0, 0x51, 0xff, D_8023991C, liftCopyFlags, 0, 567.469970703125f, 25.0f, 2738.179931640625f, 0.0f, 45.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 35, 2, 0, 0x51, 0xff, D_8023991C, liftCopyFlags, 0, 461.4100036621094f, 25.0f, 2844.25f, 0.0f, 45.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 0, 3, 0, 0x40, 0xff, 0, func_80152720, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
}
