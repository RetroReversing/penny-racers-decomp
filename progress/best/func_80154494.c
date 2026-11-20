/* machine draft (m2c) for sn-n64-272-0001 -G0 -mips3 -O1 -mgas -meb -mhard-float, tried by autopilot */

extern char D_8011F2FC[];
extern char D_8011F32E[];
extern char D_802DF5A8[];

void func_80154494(void **arg0, s32 arg1) {
    s32 temp_a3;
    void *temp_a1;
    
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;

    temp_a1 = *arg0;
    *arg0 = temp_a1 + 8;
    (*(s32 *)((char *)(temp_a1) + 0)) = 0xFA000000;
    temp_a3 = (arg1 & 0xFFFF) * 0x64;
    (*(s32 *)((char *)(temp_a1) + 4)) = (s32) (*(u16 *)(D_8011F2FC + temp_a3) | ~0xFF);
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    (*(s32 *)((char *)(temp_v1) + 0)) = 0xFD88001F;
    (*(s32 *)((char *)(temp_v1) + 4)) = (s32) &D_802DF5A8;
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    (*(s32 *)((char *)(temp_v1_2) + 0)) = 0xF5880800;
    (*(s32 *)((char *)(temp_v1_2) + 4)) = 0x07018050;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    (*(s32 *)((char *)(temp_v1_3) + 0)) = 0xE6000000;
    (*(s32 *)((char *)(temp_v1_3) + 4)) = 0;
    temp_v1_4 = *arg0;
    (*(s32 *)((char *)(temp_v1_4) + 0)) = 0xF4000000;
    *arg0 = temp_v1_4 + 8;
    (*(s32 *)((char *)(temp_v1_4) + 4)) = 0x0707C0FC;
    temp_v1_5 = *arg0;
    *arg0 = temp_v1_5 + 8;
    (*(s32 *)((char *)(temp_v1_5) + 0)) = 0xE7000000;
    (*(s32 *)((char *)(temp_v1_5) + 4)) = 0;
    temp_v1_6 = *arg0;
    *arg0 = temp_v1_6 + 8;
    (*(s32 *)((char *)(temp_v1_6) + 0)) = 0xF5880800;
    (*(s32 *)((char *)(temp_v1_6) + 4)) = 0x18050;
    temp_v1_7 = *arg0;
    *arg0 = temp_v1_7 + 8;
    (*(s32 *)((char *)(temp_v1_7) + 0)) = 0xF2000000;
    (*(s32 *)((char *)(temp_v1_7) + 4)) = 0x7C0FC;
    temp_a1 = *arg0;
    *arg0 = temp_a1 + 8;
    (*(s32 *)((char *)(temp_a1) + 0)) = (s32) (((0xFF - *(u16 *)(D_8011F32E + temp_a3)) & 0xFFF) | 0xF2000000);
    (*(s32 *)((char *)(temp_a1) + 4)) = 0x7C0FC;
}
