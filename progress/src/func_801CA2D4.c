/* adapted from similar verified C in gfxSetup2DState (matched), with its names changed by decompdecomp */
void func_801CA2D4(u32 **arg0)
{
    u32 *d = *arg0;
    u32 *p;

    { u32 *p = d; d += 2; p[0] = 0xE7000000; p[1] = 0; }
    { u32 *p = d; d += 2; p[0] = 0xBA001402; p[1] = 0; }
    { u32 *p = d; d += 2; p[0] = 0xB6000000; p[1] = 0xF3205; }
    { u32 *p = d; d += 2; p[0] = 0xB900031D; p[1] = 0xF0A4000; }
    { u32 *p = d; d += 2; p[0] = 0xFC119623; p[1] = 0xFF2FFFFF; }
    { u32 *p = d; d += 2; p[0] = 0xBA001301; p[1] = 0; }
    { u32 *p = d; d += 2; p[0] = 0xBA001001; p[1] = 0; }
    { u32 *p = d; d += 2; p[0] = 0xBA000C02; p[1] = 0x2000; }
    { u32 *p = d; d += 2; p[0] = 0xBA000903; p[1] = 0xC00; }
    { u32 *p = d; d += 2; p[0] = 0xBA000E02; p[1] = 0x8000; }
    { u32 *p = d; d += 2; p[0] = 0xFA000000; p[1] = 0xFFFFFFFF; }
    { u32 *p = d; d += 2; p[0] = 0xBA000602; p[1] = 0xC0; }
    { u32 *p = d; d += 2; p[0] = 0xBA000602; p[1] = 0x40; }
    { u32 *p = d; d += 2; p[0] = 0xB9000002; p[1] = 0; }
    { u32 *p = d; d += 2; p[0] = 0xBA000402; p[1] = 0x30; }
    *arg0 = d;
}
