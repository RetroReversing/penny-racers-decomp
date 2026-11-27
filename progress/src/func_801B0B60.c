typedef struct { u8 type; u8 pad1; s8 x; s8 y; u8 c; } Cell;
typedef struct { u8 b0; u8 b1; u8 count; } Info;
typedef struct { f32 x, y; } Pt;
typedef struct { f32 dx, dy, nx, ny; } Edge;
typedef struct { Pt p[4]; s16 n[4]; Edge e[4]; u8 pad68[4]; } Quad;
extern Info *trackInfo;
extern Quad D_8031EA70[];
f32 sqrtf(f32);
#define POS(v) ((v) * 400.0f + 400.0f - 200.0f)

void func_801B0B60(Cell *list) {
u8 i;
u8 next;
u8 key;

for (i = 0; i < trackInfo->count; i++) {
if (trackInfo->b0 == 3) {
key = list[i].c;
} else {
key = list[i].c - 0x2E;
}
next = i;
if (trackInfo->b1 == 5) {
if (i == trackInfo->count - 1) {
next = 0;
} else {
next = i + 1;
}
}
if (key < 10 || (u8) (key - 0x16) < 0x14) {
if (list[i].type == 0) {
D_8031EA70[next].p[0].x = POS(list[i].x);
D_8031EA70[next].p[1].x = POS((list[i].x + 1));
D_8031EA70[next].p[2].x = POS((list[i].x + 1));
D_8031EA70[next].p[3].x = POS(list[i].x);
D_8031EA70[next].p[0].y = POS(list[i].y);
D_8031EA70[next].p[1].y = POS(list[i].y);
D_8031EA70[next].p[2].y = POS((list[i].y + 1));
D_8031EA70[next].p[3].y = POS((list[i].y + 1));
} else if (list[i].type == 2) {
D_8031EA70[next].p[0].x = POS((list[i].x + 1));
D_8031EA70[next].p[1].x = POS(list[i].x);
D_8031EA70[next].p[2].x = POS(list[i].x);
D_8031EA70[next].p[3].x = POS((list[i].x + 1));
D_8031EA70[next].p[0].y = POS((list[i].y + 1));
D_8031EA70[next].p[1].y = POS((list[i].y + 1));
D_8031EA70[next].p[2].y = POS(list[i].y);
D_8031EA70[next].p[3].y = POS(list[i].y);
} else if (list[i].type == 1) {
D_8031EA70[next].p[0].x = POS(list[i].x);
D_8031EA70[next].p[1].x = POS(list[i].x);
D_8031EA70[next].p[2].x = POS((list[i].x + 1));
D_8031EA70[next].p[3].x = POS((list[i].x + 1));
D_8031EA70[next].p[0].y = POS((list[i].y + 1));
D_8031EA70[next].p[1].y = POS(list[i].y);
D_8031EA70[next].p[2].y = POS(list[i].y);
D_8031EA70[next].p[3].y = POS((list[i].y + 1));
} else if (list[i].type == 3) {
D_8031EA70[next].p[0].x = POS((list[i].x + 1));
D_8031EA70[next].p[1].x = POS((list[i].x + 1));
D_8031EA70[next].p[2].x = POS(list[i].x);
D_8031EA70[next].p[3].x = POS(list[i].x);
D_8031EA70[next].p[0].y = POS(list[i].y);
D_8031EA70[next].p[1].y = POS((list[i].y + 1));
D_8031EA70[next].p[2].y = POS((list[i].y + 1));
D_8031EA70[next].p[3].y = POS(list[i].y);
}
if (trackInfo->b1 == 5) {
if (i == trackInfo->count - 1) {
D_8031EA70[next].n[0] = 1;
} else if (i == trackInfo->count - 2) {
D_8031EA70[next].n[0] = 0;
} else {
D_8031EA70[next].n[0] = i + 2;
}
D_8031EA70[next].n[2] = i;
} else {
if (i == 0) {
D_8031EA70[next].n[0] = i + 1;
D_8031EA70[next].n[2] = trackInfo->count - 1;
} else if (i == trackInfo->count - 1) {
D_8031EA70[next].n[0] = 0;
D_8031EA70[next].n[2] = i - 1;
} else {
D_8031EA70[next].n[0] = i + 1;
D_8031EA70[next].n[2] = i - 1;
}
}
D_8031EA70[next].n[1] = -1;
D_8031EA70[next].n[3] = -1;
} else if ((u8) (key - 0xa) < 3) {
if (list[i].type == 2) {
D_8031EA70[next].p[0].x = POS((list[i].x + 1));
D_8031EA70[next].p[1].x = POS(list[i].x);
D_8031EA70[next].p[2].x = POS(list[i].x);
D_8031EA70[next].p[3].x = POS((list[i].x + 1));
D_8031EA70[next].p[0].y = POS((list[i].y + 1));
D_8031EA70[next].p[1].y = POS((list[i].y + 1));
D_8031EA70[next].p[2].y = POS(list[i].y);
D_8031EA70[next].p[3].y = POS(list[i].y);
if (trackInfo->b1 == 5) {
D_8031EA70[next].n[1] = i;
} else {
D_8031EA70[next].n[1] = i - 1;
}
D_8031EA70[next].n[3] = -1;
} else if (list[i].type == 1) {
D_8031EA70[next].p[0].x = POS(list[i].x);
D_8031EA70[next].p[1].x = POS(list[i].x);
D_8031EA70[next].p[2].x = POS((list[i].x + 1));
D_8031EA70[next].p[3].x = POS((list[i].x + 1));
D_8031EA70[next].p[0].y = POS((list[i].y + 1));
D_8031EA70[next].p[1].y = POS(list[i].y);
D_8031EA70[next].p[2].y = POS(list[i].y);
D_8031EA70[next].p[3].y = POS((list[i].y + 1));
D_8031EA70[next].n[1] = -1;
if (trackInfo->b1 == 5) {
D_8031EA70[next].n[3] = i;
} else {
D_8031EA70[next].n[3] = i - 1;
}
}
if (trackInfo->b1 == 5) {
if (i == trackInfo->count - 2) {
D_8031EA70[next].n[0] = 0;
} else {
D_8031EA70[next].n[0] = i + 2;
}
} else {
D_8031EA70[next].n[0] = i + 1;
}
D_8031EA70[next].n[2] = -1;
} else if ((u8) (key - 0xd) < 3) {
if (list[i].type == 2) {
D_8031EA70[next].p[0].x = POS((list[i].x + 1));
D_8031EA70[next].p[1].x = POS(list[i].x);
D_8031EA70[next].p[2].x = POS(list[i].x);
D_8031EA70[next].p[3].x = POS((list[i].x + 1));
D_8031EA70[next].p[0].y = POS((list[i].y + 1));
D_8031EA70[next].p[1].y = POS((list[i].y + 1));
D_8031EA70[next].p[2].y = POS(list[i].y);
D_8031EA70[next].p[3].y = POS(list[i].y);
D_8031EA70[next].n[1] = -1;
if (trackInfo->b1 == 5) {
D_8031EA70[next].n[3] = i;
} else {
D_8031EA70[next].n[3] = i - 1;
}
} else if (list[i].type == 3) {
D_8031EA70[next].p[0].x = POS((list[i].x + 1));
D_8031EA70[next].p[1].x = POS((list[i].x + 1));
D_8031EA70[next].p[2].x = POS(list[i].x);
D_8031EA70[next].p[3].x = POS(list[i].x);
D_8031EA70[next].p[0].y = POS(list[i].y);
D_8031EA70[next].p[1].y = POS((list[i].y + 1));
D_8031EA70[next].p[2].y = POS((list[i].y + 1));
D_8031EA70[next].p[3].y = POS(list[i].y);
if (trackInfo->b1 == 5) {
D_8031EA70[next].n[1] = i;
} else {
D_8031EA70[next].n[1] = i - 1;
}
D_8031EA70[next].n[3] = -1;
}
if (trackInfo->b1 == 5) {
if (i == trackInfo->count - 2) {
D_8031EA70[next].n[0] = 0;
} else {
D_8031EA70[next].n[0] = i + 2;
}
} else {
D_8031EA70[next].n[0] = i + 1;
}
D_8031EA70[next].n[2] = -1;
} else if ((u8) (key - 0x10) < 3) {
if (list[i].type == 0) {
D_8031EA70[next].p[0].x = POS(list[i].x);
D_8031EA70[next].p[1].x = POS((list[i].x + 1));
D_8031EA70[next].p[2].x = POS((list[i].x + 1));
D_8031EA70[next].p[3].x = POS(list[i].x);
D_8031EA70[next].p[0].y = POS(list[i].y);
D_8031EA70[next].p[1].y = POS(list[i].y);
D_8031EA70[next].p[2].y = POS((list[i].y + 1));
D_8031EA70[next].p[3].y = POS((list[i].y + 1));
D_8031EA70[next].n[1] = -1;
if (trackInfo->b1 == 5) {
D_8031EA70[next].n[3] = i;
} else {
D_8031EA70[next].n[3] = i - 1;
}
} else if (list[i].type == 1) {
D_8031EA70[next].p[0].x = POS(list[i].x);
D_8031EA70[next].p[1].x = POS(list[i].x);
D_8031EA70[next].p[2].x = POS((list[i].x + 1));
D_8031EA70[next].p[3].x = POS((list[i].x + 1));
D_8031EA70[next].p[0].y = POS((list[i].y + 1));
D_8031EA70[next].p[1].y = POS(list[i].y);
D_8031EA70[next].p[2].y = POS(list[i].y);
D_8031EA70[next].p[3].y = POS((list[i].y + 1));
if (trackInfo->b1 == 5) {
D_8031EA70[next].n[1] = i;
} else {
D_8031EA70[next].n[1] = i - 1;
}
D_8031EA70[next].n[3] = -1;
}
if (trackInfo->b1 == 5) {
if (i == trackInfo->count - 2) {
D_8031EA70[next].n[0] = 0;
} else {
D_8031EA70[next].n[0] = i + 2;
}
} else {
D_8031EA70[next].n[0] = i + 1;
}
D_8031EA70[next].n[2] = -1;
} else if ((u8) (key - 0x13) < 3) {
if (list[i].type == 0) {
D_8031EA70[next].p[0].x = POS(list[i].x);
D_8031EA70[next].p[1].x = POS((list[i].x + 1));
D_8031EA70[next].p[2].x = POS((list[i].x + 1));
D_8031EA70[next].p[3].x = POS(list[i].x);
D_8031EA70[next].p[0].y = POS(list[i].y);
D_8031EA70[next].p[1].y = POS(list[i].y);
D_8031EA70[next].p[2].y = POS((list[i].y + 1));
D_8031EA70[next].p[3].y = POS((list[i].y + 1));
if (trackInfo->b1 == 5) {
D_8031EA70[next].n[1] = i;
} else {
D_8031EA70[next].n[1] = i - 1;
}
D_8031EA70[next].n[3] = -1;
} else if (list[i].type == 3) {
D_8031EA70[next].p[0].x = POS((list[i].x + 1));
D_8031EA70[next].p[1].x = POS((list[i].x + 1));
D_8031EA70[next].p[2].x = POS(list[i].x);
D_8031EA70[next].p[3].x = POS(list[i].x);
D_8031EA70[next].p[0].y = POS(list[i].y);
D_8031EA70[next].p[1].y = POS((list[i].y + 1));
D_8031EA70[next].p[2].y = POS((list[i].y + 1));
D_8031EA70[next].p[3].y = POS(list[i].y);
D_8031EA70[next].n[1] = -1;
if (trackInfo->b1 == 5) {
D_8031EA70[next].n[3] = i;
} else {
D_8031EA70[next].n[3] = i - 1;
}
}
if (trackInfo->b1 == 5) {
if (i == trackInfo->count - 2) {
D_8031EA70[next].n[0] = 0;
} else {
D_8031EA70[next].n[0] = i + 2;
}
} else {
D_8031EA70[next].n[0] = i + 1;
}
D_8031EA70[next].n[2] = -1;
} else if ((u8) (key - 0x2a) < 4) {
if (list[i].type == 0) {
D_8031EA70[next].p[0].x = POS(list[i].x);
D_8031EA70[next].p[1].x = POS((list[i].x + 1));
D_8031EA70[next].p[2].x = POS((list[i].x + 1));
D_8031EA70[next].p[3].x = POS(list[i].x);
D_8031EA70[next].p[0].y = POS(list[i].y);
D_8031EA70[next].p[1].y = POS(list[i].y);
D_8031EA70[next].p[2].y = POS((list[i].y + 1));
D_8031EA70[next].p[3].y = POS((list[i].y + 1));
} else if (list[i].type == 2) {
D_8031EA70[next].p[0].x = POS((list[i].x + 1));
D_8031EA70[next].p[1].x = POS(list[i].x);
D_8031EA70[next].p[2].x = POS(list[i].x);
D_8031EA70[next].p[3].x = POS((list[i].x + 1));
D_8031EA70[next].p[0].y = POS((list[i].y + 1));
D_8031EA70[next].p[1].y = POS((list[i].y + 1));
D_8031EA70[next].p[2].y = POS(list[i].y);
D_8031EA70[next].p[3].y = POS(list[i].y);
} else if (list[i].type == 1) {
D_8031EA70[next].p[0].x = POS(list[i].x);
D_8031EA70[next].p[1].x = POS(list[i].x);
D_8031EA70[next].p[2].x = POS((list[i].x + 1));
D_8031EA70[next].p[3].x = POS((list[i].x + 1));
D_8031EA70[next].p[0].y = POS((list[i].y + 1));
D_8031EA70[next].p[1].y = POS(list[i].y);
D_8031EA70[next].p[2].y = POS(list[i].y);
D_8031EA70[next].p[3].y = POS((list[i].y + 1));
} else if (list[i].type == 3) {
D_8031EA70[next].p[0].x = POS((list[i].x + 1));
D_8031EA70[next].p[1].x = POS((list[i].x + 1));
D_8031EA70[next].p[2].x = POS(list[i].x);
D_8031EA70[next].p[3].x = POS(list[i].x);
D_8031EA70[next].p[0].y = POS(list[i].y);
D_8031EA70[next].p[1].y = POS((list[i].y + 1));
D_8031EA70[next].p[2].y = POS((list[i].y + 1));
D_8031EA70[next].p[3].y = POS(list[i].y);
}
if (i == 0) {
D_8031EA70[next].n[0] = i + 1;
D_8031EA70[next].n[2] = -1;
} else if (i == trackInfo->count - 1) {
D_8031EA70[next].n[0] = -1;
D_8031EA70[next].n[2] = i - 1;
}
D_8031EA70[next].n[1] = -1;
D_8031EA70[next].n[3] = -1;
}
D_8031EA70[next].e[0].dx = (D_8031EA70[next].p[1].x - D_8031EA70[next].p[0].x) * 0.01f;
D_8031EA70[next].e[0].dy = (D_8031EA70[next].p[1].y - D_8031EA70[next].p[0].y) * 0.01f;
D_8031EA70[next].e[0].nx = (D_8031EA70[next].p[1].y - D_8031EA70[next].p[0].y) / sqrtf((D_8031EA70[next].p[1].y - D_8031EA70[next].p[0].y) * (D_8031EA70[next].p[1].y - D_8031EA70[next].p[0].y) + -(D_8031EA70[next].p[1].x - D_8031EA70[next].p[0].x) * -(D_8031EA70[next].p[1].x - D_8031EA70[next].p[0].x));
D_8031EA70[next].e[0].ny = -(D_8031EA70[next].p[1].x - D_8031EA70[next].p[0].x) / sqrtf((D_8031EA70[next].p[1].y - D_8031EA70[next].p[0].y) * (D_8031EA70[next].p[1].y - D_8031EA70[next].p[0].y) + -(D_8031EA70[next].p[1].x - D_8031EA70[next].p[0].x) * -(D_8031EA70[next].p[1].x - D_8031EA70[next].p[0].x));
D_8031EA70[next].e[1].dx = (D_8031EA70[next].p[2].x - D_8031EA70[next].p[1].x) * 0.01f;
D_8031EA70[next].e[1].dy = (D_8031EA70[next].p[2].y - D_8031EA70[next].p[1].y) * 0.01f;
D_8031EA70[next].e[1].nx = (D_8031EA70[next].p[2].y - D_8031EA70[next].p[1].y) / sqrtf((D_8031EA70[next].p[2].y - D_8031EA70[next].p[1].y) * (D_8031EA70[next].p[2].y - D_8031EA70[next].p[1].y) + -(D_8031EA70[next].p[2].x - D_8031EA70[next].p[1].x) * -(D_8031EA70[next].p[2].x - D_8031EA70[next].p[1].x));
D_8031EA70[next].e[1].ny = -(D_8031EA70[next].p[2].x - D_8031EA70[next].p[1].x) / sqrtf((D_8031EA70[next].p[2].y - D_8031EA70[next].p[1].y) * (D_8031EA70[next].p[2].y - D_8031EA70[next].p[1].y) + -(D_8031EA70[next].p[2].x - D_8031EA70[next].p[1].x) * -(D_8031EA70[next].p[2].x - D_8031EA70[next].p[1].x));
D_8031EA70[next].e[2].dx = (D_8031EA70[next].p[3].x - D_8031EA70[next].p[2].x) * 0.01f;
D_8031EA70[next].e[2].dy = (D_8031EA70[next].p[3].y - D_8031EA70[next].p[2].y) * 0.01f;
D_8031EA70[next].e[2].nx = (D_8031EA70[next].p[3].y - D_8031EA70[next].p[2].y) / sqrtf((D_8031EA70[next].p[3].y - D_8031EA70[next].p[2].y) * (D_8031EA70[next].p[3].y - D_8031EA70[next].p[2].y) + -(D_8031EA70[next].p[3].x - D_8031EA70[next].p[2].x) * -(D_8031EA70[next].p[3].x - D_8031EA70[next].p[2].x));
D_8031EA70[next].e[2].ny = -(D_8031EA70[next].p[3].x - D_8031EA70[next].p[2].x) / sqrtf((D_8031EA70[next].p[3].y - D_8031EA70[next].p[2].y) * (D_8031EA70[next].p[3].y - D_8031EA70[next].p[2].y) + -(D_8031EA70[next].p[3].x - D_8031EA70[next].p[2].x) * -(D_8031EA70[next].p[3].x - D_8031EA70[next].p[2].x));
D_8031EA70[next].e[3].dx = (D_8031EA70[next].p[0].x - D_8031EA70[next].p[3].x) * 0.01f;
D_8031EA70[next].e[3].dy = (D_8031EA70[next].p[0].y - D_8031EA70[next].p[3].y) * 0.01f;
D_8031EA70[next].e[3].nx = (D_8031EA70[next].p[0].y - D_8031EA70[next].p[3].y) / sqrtf((D_8031EA70[next].p[0].y - D_8031EA70[next].p[3].y) * (D_8031EA70[next].p[0].y - D_8031EA70[next].p[3].y) + -(D_8031EA70[next].p[0].x - D_8031EA70[next].p[3].x) * -(D_8031EA70[next].p[0].x - D_8031EA70[next].p[3].x));
D_8031EA70[next].e[3].ny = -(D_8031EA70[next].p[0].x - D_8031EA70[next].p[3].x) / sqrtf((D_8031EA70[next].p[0].y - D_8031EA70[next].p[3].y) * (D_8031EA70[next].p[0].y - D_8031EA70[next].p[3].y) + -(D_8031EA70[next].p[0].x - D_8031EA70[next].p[3].x) * -(D_8031EA70[next].p[0].x - D_8031EA70[next].p[3].x));
}
}
