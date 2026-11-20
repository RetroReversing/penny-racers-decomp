extern u8 D_800DA260[];
extern u8 D_80168D00[];
extern u8 D_80168D10[];
extern u8 D_80183668[];
extern u8 D_80183678[];
extern u8 D_80183688[];
extern u8 D_80183698[];
extern u8 D_801836A8[];
extern u8 D_801836B8[];
extern u8 D_801836C8[];
extern u8 D_801836D8[];
extern u8 D_801836E8[];
extern u8 D_8018994A[];
extern s8 D_8018994C;
extern u8 D_8018994E;
extern u8 D_80189B35;
void func_8003DE60();
u32 func_801FA30C(void);

void func_801493F0(s32 arg0) {
int __repair_literal;

    u8 *s1;

    s1 = D_800DA260 + arg0 * 0x178;
    D_8018994E = 0;
    if (*(f32 *)(s1 + arg0 * 8 + 0x28) <= 3.0f) {
        D_8018994C = 2;
    }
    if (*(f32 *)(s1 + arg0 * 8 + 0x28) >= 0.4f && *(f32 *)(s1 + (u32)arg0 * 8 + 0x28) <= 0.6f) {
        D_8018994C = 1;
    }
__repair_literal = 8;

    if (*(f32 *)(s1 + arg0 * __repair_literal + 0x28) >= 0.7f) {
        D_8018994C = 0;
    }
    D_8018994A[0] = D_80168D00[func_801FA30C() & 0xF];
    if (*(f32 *)(s1 + 0x1C) <= 0.9f) {
        D_8018994A[0] = 9;
    }
    D_8018994A[1] = D_80168D10[func_801FA30C() & 0xF];
    if (*(f32 *)(s1 + 0x1C) >= 0.9f && D_80189B35 == 0) {
        D_8018994A[1] = 9;
    }
    func_8003DE60(D_80183668, *(f32 *)(s1 + 0x14));
    func_8003DE60(D_80183678, *(f32 *)(s1 + 0x18));
    func_8003DE60(D_80183688, *(f32 *)(s1 + 0x1C));
    func_8003DE60(D_80183698, *(f32 *)(s1 + 0x20));
    func_8003DE60(D_801836A8, s1[0x24]);
    func_8003DE60(D_801836B8, *(f32 *)(s1 + arg0 * 8 + 0x28));
    func_8003DE60(D_801836C8, *(f32 *)(s1 + arg0 * 8 + 0x2C));
    func_8003DE60(D_801836E8, D_8018994A[1]);
    func_8003DE60(D_801836D8, D_8018994A[0]);
}
