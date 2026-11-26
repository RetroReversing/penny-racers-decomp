typedef struct {
    u8 unk0;
    char pad1[0xC];
    u8 unkD;
    char padE[0x3E - 0xE];
    u16 unk3E;
    u16 unk40;
    char pad42[0x64 - 0x42];
} Obj3F638;
typedef struct {
    char pad0[0x53A];
    u16 unk53A;
    char pad53C[0x55E - 0x53C];
    s16 unk55E;
    u16 unk560;
    char pad562[0x879 - 0x562];
    u8 unk879;
    char pad87A[0x8F0 - 0x87A];
} Car3F638;
extern Obj3F638 D_8011F2F0[];
extern Car3F638 D_8022A770[];
extern u8 D_80183408[];
extern u8 D_801833F0[];
void func_80230960(void *);
void func_8003DE60(void *, s32);
void func_8013F638(u16 arg0)
{
    Obj3F638 *obj;
    Car3F638 *car;
    s32 limit;

    obj = &D_8011F2F0[arg0];
    car = &D_8022A770[obj->unk0];
    limit = 0;
    switch (obj->unk3E) {
    case 0:
        switch (car->unk53A) {
        case 3:
        case 4:
        case 5:
        case 7:
        case 13:
        case 14:
        case 15:
            if (car->unk560 & 7) {
                return;
            }
            obj->unk3E = 1;
            break;
        case 2:
            if (car->unk560 & 0x20) {
                return;
            }
            obj->unk3E = 1;
            break;
        case 11:
            if (car->unk560 & 0xF) {
                return;
            }
            obj->unk3E = 1;
            break;
        case 1:
            if (car->unk560 & 0x10) {
                return;
            }
            obj->unk3E = 1;
            break;
        case 6:
        case 8:
        case 9:
        case 10:
        case 12:
            obj->unk3E = 1;
            break;
        }
    case 1:
        switch (car->unk53A) {
        case 3:
        case 4:
        case 5:
        case 7:
        case 10:
        case 12:
        case 14:
            limit = 5;
            break;
        case 8:
            limit = 6;
            break;
        case 1:
        case 2:
        case 6:
        case 9:
        case 11:
        case 13:
            limit = 3;
            break;
        case 15:
            limit = 0x1E;
            break;
        }
        if (car->unk55E >= 0) {
            car->unk55E += obj->unk40;
            if (limit < car->unk55E && car->unk879 == 0) {
                car->unk55E = limit;
            }
            if (car->unk53A == 8 || car->unk53A == 9 || car->unk53A == 10) {
                u16 low = car->unk560 & 7;

                if (6 - low < car->unk55E) {
                    car->unk55E = 6 - low;
                }
            }
        }
        if (car->unk55E != 0) {
            func_80230960(car);
        }
        D_8011F2F0[arg0].unkD = 2;
        obj->unk3E = 2;
        if (car->unk53A == 11) {
            switch (car->unk879) {
            case 0:
                func_8003DE60(D_801833F0, obj->unk40);
                break;
            case 1:
                func_8003DE60(D_80183408, obj->unk40);
                break;
            }
        }
        break;
    case 2:
        break;
    }
}
