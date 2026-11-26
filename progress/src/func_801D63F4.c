void func_8002D030(s16 arg0);
void n_alSndpStop(void);
extern u8 D_801D7DF0;
extern u8 D_801D7DF1;
extern u16 D_801D7DF2;
extern s16 D_801D7DF4;
extern s32 D_801D7DF8;
extern s32 D_801D7DFC;
extern f32 D_801D7E00;
extern u16 D_801D7E04;
extern s16 D_801D7E06;
extern u8 D_801D7E08;
extern u8 D_801D7E09;
extern u8 D_801D7E16;
extern u16 D_801D7E18;

void func_801D63F4(void)
{
    u16 i;
    s32 off;

    for (i = 0; i < 8; i++) {
        off = i * 0x2C;
        *((u8 *)&D_801D7DF0 + off) = 0;
        *((u8 *)&D_801D7DF1 + off) = 0;
        *((u16 *)((u8 *)&D_801D7DF2 + off)) = 0;
        *((s16 *)((u8 *)&D_801D7DF4 + off)) = -1;
        *((s32 *)((u8 *)&D_801D7DF8 + off)) = 0;
        *((s32 *)((u8 *)&D_801D7DFC + off)) = 0;
        *((f32 *)((u8 *)&D_801D7E00 + off)) = 1.0f;
        *((u16 *)((u8 *)&D_801D7E04 + off)) = 0;
        *((s16 *)((u8 *)&D_801D7E06 + off)) = 0x7FFF;
        *((u8 *)((u8 *)&D_801D7E08 + off)) = 0x40;
        *((u8 *)((u8 *)&D_801D7E16 + off)) = 0xFF;
        *((u8 *)((u8 *)&D_801D7E09 + off)) = 0;
        *((u16 *)((u8 *)&D_801D7E18 + off)) = 0;
    }
    for (i = 0; i < 8; i++) {
        func_8002D030((s16) i);
        n_alSndpStop();
    }
}
