s32 func_8003DE60(s32 *, s32);
s32 func_80230EFC(void *);

typedef struct {
  u8 d562;
  u8 d563;
  u8 d564;
  u8 d565;
  u8 d566;
} Digit;

typedef struct {
  u8 pad0[2];
  u16 f2;
  u8 pad4[2];
  u16 f6;
  u8 pad8[0x562 - 8];
  Digit digits[10];
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
  u16 f6;
  Racer *r;
  s16 *st;
  s16 *cur;
  s16 *prev;

  v = *(u16 *)(D_8011F32E + ((u16)arg0) * 100);
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
    *(u16 *)(D_8011F32E + ((u16)arg0) * 100) = 1;
    return;
  }
  if (v != 1) {
    return;
  }
  i = 0;
  st = D_80237058;
  cur = D_8023760E;
  prev = D_80237600;
  do {
    r = &D_8022A770[i];
    if ((r->f2 != 0xFFFF) & (i < 6)) {
      v = st[i];
      if (v == 0) {
        t = r->f594;
        if (t != 0) {
          cur[i] = t;
          st[i] = 1;
        } else if (D_8006FB14[4] == 1) {
          cur[i] = 1;
          st[i] = 1;
        }
      } else if (v == 1) {
        if (cur[i] < r->f594) {
          cur[i] = r->f594;
        }
        if (cur[i] < 10) {
          r->digits[cur[i]].d565 = r->digits[cur[i]].d565 + 1;
          if (r->digits[cur[i]].d565 >= 0x3C) {
            r->digits[cur[i]].d565 = 0;
            r->digits[cur[i]].d566 = 0;
            r->digits[cur[i]].d564 = r->digits[cur[i]].d564 + 1;
            if (r->digits[cur[i]].d564 >= 0x3C) {
              r->digits[cur[i]].d564 = 0;
              r->digits[cur[i]].d563 = r->digits[cur[i]].d563 + 1;
              if (r->digits[cur[i]].d563 >= 0x3C) {
                r->digits[cur[i]].d563 = 0;
                r->digits[cur[i]].d562 = r->digits[cur[i]].d562 + 1;
              }
            }
          } else {
            r->digits[cur[i]].d566 = D_80236ED4[r->digits[cur[i]].d565];
          }
        }
        if (r->digits[cur[i]].d562 != 0) {
          r->digits[cur[i]].d565 = 0x3B;
          r->digits[cur[i]].d566 = 0x63;
          r->digits[cur[i]].d563 = 0x3B;
          r->digits[cur[i]].d564 = 0x3B;
          r->digits[cur[i]].d562 = 1;
        }
        if (prev[i] != cur[i]) {
          if (cur[i] < 5) {
            f6 = r->f6;
            if (!(f6 & 8) && !(cur[i] < 2)) {
              r->f6 = f6 | 0x40;
              func_8003DE60(&D_80236F10, (f6 | 0x40) & 0x48);
            } else {
              r->f6 = f6 & 0xFFF7;
              func_8003DE60(&D_80236F20, f6 & 0x40);
            }
            if (cur[i] >= 2) {
              func_80230EFC(r);
            }
            r->digits[0].d566 = r->digits[0].d566 + r->digits[prev[i]].d566;
            r->digits[0].d564 = r->digits[0].d564 + r->digits[prev[i]].d564;
            r->digits[0].d563 = r->digits[0].d563 + r->digits[prev[i]].d563;
            r->digits[0].d562 = r->digits[0].d562 + r->digits[prev[i]].d562;
            while (r->digits[0].d566 >= 0x64) {
              r->digits[0].d566 = r->digits[0].d566 - 0x64;
              r->digits[0].d564 = r->digits[0].d564 + 1;
            }
            while (r->digits[0].d564 >= 0x3C) {
              r->digits[0].d564 = r->digits[0].d564 - 0x3C;
              r->digits[0].d563 = r->digits[0].d563 + 1;
            }
            while (r->digits[0].d563 >= 0x3C) {
              r->digits[0].d563 = r->digits[0].d563 - 0x3C;
              r->digits[0].d562 = r->digits[0].d562 + 1;
            }
          }
        }
        *(u16 *)&prev[i] = *(u16 *)&cur[i];
      }
    }
    i++;
  } while (i < 7);
}
