extern u8 D_80168DD0[][16];
extern u8 D_80168E50[][16];
u8 func_80148230(void);
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void liftCopyFlags();
void func_8014C080();
void func_8014C0FC();
void func_8014C264();
void func_8014C4D0();
void func_8014C77C();
void func_80167510();

void func_8014C7A0(void)
{
    objCreate(0, 10, 2, 0, 0x53, 0x96, D_80168DD0[0], liftCopyFlags, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 10, 2, 0, 0x54, 0x96, D_80168DD0[2], func_8014C080, func_8014C0FC, -1500.0f, 75.70999908447266f, 1450.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 10, 2, 0, 0x55, 0x96, D_80168DD0[3], func_8014C080, func_8014C0FC, -1487.6400146484375f, 40.0f, 1457.1400146484375f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 15, 2, 0, 0x53, 0x96, D_80168DD0[1], liftCopyFlags, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 15, 2, 0, 0x54, 0x96, D_80168DD0[2], func_8014C080, func_8014C0FC, 1500.0f, 75.70999908447266f, 1250.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 15, 2, 0, 0x55, 0x96, D_80168DD0[3], func_8014C080, func_8014C0FC, 1512.3599853515625f, 40.0f, 1257.1400146484375f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 19, 2, 0, 0x51, 0xff, D_80168DD0[4], func_8014C264, func_8014C4D0, 2423.0f, 61.66999816894531f, -1268.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 16, 2, 128, 0x51, 0xff, D_80168DD0[5], liftCopyFlags, 0, 2514.0f, 141.0f, 1050.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 0, 2, 128, 0x51, 0xff, D_80168DD0[6], liftCopyFlags, 0, 604.0f, 58.0f, -1696.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 0, 2, 128, 0x51, 0xff, D_80168DD0[6], liftCopyFlags, 0, 604.0f, 58.0f, -1904.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    if (func_80148230() != 0) {
        objCreate(0, 16, 2, 0, 0x51, 0xff, D_80168DD0[7], func_80167510, 0, 1920.1600341796875f, 0.0f, 1026.239990234375f, 0.0f, 0.0f, 0.0f, 0.4000000059604645f, 0.5f, 0.5f);
        objCreate(0, 16, 2, 0, 0x51, 0xff, D_80168DD0[7], func_80167510, 0, 1829.3699951171875f, 0.0f, 1135.52001953125f, 0.0f, 90.0f, 0.0f, 0.4000000059604645f, 0.5f, 0.5f);
    }
    objCreate(0, 0, 2, 0, 0x51, 0x96, D_80168E50[0], liftCopyFlags, func_8014C77C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 10, 2, 0, 0x51, 0xff, D_80168E50[1], liftCopyFlags, 0, -1660.0f, 1.0f, 1661.0f, 0.0f, -90.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    objCreate(0, 19, 2, 0, 0x51, 0xff, D_80168E50[1], liftCopyFlags, 0, 2106.0f, 1.0f, -1614.0f, 0.0f, 40.5f, 0.0f, 1.0f, 1.0f, 1.0f);
}
