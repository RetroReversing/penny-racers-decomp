typedef struct { u8 pad0[2]; u8 count; } Hdr;
typedef struct { s8 a; s8 b; u8 pad[3]; } Ent;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u16 D_801C7078;
extern Ent D_801C7082[];
extern Hdr *D_801C7AB0;
extern u8 D_801C7AD8[];

u8 func_801C3418(void) {
    u8 i;

    if (D_801C7AD8[D_801C7078] == 0xFF) {
        return D_801C7AB0->count;
    }
    for (i = 0; i < D_801C7AB0->count; i++) {
        if (D_801C7068 == D_801C7082[i].a && D_801C6BB9 == D_801C7082[i].b) {
            break;
        }
    }
    return i;
}
