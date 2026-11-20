s32 func_8003DE60();
void func_80149FA8(u16, void *);
s32 func_801FA38C(s32, void *, void *);
extern u8 D_8006FAF0[];
extern u8 D_800DA260[];
extern u8 D_800DA264[];
extern s32 D_801E99C4;
extern s16 D_8021E1A6;
extern u8 *D_802D6288[];
extern u8 D_80232D34[], D_80232D44[], D_80232D58[], D_80232D6C[], D_80232D80[], D_80232D94[], D_80232DA8[], D_80232DBC[], D_80232DD0[], D_80232DE4[], D_80232DF8[], D_80232E0C[], D_80232E20[];

void func_80230BC4(s32 arg0, s16 arg1) {
    u8 *rec;
    u8 *src;
    u16 pidx;
    u16 idx0;

    idx0 = arg0 & 0xFFFF;
    src = D_802D6288[*(u16 *)(D_8006FAF0 + 0x20)];
    rec = D_800DA260 + idx0 * 0x178;
    pidx = arg1 & 0xFFFF;
    if (D_8021E1A6 >= 3) {
        src = src + (0x24 * pidx + 0x3F0);
        *(u16 *)(rec + 6) = 0xE;
        if (*(u16 *)(D_8006FAF0 + 0x20) == 6) {
            *(u16 *)(rec + 4) = 0xC;
        } else {
            *(u16 *)(D_800DA264 + 0x8D0) = 0xB;
        }
        *(f32 *)(rec + 0x1C) = 1.0f;
        *(u16 *)(rec + 8) = 5;
        *(s16 *)(rec + 0) = arg1;
    } else {
        src = src + 0x24 * (pidx + D_8021E1A6 * 0xE);
        *(u16 *)(rec + 6) = *(u16 *)(src + 4);
        *(u16 *)(rec + 4) = *(u16 *)(src + 2);
        *(f32 *)(rec + 0x1C) = *(f32 *)(src + 0x18);
        *(u16 *)(rec + 8) = *(u16 *)(src + 6);
        *(s16 *)(rec + 0) = arg1;
    }
    *(u16 *)(rec + 2) = *(u16 *)(src + 0);
    *(u16 *)(rec + 0xA) = *(u16 *)(src + 8);
    *(u16 *)(rec + 0xC) = *(u16 *)(src + 0xA);
    *(u16 *)(rec + 0xE) = *(u16 *)(src + 0xC);
    *(f32 *)(rec + 0x14) = *(f32 *)(src + 0x10);
    *(f32 *)(rec + 0x18) = *(f32 *)(src + 0x14);
    *(f32 *)(rec + 0x20) = *(f32 *)(src + 0x1C);
    rec[0x24] = src[0x20];
    rec[0x16A + pidx] = (u8)((u32)func_801FA38C(0, src, D_8006FAF0 + 0x20) % 10);
    func_80149FA8(idx0, rec + pidx);
    if (D_801E99C4 != 0) {
        func_8003DE60(D_80232D34, idx0, pidx);
        func_8003DE60(D_80232D44, *(u16 *)(rec + 2));
        func_8003DE60(D_80232D58, *(u16 *)(rec + 4));
        func_8003DE60(D_80232D6C, *(u16 *)(rec + 6));
        func_8003DE60(D_80232D80, *(u16 *)(rec + 8));
        func_8003DE60(D_80232D94, *(u16 *)(rec + 0xA));
        func_8003DE60(D_80232DA8, *(u16 *)(rec + 0xC));
        func_8003DE60(D_80232DBC, *(u16 *)(rec + 0xE));
        func_8003DE60(D_80232DD0, (double)*(f32 *)(rec + 0x14));
        func_8003DE60(D_80232DE4, (double)*(f32 *)(rec + 0x18));
        func_8003DE60(D_80232DF8, (double)*(f32 *)(rec + 0x1C));
        func_8003DE60(D_80232E0C, (double)*(f32 *)(rec + 0x20));
        func_8003DE60(D_80232E20, rec[0x24]);
    }
}
