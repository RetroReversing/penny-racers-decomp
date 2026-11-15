s32 func_8003DE60(s32 *, s32);
s32 func_80230EFC(void *);

typedef struct {
  u8 pad0[2];
  u16 f2;
  u8 pad4[2];
  u16 f6;
  u8 pad8[0x562 - 8];
  u8 f562;
  u8 f563;
  u8 f564;
  u8 f565;
  u8 f566;
  u8 pad567[0x594 - 0x567];
  s16 f594;
  u8 pad596[0x8F0 - 0x596];
} Racer;

extern Racer D_8022A770[];
extern s16 D_80237058[];
extern s16 D_80237600[];
extern s16 D_8023760E[];
extern s16 D_80237632[];
extern u8 D_80237694[];
extern u8 D_80236ED4[];
extern s32 D_80236F10;
extern s32 D_80236F20;
extern u8 D_80236F50;
extern u8 D_8023761C;
extern u8 D_80167E62;
extern u8 D_8011F32E[];
extern u8 D_8006FB14[];

void func_80233ED0(s32 arg0)
{
  u16 i;
  s32 v;
  s16 t;
  u8 *p;
  u16 f6;
  Racer *r;

  v = *(u16 *)(D_8011F32E + (arg0 & 0xFFFF) * 100);
  if (v == 0) {
    for (i = 0; i < 7; i++) {
      D_80237058[i] = 0;
      D_8023760E[i] = 0;
      D_80237600[i] = 0;
      D_80237694[i] = 0;
      D_80237632[i] = 0;
    }
    D_80236F50 = 0;
    D_8023761C = 0;
    D_80167E62 = 0;
    *(u16 *)(D_8011F32E + (arg0 & 0xFFFF) * 100) = 1;
    return;
  }
  if (v != 1) {
    return;
  }
  i = 0;
  do {
    r = &D_8022A770[i];
    if ((r->f2 != 0xFFFF) & (i < 6)) {
      v = D_80237058[i];
      if (v == 0) {
        t = r->f594;
        if (t != 0) {
          D_8023760E[i] = t;
          D_80237058[i] = 1;
        } else if (D_8006FB14[4] == 1) {
          D_8023760E[i] = 1;
          D_80237058[i] = 1;
        }
      } else if (v != 1) {
        i++;
        continue;
      } else {
        t = D_8023760E[i];
        if (t < r->f594) {
          D_8023760E[i] = r->f594;
        }
        t = D_8023760E[i];
        if (t < 10) {
          p = (u8 *)r + t * 5;
          p[0x565] = p[0x565] + 1;
          if (p[0x565] >= 0x3C) {
            p[0x565] = 0;
            p[0x566] = 0;
            p[0x564] = p[0x564] + 1;
            if (p[0x564] >= 0x3C) {
              p[0x564] = 0;
              p[0x563] = p[0x563] + 1;
              if (p[0x563] >= 0x3C) {
                p[0x563] = 0;
                p[0x562] = p[0x562] + 1;
              }
            }
          } else {
            p[0x566] = D_80236ED4[p[0x565]];
          }
        }
        p = (u8 *)r + D_8023760E[i] * 5;
        if (p[0x562] != 0) {
          p[0x565] = 0x3B;
          p[0x566] = 0x63;
          p[0x563] = 0x3B;
          p[0x564] = 0x3B;
          p[0x562] = 1;
        }
        if (D_80237600[i] != D_8023760E[i]) {
          if (D_8023760E[i] < 5) {
            f6 = r->f6;
            if (!(f6 & 8) && !(D_8023760E[i] < 2)) {
              r->f6 = f6 | 0x40;
              func_8003DE60(&D_80236F10, (f6 | 0x40) & 0x48);
            } else {
              r->f6 = f6 & 0xFFF7;
              func_8003DE60(&D_80236F20, f6 & 0x40);
            }
            if (D_8023760E[i] >= 2) {
              func_80230EFC(r);
            }
            r->f566 = r->f566 + *((u8 *)r + D_80237600[i] * 5 + 0x566);
            r->f564 = r->f564 + *((u8 *)r + D_80237600[i] * 5 + 0x564);
            r->f563 = r->f563 + *((u8 *)r + D_80237600[i] * 5 + 0x563);
            r->f562 = r->f562 + *((u8 *)r + D_80237600[i] * 5 + 0x562);
            while (r->f566 >= 0x64) {
              r->f566 = r->f566 - 0x64;
              r->f564 = r->f564 + 1;
            }
            while (r->f564 >= 0x3C) {
              r->f564 = r->f564 - 0x3C;
              r->f563 = r->f563 + 1;
            }
            while (r->f563 >= 0x3C) {
              r->f563 = r->f563 - 0x3C;
              r->f562 = r->f562 + 1;
            }
          }
        }
        *(u16 *)&D_80237600[i] = *(u16 *)&D_8023760E[i];
      }
    }
    i++;
  } while (i < 7);
}
