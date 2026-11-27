typedef struct { s16 v; u8 pad[10]; } E;
typedef struct { u8 pad[0x40]; u8 *tab; s32 n; } T;
typedef struct { u8 pad[0xC]; T *t; } G;
typedef struct { u8 pad[0x1C]; void *o; s16 a; s16 p; f32 f; s32 z; s16 vol; u8 b; u8 c; } S;
extern G *D_80046DF4;
extern E soundDefs[];
extern u8 D_8021F029[];

s32 func_8002C508(u8 *arg0, s32 arg1)
{
    T *t = D_80046DF4->t;
    u8 *tab = t->tab;
    s16 i;

    for (i = 0; i < t->n; i++)
    {
        S *s = (S *)(i * 0x30 + (s32)tab);
        if (s->o == 0)
        {
            s32 scaled;
            scaled = (s32)((((f32)soundDefs[arg1].v) * ((f32)D_8021F029[0])) * 0.047619f);
            s->o = arg0;
            s->a = 5;
            s->z = 0;
            s->f = 0.5f;
            s->b = 0x40;
            s->c = 0;
            s->vol = (scaled * arg0[0xD]) / 127;
            return i;
        }
    }
    return -1;
}
