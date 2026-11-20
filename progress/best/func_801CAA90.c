/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_801CAA90(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_v1_2;
    
    void *temp_v1_3;

    arg4 &= 0x3FF;
    temp_v1_2 = *arg0;
    (*(s32 *)((char *)(temp_v1_2) + 0)) = 0xBA001402;
    *arg0 = temp_v1_2 + 8;
    (*(s32 *)((char *)(temp_v1_2) + 4)) = 0x300000;
    temp_v1_2 = *arg0;
    (*(s32 *)((char *)(temp_v1_2) + 0)) = 0xF7000000;
    *arg0 = temp_v1_2 + 8;
    (*(s32 *)((char *)(temp_v1_2) + 4)) = 0x10001;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    (*(s32 *)((char *)(temp_v1_3) + 0)) = (s32) (((arg3 & 0x3FF) << 0xE) | ((arg4 * 4) | 0xF6000000));
    (*(s32 *)((char *)(temp_v1_3) + 4)) = (s32) (((arg1 & 0x3FF) << 0xE) | (((u32)arg2 & 0x3FF) * 4));
}
