typedef struct {
    u8 pad0[0xA3E];
    u16 unkA3E[8];
    u8 padA4E[0xBA8 - 0xA4E];
    u8 unkBA8[1];
} S800DA26A;
extern S800DA26A D_800DA26A;
extern u8 D_801E87E0;
extern u8 D_801E87E1;
extern s8 D_801E87E3;
extern u8 D_801E94EC[];
extern u8 D_801E9500[];
extern s32 D_801E973C;
extern u8 D_801E9D80[];
extern u8 D_801E9D81[];
extern u8 D_801F18E0[];
extern u8 D_801F18E1[];
extern u8 D_801F18E4;
extern u8 D_801F18E5;
extern u8 D_801F18E6;
extern u8 D_801F18E7;
extern u8 D_801F18E8;
extern u8 D_801F18E9;
extern u8 D_801F18EA;
extern u8 D_801F18EB;
extern u8 D_801F18EC;
extern u8 D_801F18ED;
extern u8 D_801F18EE;
extern u8 D_801F18EF;
void debugPrintf();

void func_801E1C38(void)
{
    u16 dst = 0;
    u16 src;
    u16 count;
    u8 a;
    u8 b;
    u32 i;

    debugPrintf(D_801E94EC, D_801E973C);
    D_801E87E3 = 1;
    D_801E87E1 = D_801F18E4;
    D_801E87E0 = D_801F18E4;
    D_800DA26A.unkA3E[0] = D_801F18E5;
    D_800DA26A.unkA3E[1] = D_801F18E6;
    D_800DA26A.unkA3E[2] = D_801F18E7;
    D_800DA26A.unkA3E[3] = D_801F18E8;
    D_800DA26A.unkA3E[4] = D_801F18E9;
    D_800DA26A.unkA3E[5] = D_801F18EA;
    D_800DA26A.unkA3E[6] = D_801F18EB;
    D_800DA26A.unkA3E[7] = D_801F18EC;
    D_800DA26A.unkBA8[D_800DA26A.unkA3E[0]] = D_801F18ED;
    a = D_801F18EE;
    b = D_801F18EF;
    src = 0xE;
    while (a != 0xFF || b != 0xFF) {
        if (a == 0xEE && b == 0xEE) {
            src += 2;
            a = D_801F18E0[src];
            b = D_801F18E1[src];
            src += 2;
            count = *(u16 *)&D_801F18E0[src];
            for (i = 0; i < count; i++) {
                D_801E9D80[dst + i * 2] = a;
                D_801E9D81[dst + i * 2] = b;
            }
            dst += count * 2;
        } else {
            D_801E9D80[dst] = a;
            D_801E9D81[dst] = b;
            dst += 2;
        }
        src += 2;
        a = D_801F18E0[src];
        b = D_801F18E1[src];
    }
    D_801E9D80[dst] = a;
    D_801E9D81[dst] = b;
    dst += 2;
    src += 2;
    debugPrintf(D_801E9500, src, dst);
    i = 0;
    while (1) {
        D_801F18E0[i] = D_801E9D80[i];
        D_801F18E1[i] = D_801E9D81[i];
        if (D_801E9D80[i] == 0xFF && D_801E9D81[i] == 0xFF) {
            break;
        }
        i += 2;
    }
}
