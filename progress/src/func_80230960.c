typedef struct { f32 f0; f32 f4; f32 f8; f32 fC; } FRow;
typedef struct { u8 pad[0xC]; } Rec0C;
typedef struct { s32 unk0; void *unk4; } Sub;
typedef struct { u8 pad0[0x18]; f32 unk18; f32 unk1C; f32 unk20; f32 unk24; u8 pad28[0x28]; Sub *unk50; u8 pad54[0x10]; } Obj;
typedef struct { u8 pad0[2]; u16 unk2; u8 pad4[0x22C]; u16 unk230; u8 pad232[0x302]; u16 unk534; u8 pad536[2]; u16 unk538; u16 unk53A; } Car;
extern u16 D_80232880[];
extern u16 D_802328A0[];
extern u16 D_802328CC[];
extern Obj D_8011F4E4[];
extern Obj D_8011F548[];
extern Obj D_8011F5AC[];
extern Rec0C D_80237740[];
extern u8 D_802387D8[][16];
extern FRow D_80237FC8[];

void func_80230960(Car *arg0)
{
    u16 id;
    Obj *obj;
    s32 t;

    id = D_80232880[arg0->unk53A];
    obj = &D_8011F4E4[arg0->unk2];
    if (id != 0) {
        obj->unk50->unk4 = &D_80237740[id];
        t = D_802387D8[id][arg0->unk230];
        obj->unk18 = D_80237FC8[t].f0;
        obj->unk1C = D_80237FC8[t].f4;
        obj->unk20 = D_80237FC8[t].f8;
        obj->unk24 = D_80237FC8[t].fC;
    } else {
        obj->unk50->unk4 = 0;
    }
    id = D_802328A0[arg0->unk538];
    obj = &D_8011F548[arg0->unk2];
    if (id != 0) {
        obj->unk50->unk4 = &D_80237740[id];
        t = D_802387D8[id][arg0->unk230];
        obj->unk18 = D_80237FC8[t].f0;
        obj->unk1C = D_80237FC8[t].f4;
        obj->unk20 = D_80237FC8[t].f8;
        obj->unk24 = D_80237FC8[t].fC;
    } else {
        obj->unk50->unk4 = 0;
    }
    id = D_802328CC[arg0->unk534];
    obj = &D_8011F5AC[arg0->unk2];
    if (id != 0) {
        obj->unk50->unk4 = &D_80237740[id];
        t = D_802387D8[id][arg0->unk230];
        obj->unk18 = D_80237FC8[t].f0;
        obj->unk1C = D_80237FC8[t].f4;
        obj->unk20 = D_80237FC8[t].f8;
        obj->unk24 = D_80237FC8[t].fC;
    } else {
        obj->unk50->unk4 = 0;
    }
}
