typedef struct 
{
  s16 y;
  s16 x;
  s16 z;
  u8 pad[10];
} V16;
typedef struct 
{
  u8 n;
  u8 pad[3];
  u8 *tris;
  V16 *verts;
  u8 nverts;
  u8 base;
  u8 pad2[2];
} Mesh;
typedef struct 
{
  Mesh *meshes;
  u8 pad[8];
} Group;
typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} Vec3;
void func_8003DE60(const char *, ...);
extern char D_8012AA48[];
extern char D_8012AA68[];
extern char D_8012AA84[];
extern char D_8012AA98[];
extern char D_8012AABC[];
extern char D_8012AAE0[];
extern char D_8012AB04[];
extern char D_8012AB20[];
extern Vec3 D_8012AB64;
extern Vec3 D_8012AB4C;
extern Vec3 D_8012AB7C;
extern Vec3 D_8012AB98[];
inline static u8 inline_fn(Mesh *arg0)
{
  return arg0->base;
}

inline static f32 inline_fn2()
{
  return D_8012AB4C.x;
}

void func_8012A384(u8 *arg0, s32 arg1)
{
  Vec3 *__base_D_8012AB7C;
  Vec3 *__base_D_8012AB4C;
  volatile unsigned long pad;
  Group **gp;
  Mesh *m;
  u8 *t;
  Group *g;
  char *msg;
  s32 bad;
  s32 i;
  s32 j;
  s32 k;
  s32 v;
  do
  {
    func_8003DE60(D_8012AA48, arg1 & 0xFFFF);
  }
  while (0);
  gp = *((Group ***) ((*((u8 **) ((*((u8 **) (arg0 + 0x50))) + 4))) + 4));
  bad = 0;
  for (i = 0; (*gp)[i].meshes != NULL; i++)
  {
    g = &(*gp)[i];
    for (j = 0; g->meshes[0].n != 0; j++)
    {
      m = &g->meshes[j];
      for (v = 0; v < m->nverts; v++)
      {
        D_8012AB98[m->base + v].x = (*((f32 *) (arg0 + 0x18))) + m->verts[v].x;
        i = m->verts[v].y; D_8012AB98[inline_fn(m) + v].y = (*((f32 *) (arg0 + 0x1C))) + i;
        D_8012AB98[inline_fn(m) + v].z = ((long) (*((f32 *) (arg0 + 0x20)))) + m->verts[v].z;
      }

      for (k = 0; 0 < m->n; k++)
      {
        t = &m->tris[k * 3];
        D_8012AB64 = D_8012AB98[t[0]];
        __base_D_8012AB4C = &D_8012AB4C;
        *__base_D_8012AB4C = D_8012AB98[t[1]];
        __base_D_8012AB7C = &D_8012AB7C;
        *__base_D_8012AB7C = D_8012AB98[t[2]];
        do
        {
          if (D_8012AB64.y || g->meshes)
          {
            bad++;
          }
          else
          {
            bad++;
          }
        }
        while (0);
        if (((((D_8012AB64.x == (*__base_D_8012AB4C).x) && (D_8012AB64.y == (*__base_D_8012AB4C).y)) && (D_8012AB64.z == (*__base_D_8012AB4C).z)) || (((D_8012AB64.x == (*__base_D_8012AB7C).x) && (D_8012AB64.y == (*__base_D_8012AB7C).y)) && (D_8012AB64.z == (*__base_D_8012AB7C).z))) || ((((*__base_D_8012AB7C).x == inline_fn2()) && ((*__base_D_8012AB7C).y == (*__base_D_8012AB4C).y)) && ((*__base_D_8012AB7C).z == (*__base_D_8012AB4C).z)))
        {
          if ((((((D_8012AB64.x == (*__base_D_8012AB7C).x) && (D_8012AB64.y == (*__base_D_8012AB7C).y)) && (D_8012AB64.z == (*__base_D_8012AB7C).z)) && (inline_fn2() == D_8012AB64.x)) && (D_8012AB64.y == (*__base_D_8012AB4C).y)) && (D_8012AB64.z == (*__base_D_8012AB4C).z))
          {
            msg = D_8012AA68;
          }
          else
          {
            msg = D_8012AB04;
          }
          func_8003DE60(msg);
          func_8003DE60(D_8012AA84);
          func_8003DE60(D_8012AA98, D_8012AB64.x, D_8012AB64.y, D_8012AB64.z);
          func_8003DE60(D_8012AABC, (*__base_D_8012AB4C).x, (*__base_D_8012AB4C).y, (*__base_D_8012AB4C).z);
          func_8003DE60(D_8012AAE0, (*__base_D_8012AB7C).x, (*__base_D_8012AB7C).y, (*__base_D_8012AB7C).z);
        }
      }

    }

  }

  func_8003DE60(D_8012AB20);
}

