typedef struct { u16 flag; u8 pad[98]; } Flag100;
typedef struct { s32 x; s32 y; f32 z; s32 a; s32 b; s32 c; u8 pad[12]; } State36;
extern Flag100 playerSlots[];
extern State36 D_80221080[];
void func_801FC2F8(u32 arg0)
{
    s32 i;
    s32 unused;

    if (playerSlots[arg0 & 0xFFFF].flag == 0) {
        i = 2;
        unused = arg0 ? 1 : 2;
        D_80221080[i].a = 0;
        D_80221080[i].b = 0;
        D_80221080[i].c = 0;
        D_80221080[i].x = 0;
        D_80221080[i].y = 0;
        D_80221080[i].z = 1000.0f;
        playerSlots[arg0 & 0xFFFF].flag = 1;
    }
}
