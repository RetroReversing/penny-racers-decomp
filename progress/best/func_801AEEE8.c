extern short D_800DD2C0;
/* machine draft (m2c) for gcc-2.8.1-pm -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */

extern char D_800DB1B8[];

void func_801AEEE8(void) {
    register void *temp_v0;
    s32 var_a0;

    temp_v0 = D_800DB1B8 + 0x2108;
    D_800DD2C0 = 1;
    (*(s16 *)((char *)(temp_v0) + 2)) = 0;
    (*(s16 *)((char *)(temp_v0) + 4)) = 1;
    (*(s16 *)((char *)(temp_v0) + 0xC)) = 0xF0;
    (*(s16 *)((char *)(temp_v0) + 6)) = 2;
    (*(s16 *)((char *)(temp_v0) + 0xE)) = 0xF0;
    (*(s16 *)((char *)(temp_v0) + 8)) = 0;
    (*(s16 *)((char *)(temp_v0) + 0xA)) = 0;
    (*(s16 *)((char *)(temp_v0) + 0x20)) = 0;
    (*(s16 *)((char *)(temp_v0) + 0x22)) = 0;
    (*(s16 *)((char *)(temp_v0) + 0x24)) = 0xF0;
    (*(s16 *)((char *)(temp_v0) + 0x26)) = 0xF0;
    (*(s16 *)((char *)(temp_v0) + 0x28)) = 1;
    (*(s16 *)((char *)(temp_v0) + 0x2A)) = 3;
    (*(s16 *)((char *)(temp_v0) + 0x2C)) = 4;
    (*(s16 *)((char *)(temp_v0) + 0x2E)) = 5;
    (*(s16 *)((char *)(temp_v0) + 0x36)) = 0x5A;
    (*(s16 *)((char *)(temp_v0) + 0x34)) = 0x78;
    (*(s16 *)((char *)(temp_v0) + 0x32)) = 0x4B;
    (*(s16 *)((char *)(temp_v0) + 0x30)) = 0x3C;
    (*(s16 *)((char *)(temp_v0) + 0x48)) = 0x3C;
    (*(s16 *)((char *)(temp_v0) + 0x4A)) = 0x4B;
    (*(s16 *)((char *)(temp_v0) + 0x4C)) = 0xB4;
    (*(s16 *)((char *)(temp_v0) + 0x4E)) = 0xA5;
    var_a0 = 2;
    __repair_rows: {
        *(u16 *)(D_800DB1B8 + 0x2108 + ((var_a0 & 0xFF) * 0x28)) = 0;
        var_a0 += 1;
    }
if ((u32) (var_a0 & 0xFF) < 4U) goto __repair_rows;
}
