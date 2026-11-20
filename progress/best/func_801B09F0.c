extern signed char D_80237472;
extern signed char D_80237473;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern void *volatile D_801C7AB0;
extern s8 D_802352F4;
extern char D_80237470[];
extern char D_80237471[];

void func_801B09F0(void) {
    int temp_v0;
    s32 *__base_D_80237470;
    s32 temp_v1_3;
    register s32 temp_v1;
    u32 temp_v1_2;
    signed char *__base_D_80237473;
    register s32 var_a2;
    u8 var_a1;

    var_a2 = 0;
    var_a1 = 0;
    if ((*(u8 *)((char *)(D_801C7AB0) + 2)) != 0) {
        do {
            if ((*(u8 *)((char *)(D_801C7AB0) + 1)) == 5) {
                temp_v1 = var_a1 & 0xFF;
                if (temp_v1 == ((*(u8 *)((char *)(D_801C7AB0) + 2)) - 2)) {
                    temp_v1_2 = var_a2 & 0xFFFF;
                    __base_D_80237470 = D_80237470;
                    *(D_80237471 + temp_v1_2) = 0;
                    *(__base_D_80237470 + temp_v1_2) = (*(u8 *)((char *)(D_801C7AB0) + 2)) - 1;
                    var_a1++;
                } else {
                    temp_v0 = var_a2 & 0xFFFF;
                    if (temp_v1 == ((*(u8 *)((char *)(D_801C7AB0) + 2)) - 1)) {
                        *(__base_D_80237470 + (s32)temp_v0) = 0;
                        *(D_80237471 + temp_v0) = 1;
                        var_a1 += 1;
                    } else {
                        *(__base_D_80237470 + temp_v0) = var_a1 + 1;
                        *(D_80237471 + temp_v0) = var_a1 + 2;
                        var_a1 += 1;
                    }
                }
            } else {
                if (!(var_a1 & 0xFF)) {
                    __base_D_80237473 = &D_80237473;
                    D_80237472 = 0;
                    (*__base_D_80237473) = 1;
                } else {
                    temp_v1_3 = var_a2 & 0xFFFF;
                    if ((var_a1 & 0xFF) == ((*(u8 *)((char *)(D_801C7AB0) + 2)) - 1)) {
                        (*(s8 *)((char *)(__base_D_80237470) + 0)) = 0;
                        (*(s8 *)((char *)(__base_D_80237470) + 1)) = 0;
                    } else {
                        *(u8 *)(D_80237472 + temp_v1_3) = var_a1;
                        *(s8 *)((*__base_D_80237473) + temp_v1_3) = var_a1 + 1;
                    }
                }
                ++var_a1;
            }
            var_a2 += 2;
        } while ((u32) (var_a1 & 0xFF) < (u8) (*(u8 *)((char *)(D_801C7AB0) + 2)));
    }
    D_802352F4 = (*(u8 *)((char *)(D_801C7AB0) + 2)) - 1;
}
