/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_801CAB1C(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, u32 arg7) {
    unsigned temp_t0;
    void *temp_v1;
    
    void *temp_v1_3;
    void *temp_v1_4;

    temp_v1 = *arg0;
    (*(s32 *)((char *)(temp_v1) + 0)) = 0xBA001402;
    (*(s32 *)((char *)(temp_v1) + 4)) = 0x300000;
    *arg0 = temp_v1 + 8;
    temp_v1 = *arg0;
    (*(s32 *)((char *)(temp_v1) + 0)) = 0xF7000000;
    *arg0 = temp_v1 + 8;
    temp_t0 = ((arg5 << 8) & 0xF800) | ((arg6 * 8) & 0x7C0) | ((arg7 >> 2) & 0x3E);
    (*(s32 *)((char *)(temp_v1) + 4)) = (s32) (((temp_t0 | 1) << 0x10) | 1 | temp_t0);
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    (*(s32 *)((char *)(temp_v1_3) + 0)) = (s32) (((arg3 & 0x3FF) << 0xE) | (((arg4 & 0x3FF) * 4) | 0xF6000000));
    temp_v1_4 = *arg0;
    (*(s32 *)((char *)(temp_v1_3) + 4)) = (s32) (((arg1 & 0x3FF) << 0xE) | ((arg2 & 0x3FF) * 4));
    *arg0 = temp_v1_4 + 8;
    (*(s32 *)((char *)(temp_v1_4) + 0)) = 0xE7000000;
    (*(s32 *)((char *)(temp_v1_4) + 4)) = 0;
}
