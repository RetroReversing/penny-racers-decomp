void func_8015E530(void);
void func_8015FEC0(void);
void func_80160930(void);
void func_80165830(u8 *a0, s32 a1);
void func_80163960(void);
void func_801669D0(void);
void func_801616C0(void);
void func_801632D0(void);
void func_801644F0(void);
void func_80164D00(void);
void func_80161180(void);
void func_80161BE0(void);

void func_8013EC80(u8 *a0) {
    if (*(s16 *)(a0 + 0x55E) == 0) {
        return;
    }
    switch (*(u16 *)(a0 + 0x53A)) {
    case 0:
        func_8015E530();
        break;
    case 1:
        func_8015FEC0();
        break;
    case 2:
        func_80160930();
        break;
    case 3:
        if (a0[0x8A1] == 0 && a0[0x860] != 0 && *(f32 *)(a0 + 0x770) > 10.0f) {
            func_80165830(a0, 0);
        }
        break;
    case 4:
        if (a0[0x8A1] == 0 && a0[0x860] != 0 && *(f32 *)(a0 + 0x770) > 10.0f) {
            func_80165830(a0, 1);
        }
        break;
    case 5:
        func_80163960();
        break;
    case 6:
        func_801669D0();
        break;
    case 7:
        func_801616C0();
        break;
    case 8:
        func_801632D0();
        break;
    case 9:
        func_801644F0();
        break;
    case 10:
        func_80164D00();
        break;
    case 11:
        func_80161180();
        break;
    case 12:
        func_80161BE0();
        break;
    }
}
