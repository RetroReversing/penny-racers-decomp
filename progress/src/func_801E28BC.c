typedef struct { u8 pad0[0xA]; s16 fA; s16 fC; s16 fE; s16 f10; } PrObj;
typedef struct { PrObj *obj; u8 pad4[96]; } PrObjSlot;
typedef struct { u16 v; u8 pad[98]; } PrU16Slot;
typedef struct { u8 v; u8 pad[99]; } PrU8Slot;
extern PrU16Slot D_8011F32E[];
extern PrU8Slot D_8011F2FD[];
extern PrObjSlot D_8011F350[];
extern u16 D_801E87E6;
extern u16 D_801E975E;
extern u16 D_801E9778;
extern u16 D_801E977A;
extern u16 D_801E979E;

void func_801E28BC(u16 arg0)
{
    switch (D_8011F32E[arg0].v) {
    case 0:
        D_801E979E = 0x19;
        D_801E975E = 0;
        D_801E9778 = 0;
        D_801E977A = 0xA;
        D_8011F350[D_801E87E6].obj->fA = 0x15;
        D_8011F350[D_801E87E6].obj->fC = 0x34;
        D_8011F350[D_801E87E6].obj->fE = 0x116;
        D_8011F350[D_801E87E6].obj->f10 = 0x16;
        *((u8 *) D_8011F350[D_801E87E6].obj + 9) = 0x78;
        D_8011F32E[arg0].v = 0xA;
        break;
    case 0xA:
        D_801E9778++;
        if (D_801E9778 >= 0x259) {
            D_8011F32E[arg0].v = 0x14;
        }
        break;
    case 0x14:
        D_8011F2FD[arg0].v = 4;
        D_8011F2FD[D_801E87E6].v = 4;
        break;
    }
    if (D_801E975E < 0x20) {
        D_801E975E++;
    } else {
        D_801E975E = 0;
    }
}
