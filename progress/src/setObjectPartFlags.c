typedef struct { u8 t; u8 pad[99]; } S0;
typedef struct { u16 a; u16 b; u8 pad[96]; } S4;
typedef struct { u16 a; u8 pad[98]; } S2;
extern S0 D_8011F2F0[];
extern S2 sNodeFlags[];
extern S4 D_8011F2F4[];
extern S2 D_8011F2F8[];

/* Sets the 0x20 flag on the flag words that object objIdx uses, chosen by its type byte. */
void setObjectPartFlags(u16 objIdx)
{
    switch (D_8011F2F0[objIdx].t) {
    case 0:
        D_8011F2F4[objIdx].a |= 0x20;
        D_8011F2F4[objIdx].b |= 0x20;
        D_8011F2F8[objIdx].a |= 0x20;
        break;
    case 1:
        sNodeFlags[objIdx].a |= 0x20;
        D_8011F2F4[objIdx].b |= 0x20;
        D_8011F2F8[objIdx].a |= 0x20;
        break;
    case 2:
        sNodeFlags[objIdx].a |= 0x20;
        D_8011F2F4[objIdx].a |= 0x20;
        D_8011F2F8[objIdx].a |= 0x20;
        break;
    case 3:
        sNodeFlags[objIdx].a |= 0x20;
        D_8011F2F4[objIdx].a |= 0x20;
        D_8011F2F4[objIdx].b |= 0x20;
        break;
    }
}
