typedef struct {
    u8 unk0[0xD];
    u8 unkD;
    u8 unkE[6];
    u16 child;
    u8 unk16[2];
    f32 unk18;
    f32 unk1C;
    u8 unk20[0x1E];
    u16 state;
    u16 next;
    u8 unk42[0xE];
    u8 **unk50;
    u8 unk54[0xC];
    u8 *unk60;
} Obj;
typedef struct { u8 unk0[4]; u8 *unk4; } Tx;
typedef struct { u8 unk0[0x50]; Tx *unk50; } ObjB;
typedef struct { u8 id; u8 unk1; u8 pos; u8 unk3; u8 colour; u8 unk5; u16 v6; } Pl;
typedef struct { u16 b15 : 1; u16 b14 : 1; u16 b13 : 1; u16 b12 : 1; u16 b11 : 1; u16 b10 : 1; u16 rest : 10; } Bits;
typedef union { u16 all; Bits f; } Flags;
typedef struct {
    u16 saved;
    u8 car;
    u8 unk3;
    u8 unk4;
    s8 unk5;
    u8 unk6[0x18];
    Pl pl[2];
    Flags flags;
} Sel;
typedef struct { u8 mode; u8 unk1; u8 flags; } Mode;
typedef struct { u16 unk0; u8 unk2[2]; u8 unk4[2]; } Pick;
typedef struct { u16 unk0; u16 unk2; u8 unk4; } Win;
typedef struct { u16 v; } Id;
typedef struct { Id ids[8]; u8 timer; u8 unk11; u8 anim; u8 unk13; Win win; } Menu;
typedef struct { u16 unk0; u8 unk2[0x168]; u8 unk16A[0xE]; } Car;
typedef struct { u8 b[12]; } Pal;
typedef struct { u8 unk0[2]; u8 count; u8 cars[5]; } Cars;

extern Obj D_8011F2F0[];
extern Menu D_80190C98;
extern Sel D_80189C98;
extern Mode D_80189B34;
extern Pick D_80189948;
extern s16 D_8021E1A6;
extern u8 D_8021E1A7;
extern u16 D_8018A44A[];
extern u8 D_8006FB38[];
extern u16 D_8018BC3C;
extern u8 D_8018BC35[];
extern Cars D_8018A274;
extern Car D_800DA260[];
extern u8 D_8018FC50[];
extern Pal D_80237DC0[];
extern u8 D_8021F120[];
extern u16 D_8006F9E8;
extern u8 D_8021B01A;
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern s32 D_80168BB0;

extern void func_80211C7C();
extern void func_8002C410();
extern void func_8014843C();
extern void func_80148DBC();
extern void func_8014BCD8();
extern void func_8014981C();
extern void func_80203DF8();
extern void func_801D65BC();
extern s32 func_80149778();
extern void func_801493F0();
extern s32 func_80149110();
extern u16 func_80149B38(s32, s32, f32, f32);
extern void func_8012AD20();
extern s32 func_8014AAE8();
extern s32 func_8014AB2C();
extern s32 func_80148260();
extern void func_80148B44();
extern u16 func_80149220();
extern s32 func_8014BAC0();
extern s32 func_8014A870();
extern void func_8014B854();
extern void func_8014BFFC();
extern void func_8014B410();
extern void func_80028100();
extern void func_800DE38C();
extern void func_800DE2E0();
extern void func_80231C5C();
extern void func_801CF468();
extern void func_8014674C();
extern void func_8014ABD8();
extern void func_8020FED8();
extern void func_8014AFD8();
extern void func_8014B048();
extern void func_8014ACD0();
extern void func_8014ADA4();
extern void func_80146970();
extern void func_80146A5C();
extern void func_80146EC4();
extern void func_801470F8();
extern void func_8014730C();
extern void func_801478F0();
extern s16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *,
                         f32, f32, f32, f32, f32, f32, f32, f32, f32);

#define SPAWN0(a, b, f, g) func_800DE41C(0, 0, 3, 0, a, b, 0, f, g, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)

void func_80144808(u16 arg0)
{
    Obj *obj = &D_8011F2F0[arg0];
    u16 *id1 = &D_80190C98.ids[3].v;
    u16 *id2 = &D_80190C98.ids[4].v;
    u16 *id3 = &D_80190C98.ids[7].v;
    s32 i;
    f32 f;
    s32 b;
    void (*fn)();

    func_80211C7C(0x14);
    switch (obj->state) {
    case 0:
        if (!(D_80189B34.flags & 0x80) && (D_8018A44A[D_8021E1A6] & 0x1FF) == 0x1FF) {
            obj->state = 0x210;
            break;
        }
        func_8002C410(D_8006FB38);
        D_80189C98.flags.all |= 0x100;
        D_80189C98.car = 0;
        func_8014843C();
        func_80148DBC(D_8021E1A7);
        func_8014BCD8();
        if ((D_80189B34.mode == 1 || D_80189B34.mode == 2) && (D_80189B34.flags & 0x80)) {
            D_80189C98.flags.all |= 0x200;
            obj->next = 0x20;
        }
        func_8014981C(D_8018BC35[0]);
        func_80203DF8(1, 0x32, 0, 0, 0);
        obj->state = 1;
        break;
    case 1:
        if (*D_8011F2F0[D_8018BC3C].unk60 == 0) {
            func_801D65BC(6);
            obj->state = 0x100;
            if (D_80189B34.mode != 0 && (D_80189B34.flags & 0x80)) {
                obj->state = 0x20;
            }
        }
        break;
    case 0x20:
    case 0x21:
        D_80189C98.pl[1].id = D_8018BC35[D_80189C98.unk3];
        D_80189C98.flags.f.b11 = func_80149778(D_80189C98.pl[1].id);
        if (D_80189C98.flags.all & 0x4000) {
            D_8011F2F0[*id1].unkD = 2;
            D_80189C98.flags.all &= 0xBFFF;
        }
        if (!(D_80189C98.flags.all & 0x800)) {
            func_801493F0(D_80189C98.pl[1].id);
        }
        func_8014981C(D_80189C98.pl[1].id);
        D_80189C98.unk4 = func_80149110();
        *id3 = SPAWN0(0x4A, 0, func_8014674C, 0);
        f = 0.9f;
        for (i = 0; i < D_8018A274.count; i++) {
            D_80190C98.ids[i].v = func_80149B38(i, D_8018A274.cars[i] & 0xF, 1.0f, f);
            f -= 2.05;
        }
        if (D_80189C98.flags.all & 0x2000) {
            i = D_800DA260[D_80189C98.pl[1].id].unk0;
            b = i & 0xFF;
            *id2 = func_800DE41C(0, b, 1, 0, 0x54, 0xFF, D_8018FC50, func_8014ABD8, func_8020FED8,
                                 -2.259998f, -3.009998f, 0.0f, 0.0f, 360.0f, 0.0f, 0.04f, 0.04f, 0.04f);
            ((ObjB *) &D_8011F2F0[D_8011F2F0[*id2].child])->unk50->unk4 = D_80237DC0[i].b;
            func_8012AD20(D_8011F2F0[*id2].child, D_8021F120, b, D_800DA260[D_80189C98.pl[1].id].unk16A[i]);
            D_80189C98.flags.all &= 0xDFFF;
        }
        D_8011F2F0[*id2].unk18 = -2.259998f;
        SPAWN0(0x5E, 0xFF, func_8014AFD8, func_8014B048);
        if (D_80189C98.flags.all & 0x1000) {
            D_80190C98.ids[5].v = SPAWN0(0x59, 0xFF, func_8014ACD0, func_8014ADA4);
            D_80189C98.flags.all &= 0xEFFF;
        }
        D_80189B34.flags |= 0x10;
        obj->state = 0x22;
        obj->next = 0x20;
    case 0x22:
        if (!(D_80189B34.flags & 0x10)) {
            D_8011F2F0[*id3].unkD = 2;
            for (i = 0; i < D_8018A274.count; i++) {
                D_8011F2F0[D_80190C98.ids[i].v].unkD = 2;
            }
            obj->state = 0x23;
        }
        break;
    case 0x30:
        D_80189C98.pl[0].id = D_8018A274.cars[D_80189C98.car] & 0xF;
        D_80189C98.pl[0].colour = func_8014AAE8(D_80189C98.pl[0].id);
        D_80189C98.pl[1].colour = func_8014AAE8(D_80189C98.pl[1].id);
        D_80189C98.flags.f.b10 = func_8014AB2C(D_80189C98.pl[0].id, D_80189C98.pl[0].colour);
        D_80189C98.pl[0].pos = func_80148260(D_80189C98.pl[0].id, 0);
        D_80189C98.pl[1].pos = func_80148260(D_80189C98.pl[1].id, 1);
        D_80189C98.pl[0].unk1 = D_80189C98.pl[0].pos - 4;
        *id1 = func_80149B38(3, D_8018A274.cars[D_80189C98.car] & 0xF, 1.5f, 2.3f);
        D_80189C98.flags.all |= 0x4000;
    case 0x31:
        D_8011F2F0[*id2].unk18 = -2.259998f;
        D_80189B34.flags |= 0x10;
        func_80148B44(0, D_80189C98.pl[0].colour);
        D_80190C98.win.unk0 = 0x40;
        D_80190C98.win.unk2 = 0x21;
        D_80190C98.win.unk4 = 0;
        fn = func_80146970;
        if (!(D_80189C98.flags.all & 0x800)) {
            fn = func_80146A5C;
            D_80189948.unk0 = func_80149220(D_80189948.unk2[0], D_80189948.unk4[0], D_80189C98.pl[0].pos, 0);
        }
        *id3 = SPAWN0(0x4A, 0, fn, 0);
        obj->state = 0x32;
        obj->next = 0x30;
    case 0x32:
        if (!(D_80189B34.flags & 0x10)) {
            D_8011F2F0[*id3].unkD = 2;
            obj->state = 0x33;
        }
        break;
    case 0x40:
        D_8011F2F0[*id2].unk18 = -10.0f;
        i = 3;
        D_80189C98.flags.f.b10 = func_8014AB2C(D_80189C98.pl[1].id, D_80189C98.pl[1].colour);
        D_80189B34.flags &= 0xDF;
        if (D_80189C98.pl[0].v6 == 0x2FFF || D_80189B34.unk1 == 0 || D_80189C98.pl[1].unk3 == 0 ||
            (D_80189C98.flags.all & 0x400)) {
            D_80189B34.flags |= 0x20;
            i = 4;
        }
        D_80189C98.pl[1].unk1 = (D_80189C98.pl[1].pos = func_80148260(D_80189C98.pl[1].id, 1)) - i;
    case 0x41:
        D_80189B34.flags |= 0x10;
        func_80148B44(1, D_80189C98.pl[1].colour);
        D_80190C98.win.unk0 = 0x44;
        D_80190C98.win.unk2 = 0x31;
        D_80190C98.win.unk4 = 1;
        fn = func_80146970;
        if (!(D_80189C98.flags.all & 0x800)) {
            fn = func_80146A5C;
            D_80189948.unk0 = func_80149220(D_80189948.unk2[1], D_80189948.unk4[1], D_80189C98.pl[1].pos, 1);
        }
        *id3 = SPAWN0(0x4A, 0, fn, 0);
        obj->state = 0x42;
        obj->next = 0x40;
    case 0x42:
        if (!(D_80189B34.flags & 0x10)) {
            D_8011F2F0[*id3].unkD = 2;
            obj->state = 0x43;
        }
        break;
    case 0x43:
        if (D_8011F2F0[*id3].unkD == 0) {
            D_80190C98.timer = 1;
            if (!(D_80189C98.flags.all & 0x800)) {
                D_80190C98.timer = 0x3C;
            }
            obj->next = 0x50;
            obj->state = D_80189C98.saved;
        }
        break;
    case 0x44:
        if (func_8014BAC0() & 0x10) {
            D_80190C98.timer = 1;
        }
        D_80190C98.timer--;
        if (D_80190C98.timer == 0) {
            obj->state = 0x46;
        }
        break;
    case 0x46:
        b = 0x10;
        if (D_80189C98.flags.all & 0x800) {
            b = func_8014A870(0x14, 3, D_80189C98.pl[1].id);
        }
        if (b & 0x10) {
            b = 0;
            func_8014B854(0x3D);
            obj->state = 0x50;
        }
        if (b & 0x20) {
            func_8014B854(0x3A);
            obj->state = 0x41;
        }
        break;
    case 0x50:
        D_80189B34.flags |= 0x10;
        D_80189C98.flags.all &= 0x7FFF;
        *id3 = SPAWN0(0x5E, 0, func_80146EC4, func_801470F8);
        obj->state = 0x51;
    case 0x51:
        if (!(D_80189B34.flags & 0x10)) {
            D_8011F2F0[*id3].unkD = 2;
            obj->state = 0x52;
        }
        break;
    case 0x23:
        if (D_8011F2F0[*id3].unkD == 0) {
            obj->state = D_80189C98.saved;
        }
        break;
    case 0x33:
        if (D_8011F2F0[*id3].unkD == 0) {
            obj->state = D_80189C98.saved;
        }
        break;
    case 0x52:
        if (D_8011F2F0[*id3].unkD == 0) {
            obj->state = D_80189C98.saved;
        }
        break;
    case 0x100:
        if (D_80189C98.flags.all & 0x4000) {
            D_8011F2F0[*id1].unkD = 2;
        }
        D_80189C98.flags.all &= 0xFDFF;
        obj->next = 0x100;
        D_80189C98.unk5 = 0;
        D_80189B34.flags |= 0x10;
        func_800DE41C(0, 0, 3, 0, 0x5E, 0, 0, func_8014730C, func_801478F0,
                      0.0f, -20.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        obj->state = 0x105;
        break;
    case 0x105:
        if (!(D_80189B34.flags & 0x10)) {
            func_8014BFFC();
            func_8014B410();
            obj->state = 0x210;
            if ((D_8018A44A[D_8021E1A6] & 0x1FF) != 0x1FF) {
                obj->state = 0x200;
            }
        }
        break;
    case 0x200:
        func_80028100(0, 0x1E);
        func_80203DF8(2, 0x28, 0, 0, 0);
        obj->state = 0x201;
        break;
    case 0x201:
        if (*D_8011F2F0[D_8018BC3C].unk60 == 0) {
            func_8002C410(D_8006FB38);
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8006F9E8 = 8;
            D_8021B01A = 0;
            D_8021AFDC = 0x18;
            D_8021AFE0 = 0xC;
            D_80168BB0 = 0xC;
            if (D_80189C98.unk5) {
                D_80168BB0 = 0x1C;
            }
        }
        break;
    case 0x210:
        func_80028100(0, 0x32);
        func_80203DF8(2, 0x3C, 0, 0, 0);
        obj->state = 0x211;
        break;
    case 0x211:
        if (*D_8011F2F0[D_8018BC3C].unk60 == 0) {
            func_8002C410(D_8006FB38);
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021B01A = 0;
            D_8021AFDC = 0x18;
            D_8006F9E8 = 8;
            D_80168BB0 = 0x2E;
        }
        break;
    }

    switch (D_80190C98.anim) {
    case 0:
        obj->unk1C = 88.0f;
        obj->unk18 = -2.0f;
        D_80190C98.anim = 1;
    case 1:
        obj->unk1C += obj->unk18;
        obj->unk18 += 0.3f;
        if (88.0f < obj->unk1C) {
            D_80190C98.anim = 0;
        }
        break;
    }
}
