extern s32 D_8006FB38;
extern s32 D_8006FCB4;
extern s16 D_8006FCB8;
extern s16 D_8006FCBA;
s16 func_8002C1D0(void *);

void func_80028100(s32 arg0, s32 arg1) {
char *__repair_addr;

    s16 temp_v0;

    temp_v0 = func_8002C1D0((void *)((s8 *)&D_8006FB38 + arg0 * 0x184));
    if (arg1 != 0) {
        *(s16 *)((s8 *)&D_8006FCB8 + arg0 * 0x184) = arg1;
        *(s16 *)((s8 *)&D_8006FCBA + arg0 * 0x184) = (u32)temp_v0 / (u32)arg1;
    } else {
        *(s16 *)((s8 *)&D_8006FCBA + arg0 * 0x184) = temp_v0;
        *(s16 *)((s8 *)&D_8006FCB8 + arg0 * 0x184) = 0;
    }
__repair_addr = (char *)((s8 *)&D_8006FCB4 + arg0 * 0x184);

    *(s32 *)(__repair_addr) |= 1;
}
