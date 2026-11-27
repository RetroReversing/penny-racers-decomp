typedef struct { u8 t; u8 pad[99]; } S0;
typedef struct { u16 a; u16 b; u8 pad[96]; } S4;
typedef struct { u16 a; u8 pad[98]; } S2;
extern S0 D_8011F2F0[];
extern S2 sNodeFlags[];
extern S4 D_8011F2F4[];
extern S2 D_8011F2F8[];
void func_80209B90(u16 i)
{
    switch (D_8011F2F0[i].t) {
    case 0:
        D_8011F2F4[i].a |= 0x20;
        D_8011F2F4[i].b |= 0x20;
        D_8011F2F8[i].a |= 0x20;
        break;
    case 1:
        sNodeFlags[i].a |= 0x20;
        D_8011F2F4[i].b |= 0x20;
        D_8011F2F8[i].a |= 0x20;
        break;
    case 2:
        sNodeFlags[i].a |= 0x20;
        D_8011F2F4[i].a |= 0x20;
        D_8011F2F8[i].a |= 0x20;
        break;
    case 3:
        sNodeFlags[i].a |= 0x20;
        D_8011F2F4[i].a |= 0x20;
        D_8011F2F4[i].b |= 0x20;
        break;
    }
}
