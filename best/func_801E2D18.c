extern u8 D_801C5E9C[];
extern u8 D_801C7080[];
extern u8 D_801F18E4[];
extern u8 D_801F18F8[];
extern u8 D_801F18F9[];
extern u8 D_801F18FA[];
extern u8 D_801F18FB[];
extern u8 D_801F18FC[];

void func_801E2D18(void) {
    u8 *src0 = D_801F18F8;
    u8 *src1 = D_801F18F9;
    u8 *src2 = D_801F18FA;
    u8 *src3 = D_801F18FB;
    u8 *src4 = D_801F18FC;
    u32 i;
    s32 off;

    D_801C5E9C[0] = D_801F18E4[0];
    D_801C5E9C[1] = D_801F18E4[1];
    D_801C5E9C[2] = D_801F18E4[2];
    D_801C5E9C[3] = D_801F18E4[3];
    for (i = 0; i < 200; i++) {
        off = i * 5;
        D_801C7080[off + 0] = src0[off];
        D_801C7080[off + 1] = src1[off];
        D_801C7080[off + 2] = src2[off];
        D_801C7080[off + 3] = src3[off];
        D_801C7080[off + 4] = src4[off];
    }
}
