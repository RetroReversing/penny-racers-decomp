static __inline__ u16 __repair_inline(u16 a) { return a; }
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_800DB1B8[];
extern char D_80220FB0[];
extern char D_80220FB4[];
extern char D_80220FB8[];
extern char D_80220FBC[];
extern char D_80220FC0[];
extern char D_80220FC4[];
extern char D_80220FC8[];
extern char D_80220FCC[];
extern char D_80220FD0[];
extern char D_80220FD4[];
extern char D_80220FD8[];
extern char D_80220FDC[];
extern char D_80220FE0[];
extern char D_80220FE4[];
extern char D_80220FE8[];
extern char D_80220FEC[];
extern char D_80220FF0[];
extern char D_80220FF8[];
extern char D_80221000[];
extern char D_80221008[];
extern char D_80221010[];
extern char D_80221018[];
extern char D_80221020[];
extern char D_80221028[];
extern char D_80221030[];
extern char D_80221038[];
extern char D_80221040[];
extern char D_80221048[];
extern char D_80221050[];
extern char D_80221058[];
extern char D_80221060[];
extern char D_80221068[];

void func_8021F6A0(s16 arg0) {
    u8 __repair_frame[8];
    s16 temp_v0;
    s16 var_a1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0_2;
    s32 var_v1;
    u16 var_v0;

    var_a1 = 0;
    if (arg0 > 0) {
        var_a0 = 0 * 4;
        do {
            temp_a0 = (var_a0 + var_a1) * 8;
            *(D_800DB1B8 + 0x2108 + temp_a0) = arg0;
            temp_a0_2 = (s16)(var_a1 * 3);
            *(D_800DB1B8 + 0x210A + temp_a0) = temp_a0_2;
            *(D_800DB1B8 + 0x210C + temp_a0) = temp_a0_2 + 1;
            *(D_800DB1B8 + 0x210E + temp_a0) = temp_a0_2 + 2;
            switch (arg0) {                         /* irregular */
            default:
                var_v1 = var_a1 * 0x28;{ s32 __repair_value; __repair_value = var_a1 * 2; temp_a0_2 = __repair_value; }
                *(D_800DB1B8 + 0x2110 + var_v1) = *(temp_a0_2 + D_80220FB0);
                *(D_800DB1B8 + 0x2112 + var_v1) = *(u16 *)(D_80220FB4 + temp_a0_2);
                *(D_800DB1B8 + 0x2114 + var_v1) = *(u16 *)(D_80220FB8 + temp_a0_2);
                *(D_800DB1B8 + 0x2116 + var_v1) = *(u16 *)(D_80220FBC + temp_a0_2);
                *(D_800DB1B8 + 0x2128 + var_v1) = *(u16 *)(D_80220FC0 + temp_a0_2);
                *(D_800DB1B8 + 0x212A + var_v1) = *(u16 *)(D_80220FC4 + temp_a0_2);
                *(D_800DB1B8 + 0x212C + var_v1) = *(u16 *)(D_80220FC8 + temp_a0_2);
                var_v0 = __repair_inline(*(u16 *)(D_80220FCC + temp_a0_2));
                break;
            case 2:
                var_v1 = var_a1 * 0x28;
                temp_a0_3 = var_a1 * 2;
                *(D_800DB1B8 + 0x2110 + var_v1) = *(temp_a0_3 + D_80220FD0);
                *(D_800DB1B8 + 0x2112 + var_v1) = *(u16 *)(D_80220FD4 + temp_a0_3);
                *(D_800DB1B8 + 0x2114 + var_v1) = *(u16 *)(D_80220FD8 + temp_a0_3);
                *(D_800DB1B8 + 0x2116 + var_v1) = *(u16 *)(D_80220FDC + temp_a0_3);
                *(D_800DB1B8 + 0x2128 + var_v1) = *(u16 *)(D_80220FE0 + temp_a0_3);
                *(D_800DB1B8 + 0x212A + var_v1) = *(u16 *)(D_80220FE4 + temp_a0_3);
                *(D_800DB1B8 + 0x212C + var_v1) = *(u16 *)(D_80220FE8 + temp_a0_3);
                var_v0 = *(u16 *)(D_80220FEC + temp_a0_3);
                break;
            case 3:
                var_v1 = var_a1 * 0x28;
                temp_a0_4 = var_a1 * 2;
                *(D_800DB1B8 + 0x2110 + var_v1) = *(temp_a0_4 + D_80220FF0);
                *(D_800DB1B8 + 0x2112 + var_v1) = *(u16 *)(D_80220FF8 + temp_a0_4);
                *(D_800DB1B8 + 0x2114 + var_v1) = *(u16 *)(D_80221000 + temp_a0_4);
                *(D_800DB1B8 + 0x2116 + var_v1) = *(u16 *)(D_80221008 + temp_a0_4);
                *(D_800DB1B8 + 0x2128 + var_v1) = *(u16 *)(D_80221010 + temp_a0_4);
                *(D_800DB1B8 + 0x212A + var_v1) = *(u16 *)(D_80221018 + temp_a0_4);
                *(D_800DB1B8 + 0x212C + var_v1) = *(u16 *)(D_80221020 + temp_a0_4);
                var_v0 = *(u16 *)(D_80221028 + temp_a0_4);
                break;
            case 4:
                var_v1 = var_a1 * 0x28;
                temp_a0_5 = var_a1 * 2;
                *(D_800DB1B8 + 0x2112 + var_v1) = *(u16 *)(D_80221038 + temp_a0_5);
                *(D_800DB1B8 + 0x2110 + var_v1) = *(temp_a0_5 + D_80221030);
                *(D_800DB1B8 + 0x2114 + var_v1) = *(u16 *)(D_80221040 + temp_a0_5);
                *(D_800DB1B8 + 0x2116 + var_v1) = *(u16 *)(D_80221048 + temp_a0_5);
                *(D_800DB1B8 + 0x2128 + var_v1) = *(u16 *)(D_80221050 + temp_a0_5);
                *(D_800DB1B8 + 0x212A + var_v1) = *(u16 *)(D_80221058 + temp_a0_5);
                *(D_800DB1B8 + 0x212C + var_v1) = *(u16 *)(D_80221060 + temp_a0_5);
                var_v0 = *(u16 *)(D_80221068 + temp_a0_5);
                break;
            }
            *(D_800DB1B8 + 0x212E + var_v1) = var_v0;
            var_a1 += 1;
            var_a0 = var_a1 * 4;
        } while (var_a1 < arg0);
    }
    var_a1_2 = arg0;
    var_v0_2 = var_a1_2 * 4;
    if (var_a1_2 < 4) {
        do {
            *(D_800DB1B8 + 0x2108 + ((var_v0_2 + var_a1_2) * 8)) = 0;
            var_a1_2 += 1;
            var_v0_2 = var_a1_2 * 4;
        } while (var_a1_2 < 4);
    }
}
