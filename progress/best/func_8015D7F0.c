typedef s32 M2C_UNK;
M2C_UNK func_8013E49C(u16);
M2C_UNK func_8013EA18(void *, s32, s32, s32);
M2C_UNK func_8013EC48(s32, f32);
M2C_UNK func_8013EDFC(s32, void *);
s32 func_801FA30C();
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F32E;

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

void func_8015D7F0(s32 arg0) {
    s32 idx = arg0 & 0xFFFF;
    void *s0 = (void *)((u8 *)&D_8011F2F0 + idx * 0x64);
    void *s2 = M2C_FIELD(s0, void **, 0x60);
    f32 ft;
    u16 state;
    u8 cnt;

    M2C_FIELD(s0, f32 *, 0x28) = M2C_FIELD(s0, f32 *, 0x28) - 10.0f;
    state = *(u16 *)((u8 *)&D_8011F32E + idx * 0x64 - 0x0);
    if (state != 0) {
        if (state == 1) {
            ft = M2C_FIELD(s0, f32 *, 0x30);
            func_8013EC48(idx, (((M2C_FIELD(s2, f32 *, 8) * 12.0f) - ft) * 0.3f) + ft);
            M2C_FIELD(s2, f32 *, 0x70) = M2C_FIELD(s0, f32 *, 0x30) * 15.0f;
            M2C_FIELD(s0, u8 *, 0xC) = M2C_FIELD(s0, u8 *, 0xC) - 4;
            if (M2C_FIELD(s0, u8 *, 0xC) < 5U) {
                func_8013E49C(M2C_FIELD(s2, u16 *, 0x76));
                *(u8 *)((u8 *)&D_8011F2FD + idx * 0x64) = 2;
            }
        }
    } else {
        ft = M2C_FIELD(s0, f32 *, 0x30);
        func_8013EC48(idx, (((M2C_FIELD(s2, f32 *, 8) * 12.0f) - ft) * 0.3f) + ft);
        M2C_FIELD(s2, f32 *, 0x70) = M2C_FIELD(s0, f32 *, 0x30) * 15.0f;
        func_8013EDFC(idx, s2);
        if ((M2C_FIELD(s2, f32 *, 8) * 9.8f) < M2C_FIELD(s0, f32 *, 0x30)) {
            *(u16 *)((u8 *)&D_8011F32E + idx * 0x64) = 1;
        }
    }
    cnt = M2C_FIELD(s2, u8 *, 0x16);
    switch (cnt) {
    case 0:
        func_8013EA18(s2, 0xFF, (func_801FA30C() & 0xF) + 0xB4, 0);
        return;
    case 1:
        func_8013EA18(s2, 0xFF, 0, (func_801FA30C() & 0xF) + 0xB4);
        return;
    case 2:
        func_8013EA18(s2, 0, (func_801FA30C() & 0xF) + 0xB4, 0xFF);
        return;
    case 3:
        func_8013EA18(s2, (func_801FA30C() & 0xF) + 0xB4, 0, 0xFF);
        return;
    case 4:
        func_8013EA18(s2, (func_801FA30C() & 0xF) + 0xB4, 0xFF, 0);
        return;
    case 5:
        func_8013EA18(s2, 0, 0xFF, (func_801FA30C() & 0xF) + 0xB4);
        return;
    case 6:
        func_8013EA18(s2, 0xFF, 0xFF, (func_801FA30C() & 0xF) + 0xB4);
        return;
    case 7:
        func_8013EA18(s2, 0xFF, (func_801FA30C() & 0xF) + 0xB4, 0xFF);
        return;
    case 8:
        func_8013EA18(s2, (func_801FA30C() & 0xF) + 0xB4, 0xFF, 0xFF);
        return;
    case 9: {
        s32 a = (func_801FA30C() & 0xF) + 0xB4;
        func_8013EA18(s2, a, (func_801FA30C() & 0xF) + 0xB4, 0xFF);
        return;
    }
    case 10: {
        s32 a = (func_801FA30C() & 0xF) + 0xB4;
        func_8013EA18(s2, a, 0xFF, (func_801FA30C() & 0xF) + 0xB4);
        return;
    }
    case 11: {
        s32 a = (func_801FA30C() & 0xF) + 0xB4;
        func_8013EA18(s2, 0xFF, a, (func_801FA30C() & 0xF) + 0xB4);
        return;
    }
    case 12: {
        s32 a = (func_801FA30C() & 0xF) + 0xB4;
        s32 b = (func_801FA30C() & 0xF) + 0xB4;
        func_8013EA18(s2, a, b, (func_801FA30C() & 0xF) + 0xB4);
        return;
    }
    default: {
        s32 a = func_801FA30C() & 0xFF;
        s32 b = func_801FA30C() & 0xFF;
        func_8013EA18(s2, a, b, func_801FA30C() & 0xFF);
        return;
    }
    }
}
