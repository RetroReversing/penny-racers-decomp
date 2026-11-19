extern s8 D_80046830;
extern u8 D_80046831;
extern u8 D_80046832;
extern s32 D_80046834;
extern s32 D_80046838;
extern s32 D_8006E790;
extern u32 D_8006E794;
extern volatile u16 D_8006F9E8;
extern u8 D_8006FB38[];
extern u16 D_8006FE58;
extern u16 D_80072BDC;
extern u8 D_80092C30[];
extern u8 D_801E4420;
extern s32 D_801E99C0;
extern u8 D_8022A770[];

void func_80025DE0(s32 arg0) {
    s32 i;
    s32 t;
    s32 v;
    u8 *base;

    func_800341C0(0, 0);
    if (D_80046838 == 0) {
        func_801D7F60();
    }
    func_800E1728();
    v = (u16)(s32)D_8006F9E8;
    switch (v) {
    case 0x384:
        i = 0;
        func_800DE38C();
        func_800DE2E0();
        D_80046831 = 1;
        D_80046832 = 0;
        D_80046830 = 0;
        base = D_8022A770;
loop:
        {
            s32 k = i << 3;
            k += i;
            k <<= 4;
            k -= i;
            k <<= 4;
            func_8022132C(k + base);
            i++;
        }
        if (i < 7) {
            goto loop;
        }
        D_8006F9E8 = 8;
        D_80072BDC = D_8006F9E8;
        D_8006FE58 = 0;
        D_8006F9E8 = 0x18;
        break;
    case 0:
        break;
    case 1:
        D_8006F9E8 = 0x12;
        break;
    case 2:
        func_801FD3B4();
        D_8006F9E8 = 3;
        break;
    case 3:
        func_801FD528();
        D_8006FE58 = 1;
        break;
    case 8:
        func_80143D70();
        D_8006F9E8 = 9;
        break;
    case 9:
        func_80143F68();
        D_8006FE58 = 1;
        break;
    case 0xA:
        func_801441E0();
        D_8006F9E8 = 0xB;
        break;
    case 0xB:
        func_80144800();
        D_8006FE58 = 1;
        break;
    case 0x12:
        func_8022F0E0();
        D_8006F9E8 = 0x13;
        break;
    case 0x13:
        D_8006FE58 = 1;
        func_8022F2F8();
        break;
    case 0x14:
        func_8022E6B0();
        D_8006F9E8 = 0x15;
        break;
    case 0x15:
        func_8022F0D8();
        D_8006FE58 = 1;
        break;
    case 0x16:
        func_801B3C74();
        D_8006F9E8 = 0x17;
        alSeqpStop(D_8006FB38);
        break;
    case 0x17:
        func_80192670();
        D_8006FE58 = 1;
        break;
    case 0x18:
        if (D_801E99C0 != 0 && (D_801E4420 & 1)) {
            func_801E0B98();
            D_8006F9E8 = 0x19;
        } else {
            D_8006F9E8 = D_80072BDC;
        }
        break;
    case 0x19:
        func_801E0F08();
        D_8006FE58 = 1;
        break;
    case 0x1A:
        func_80232480();
        D_8006F9E8 = 0x1B;
        break;
    case 0x1B:
        func_80232818();
        D_8006FE58 = 1;
        break;
    }
    if (arg0 < 2 && D_8006FE58 == 1 && (D_80046831 != 0 || D_80046832 != 0)) {
        func_801F93FC(D_80046834 * 0x23AC0 + D_80092C30);
        D_80046834 ^= 1;
        D_80046831 = 0;
    } else {
        D_80046831 = 1;
    }
    t = osGetTime();
    D_8006E790 = t;
    D_8006E794 = t;
}
