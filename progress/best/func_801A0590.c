typedef struct 
{
  u8 b0;
  u8 f1;
  s8 x;
  s8 y;
  u8 c;
} Rec;
typedef struct 
{
  u8 b0;
  u8 b1;
  u8 b2;
} Info;
extern Info *trackInfo;
extern Rec trackPoints[];
extern s8 D_801C746C;
extern s8 D_801C7AB7;
extern u8 D_801CA13D;
extern u8 D_801C7AB9;
extern u8 D_801C707A;
extern u8 D_801C6BB8;
extern u8 D_801CA130;
void func_801C3634(u8, u8 *, u8 *);
u8 func_801A4040(u8);
u8 func_801A4108(u8);
u8 func_801A0590(void)
{
  Info *ptrackInfo;
  u8 sp10;
  u8 key0;
  u8 key1;
  u8 key2;
  u8 r1;
  u8 r2;
  u8 f1;
  u8 f2;
  u8 f3;
  u8 f4;
  u8 temp;
  u8 temp2;
  do
  {
    D_801C746C = -1;
    D_801C7AB7 = -1;
    do
    {
      ptrackInfo = trackInfo;
      D_801C6BB8 = (D_801C707A = (D_801C7AB9 = (D_801CA13D = ptrackInfo->b2)));
    }
    while (0);
    ptrackInfo = trackInfo;
    temp = ptrackInfo->b2;
    sp10 = temp;
    f4 = 0;
    f3 = 0;
    f2 = 0;
  }
  while (0);
  f1 = 0;
  func_801C3634(D_801CA130, &D_801C6BB8, &D_801C707A);
  if (trackInfo->b0 == 3)
  {
    temp2 = trackPoints[D_801C707A].c;
    key0 = trackPoints[D_801CA130].c;
    key1 = trackPoints[D_801C6BB8].c;
    key2 = temp2;
  }
  else
  {
    key0 = trackPoints[D_801CA130].c - 0x2E;
    key1 = trackPoints[D_801C6BB8].c - 0x2E;
    key2 = trackPoints[D_801C707A].c - 0x2E;
  }
  if (trackPoints[D_801CA130].f1 == 0)
  {
    u8 r2;
    if (((D_801C6BB8 != 0xFF) && (D_801C707A != 0xFF)) || (((u8) (key0 - 0x16)) < 0x14))
    {
      if (((u8) key0) < 5)
      {
        f1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4040(D_801C707A);
        if (f1 && r2)
        {
          return 1;
        }
      }
      else
        if (((u8) (key0 - 0x5)) < 5)
      {
        f1 = func_801A4108(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (f1 && r2)
        {
          return 1;
        }
      }
      else
        if (((u8) (key0 - 0xa)) < 12)
      {
        f1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (f1 && r2)
        {
          return 1;
        }
      }
      else
        if (((u8) (key0 - 0x16)) < 5)
      {
        if ((trackPoints[D_801C6BB8].f1 == 0x0) && (((u8) (key1 - 0x1b)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C6BB8].f1 == 0x3c) && (((u8) (key1 - 0x16)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f2 = 1;
        }
        r1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4040(D_801C707A);
        if (r1 && r2)
        {
          if (f1)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (2);
          }
          if (f2)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (1);
          }
          return 3;
        }
        if (r1)
        {
          if (f1)
          {
            return 2;
          }
          if (f2)
          {
            return (func_801A4040(D_801C7AB9)) ? (2) : (0);
          }
          return 2;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0x1b)) < 5)
      {
        if ((trackPoints[D_801C707A].f1 == 0x0) && (((u8) (key2 - 0x16)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C707A].f1 == 0x3c) && (((u8) (key2 - 0x1b)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f2 = 1;
        }
        r1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4040(D_801C707A);
        if (r1 && r2)
        {
          if (f1)
          {
            return (func_801A4040(D_801CA13D)) ? (3) : (2);
          }
          if (f2)
          {
            return (func_801A4040(D_801CA13D)) ? (3) : (1);
          }
          return 3;
        }
        if (r2)
        {
          if (f1)
          {
            return 2;
          }
          if (f2)
          {
            return (func_801A4040(D_801CA13D)) ? (2) : (0);
          }
          return 2;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0x20)) < 5)
      {
        if ((trackPoints[D_801C6BB8].f1 == 0x0) && (((u8) (key1 - 0x25)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C6BB8].f1 == 0x3c) && (((u8) (key1 - 0x20)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f2 = 1;
        }
        r1 = func_801A4108(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (r1 && r2)
        {
          if (f1)
          {
            return (func_801A4108(D_801C7AB9)) ? (3) : (2);
          }
          if (f2)
          {
            return (func_801A4108(D_801C7AB9)) ? (3) : (1);
          }
          return 3;
        }
        if (r1)
        {
          if (f1)
          {
            return 2;
          }
          if (f2)
          {
            return (func_801A4108(D_801C7AB9)) ? (2) : (0);
          }
          return 2;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0x25)) < 5)
      {
        if ((trackPoints[D_801C707A].f1 == 0x0) && (((u8) (key2 - 0x20)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C707A].f1 == 0x3c) && (((u8) (key2 - 0x25)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f2 = 1;
        }
        r1 = func_801A4108(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (r1 && r2)
        {
          if (f1)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (2);
          }
          if (f2)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (1);
          }
          return 3;
        }
        if (r2)
        {
          if (f1)
          {
            return 2;
          }
          if (f2)
          {
            return (func_801A4108(D_801CA13D)) ? (2) : (0);
          }
          return 2;
        }
        return 0;
      }
      else
        if (((s8) key0) == 0x2a)
      {
        r1 = func_801A4108(D_801C707A);
        if ((D_801C6BB8 == trackInfo->b2) && r1)
        {
          return 1;
        }
      }
      else
        if (((s8) key0) == 0x2b)
      {
        if (func_801A4108(D_801C6BB8))
        {
          if (D_801C707A == trackInfo->b2)
          {
            return 1;
          }
        }
      }
      else
        if (((s8) key0) == 0x2c)
      {
        r1 = func_801A4040(D_801C707A);
        if ((D_801C6BB8 == trackInfo->b2) && r1)
        {
          return 1;
        }
      }
      else
        if (((s8) key0) == 0x2d)
      {
        if (func_801A4040(D_801C6BB8))
        {
          if (D_801C707A == trackInfo->b2)
          {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  else
    if (trackPoints[D_801CA130].f1 == 0x3C)
  {
    u8 f4;
    if (((D_801C6BB8 != 0xFF) && (D_801C707A != 0xFF)) || (((u8) (key0 - 0x16)) < 0x14))
    {
      if (((u8) key0) < 5)
      {
        u8 f4;
        if ((trackPoints[D_801C6BB8].f1 == 0x3c) && (((u8) (key1 - 0x16)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C6BB8].f1 == 0x0) && (((u8) (key1 - 0x1b)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f2 = 1;
        }
        if ((trackPoints[D_801C707A].f1 == 0x3c) && (((u8) (key2 - 0x1b)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f3 = 1;
        }
        else
          if ((trackPoints[D_801C707A].f1 == 0x0) && (((u8) (key2 - 0x16)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f4 = 1;
        }
        r1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4040(D_801C707A);
        if (r1 && r2)
        {
          if (f1 && f3)
          {
            f1 = func_801A4040(D_801C7AB9);
            r2 = func_801A4040(D_801CA13D);
            return (f1 && r2) ? (3) : (1);
          }
          if (f1 && f4)
          {
            f1 = func_801A4040(D_801C7AB9);
            f4 = func_801A4040(D_801CA13D);
            if (f1 && f4)
            {
              return 3;
            }
            if (f1)
            {
              return 2;
            }
            if (f4)
            {
              return 1;
            }
            return 0;
          }
          if (f2 && f3)
          {
            f2 = func_801A4040(D_801C7AB9);
            f3 = func_801A4040(D_801CA13D);
            if (f2 && f3)
            {
              return 3;
            }
            if (f2)
            {
              return 1;
            }
            if (f3)
            {
              return 2;
            }
            return 0;
          }
          if (f2 && f4)
          {
            f2 = func_801A4040(D_801C7AB9);
            r2 = func_801A4040(D_801CA13D);
            return (f2 && r2) ? (3) : (2);
          }
          if (f1)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (1);
          }
          if (f2)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (2);
          }
          if (f3)
          {
            return (func_801A4040(D_801CA13D)) ? (3) : (1);
          }
          if (f4)
          {
            return (func_801A4040(D_801CA13D)) ? (3) : (2);
          }
          return 3;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0x5)) < 5)
      {
        volatile char f4;
        if ((trackPoints[D_801C6BB8].f1 == 0x3c) && (((u8) (key1 - 0x20)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C6BB8].f1 == 0x0) && (((u8) (key1 - 0x25)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f2 = 1;
        }
        if ((trackPoints[D_801C707A].f1 == 0x3c) && (((u8) (key2 - 0x25)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f3 = 1;
        }
        else
          if ((trackPoints[D_801C707A].f1 == 0x0) && (((u8) (key2 - 0x20)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f4 = 1;
        }
        r1 = func_801A4108(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (r1 && r2)
        {
          if (f1 && f3)
          {
            f1 = func_801A4108(D_801C7AB9);
            r2 = func_801A4108(D_801CA13D);
            return (f1 && r2) ? (3) : (1);
          }
          if (f1 && f4)
          {
            f1 = func_801A4108(D_801C7AB9);
            f4 = func_801A4108(D_801CA13D);
            if (f1 && f4)
            {
              return 3;
            }
            if (f1)
            {
              return 2;
            }
            if (f4)
            {
              return 1;
            }
            return 0;
          }
          if (f2 && f3)
          {
            f2 = func_801A4108(D_801C7AB9);
            f3 = func_801A4108(D_801CA13D);
            if (f2 && f3)
            {
              return 3;
            }
            if (f2)
            {
              return 1;
            }
            if (f3)
            {
              return 2;
            }
            return 0;
          }
          if (f2 && f4)
          {
            f2 = func_801A4108(D_801C7AB9);
            r2 = func_801A4108(D_801CA13D);
            return (f2 && r2) ? (3) : (2);
          }
          if (f1)
          {
            return (func_801A4108(D_801C7AB9)) ? (3) : (1);
          }
          if (f2)
          {
            return (func_801A4108(D_801C7AB9)) ? (3) : (2);
          }
          if (f3)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (1);
          }
          if (f4)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (2);
          }
          return 3;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0xa)) < 3)
      {
        volatile unsigned int f4;
        if ((trackPoints[D_801C6BB8].f1 == 0x3c) && (((u8) (key1 - 0x16)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C6BB8].f1 == 0x0) && (((u8) (key1 - 0x1b)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f2 = 1;
        }
        if ((trackPoints[D_801C707A].f1 == 0x3c) && (((u8) (key2 - 0x25)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f3 = 1;
        }
        else
          if ((trackPoints[D_801C707A].f1 == 0x0) && (((u8) (key2 - 0x20)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f4 = 1;
        }
        r1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (r1 && r2)
        {
          if (f1 && f3)
          {
            f1 = func_801A4040(D_801C7AB9);
            r2 = func_801A4108(D_801CA13D);
            return (f1 && r2) ? (3) : (1);
          }
          if (f1 && f4)
          {
            f1 = func_801A4040(D_801C7AB9);
            f4 = func_801A4108(D_801CA13D);
            if (f1 && f4)
            {
              return 3;
            }
            if (f1)
            {
              return 2;
            }
            if (f4)
            {
              return 1;
            }
            return 0;
          }
          if (f2 && f3)
          {
            f2 = func_801A4040(D_801C7AB9);
            f3 = func_801A4108(D_801CA13D);
            if (f2 && f3)
            {
              return 3;
            }
            if (f2)
            {
              return 1;
            }
            if (f3)
            {
              return 2;
            }
            return 0;
          }
          if (f2 && f4)
          {
            f2 = func_801A4040(D_801C7AB9);
            r2 = func_801A4108(D_801CA13D);
            return (f2 && r2) ? (3) : (2);
          }
          if (f1)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (1);
          }
          if (f2)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (2);
          }
          if (f3)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (1);
          }
          if (f4)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (2);
          }
          return 3;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0xd)) < 3)
      {
        u8 f4;
        if ((trackPoints[D_801C6BB8].f1 == 0x3c) && (((u8) (key1 - 0x1b)) < 5))
        {
          func_801C3634(D_801C6BB8, &sp10, &D_801C7AB9);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C6BB8].f1 == 0x0) && (((u8) (key1 - 0x16)) < 5))
        {
          func_801C3634(D_801C6BB8, &sp10, &D_801C7AB9);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f2 = 1;
        }
        if ((trackPoints[D_801C707A].f1 == 0x3c) && (((u8) (key2 - 0x25)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f3 = 1;
        }
        else
          if ((trackPoints[D_801C707A].f1 == 0x0) && (((u8) (key2 - 0x20)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f4 = 1;
        }
        r1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (r1 && r2)
        {
          if (f1 && f3)
          {
            f1 = func_801A4040(D_801C7AB9);
            r2 = func_801A4108(D_801CA13D);
            return (f1 && r2) ? (3) : (1);
          }
          if (f1 && f4)
          {
            f1 = func_801A4040(D_801C7AB9);
            f4 = func_801A4108(D_801CA13D);
            if (f1 && f4)
            {
              return 3;
            }
            if (f1)
            {
              return 2;
            }
            if (f4)
            {
              return 1;
            }
            return 0;
          }
          if (f2 && f3)
          {
            f2 = func_801A4040(D_801C7AB9);
            f3 = func_801A4108(D_801CA13D);
            if (f2 && f3)
            {
              return 3;
            }
            if (f2)
            {
              return 1;
            }
            if (f3)
            {
              return 2;
            }
            return 0;
          }
          if (f2 && f4)
          {
            f2 = func_801A4040(D_801C7AB9);
            r2 = func_801A4108(D_801CA13D);
            return (f2 && r2) ? (3) : (2);
          }
          if (f1)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (1);
          }
          if (f2)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (2);
          }
          if (f3)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (1);
          }
          if (f4)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (2);
          }
          return 3;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0x10)) < 3)
      {
        volatile int f4;
        if ((trackPoints[D_801C6BB8].f1 == 0x3c) && (((u8) (key1 - 0x16)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C6BB8].f1 == 0x0) && (((u8) (key1 - 0x1b)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f2 = 1;
        }
        if ((trackPoints[D_801C707A].f1 == 0x3c) && (((u8) (key2 - 0x20)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f3 = 1;
        }
        else
          if ((trackPoints[D_801C707A].f1 == 0x0) && (((u8) (key2 - 0x25)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f4 = 1;
        }
        r1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (r1 && r2)
        {
          if (f1 && f3)
          {
            f1 = func_801A4040(D_801C7AB9);
            r2 = func_801A4108(D_801CA13D);
            return (f1 && r2) ? (3) : (1);
          }
          if (f1 && f4)
          {
            f1 = func_801A4040(D_801C7AB9);
            f4 = func_801A4108(D_801CA13D);
            if (f1 && f4)
            {
              return 3;
            }
            if (f1)
            {
              return 2;
            }
            if (f4)
            {
              return 1;
            }
            return 0;
          }
          if (f2 && f3)
          {
            f2 = func_801A4040(D_801C7AB9);
            f3 = func_801A4108(D_801CA13D);
            if (f2 && f3)
            {
              return 3;
            }
            if (f2)
            {
              return 1;
            }
            if (f3)
            {
              return 2;
            }
            return 0;
          }
          if (f2 && f4)
          {
            f2 = func_801A4040(D_801C7AB9);
            r2 = func_801A4108(D_801CA13D);
            return (f2 && r2) ? (3) : (2);
          }
          if (f1)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (1);
          }
          if (f2)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (2);
          }
          if (f3)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (1);
          }
          if (f4)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (2);
          }
          return 3;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0x13)) < 3)
      {
        u8 f4;
        if ((trackPoints[D_801C6BB8].f1 == 0x3c) && (((u8) (key1 - 0x1b)) < 5))
        {
          func_801C3634(D_801C6BB8, &sp10, &D_801C7AB9);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C6BB8].f1 == 0x0) && (((u8) (key1 - 0x16)) < 5))
        {
          func_801C3634(D_801C6BB8, &sp10, &D_801C7AB9);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f2 = 1;
        }
        if ((trackPoints[D_801C707A].f1 == 0x3c) && (((u8) (key2 - 0x20)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f3 = 1;
        }
        else
          if ((trackPoints[D_801C707A].f1 == 0x0) && (((u8) (key2 - 0x25)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f4 = 1;
        }
        r1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (r1 && r2)
        {
          if (f1 && f3)
          {
            f1 = func_801A4040(D_801C7AB9);
            r2 = func_801A4108(D_801CA13D);
            return (f1 && r2) ? (3) : (1);
          }
          if (f1 && f4)
          {
            f1 = func_801A4040(D_801C7AB9);
            f4 = func_801A4108(D_801CA13D);
            if (f1 && f4)
            {
              return 3;
            }
            if (f1)
            {
              return 2;
            }
            if (f4)
            {
              return 1;
            }
            return 0;
          }
          if (f2 && f3)
          {
            f2 = func_801A4040(D_801C7AB9);
            f3 = func_801A4108(D_801CA13D);
            if (f2 && f3)
            {
              return 3;
            }
            if (f2)
            {
              return 1;
            }
            if (f3)
            {
              return 2;
            }
            return 0;
          }
          if (f2 && f4)
          {
            f2 = func_801A4040(D_801C7AB9);
            r2 = func_801A4108(D_801CA13D);
            return (f2 && r2) ? (3) : (2);
          }
          if (f1)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (1);
          }
          if (f2)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (2);
          }
          if (f3)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (1);
          }
          if (f4)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (2);
          }
          return 3;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0x16)) < 5)
      {
        u8 f2;
        if ((trackPoints[D_801C707A].f1 == 0x3c) && (((u8) (key2 - 0x1b)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C707A].f1 == 0x0) && (((u8) (key2 - 0x16)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f2 = 1;
        }
        r1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4040(D_801C707A);
        if (r1 && r2)
        {
          if (f1)
          {
            return (func_801A4040(D_801CA13D)) ? (3) : (1);
          }
          if (f2)
          {
            return (func_801A4040(D_801CA13D)) ? (3) : (2);
          }
          return 3;
        }
        if (r2)
        {
          if (f1)
          {
            return 1;
          }
          if (f2)
          {
            return (func_801A4040(D_801CA13D)) ? (1) : (0);
          }
          return 1;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0x1b)) < 5)
      {
        u8 f2;
        if ((trackPoints[D_801C6BB8].f1 == 0x3c) && (((u8) (key1 - 0x16)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C6BB8].f1 == 0x0) && (((u8) (key1 - 0x1b)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f2 = 1;
        }
        r1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4040(D_801C707A);
        if (r1 && r2)
        {
          if (f1)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (1);
          }
          if (f2)
          {
            return (func_801A4040(D_801C7AB9)) ? (3) : (2);
          }
          return 3;
        }
        if (r1)
        {
          if (f1)
          {
            return 1;
          }
          if (f2)
          {
            return (func_801A4040(D_801C7AB9)) ? (1) : (0);
          }
          return 1;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0x20)) < 5)
      {
        u8 f2;
        if ((trackPoints[D_801C707A].f1 == 0x3c) && (((u8) (key2 - 0x25)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C707A].f1 == 0x0) && (((u8) (key2 - 0x20)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f2 = 1;
        }
        r1 = func_801A4108(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (r1 && r2)
        {
          if (f1)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (1);
          }
          if (f2)
          {
            return (func_801A4108(D_801CA13D)) ? (3) : (2);
          }
          return 3;
        }
        if (r2)
        {
          if (f1)
          {
            return 1;
          }
          if (f2)
          {
            return (func_801A4108(D_801CA13D)) ? (1) : (0);
          }
          return 1;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0x25)) < 5)
      {
        long f2;
        if ((trackPoints[D_801C6BB8].f1 == 0x3c) && (((u8) (key1 - 0x20)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C6BB8].f1 == 0x0) && (((u8) (key1 - 0x25)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f2 = 1;
        }
        r1 = func_801A4108(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (r1 && r2)
        {
          if (f1)
          {
            return (func_801A4108(D_801C7AB9)) ? (3) : (1);
          }
          if (f2)
          {
            return (func_801A4108(D_801C7AB9)) ? (3) : (2);
          }
          return 3;
        }
        if (r1)
        {
          if (f1)
          {
            return 1;
          }
          if (f2)
          {
            return (func_801A4108(D_801C7AB9)) ? (1) : (0);
          }
          return 1;
        }
        return 0;
      }
      else
        if (((s8) key0) == 0x2a)
      {
        u8 f4;
        if ((trackPoints[D_801C707A].f1 == 0x3c) && (((u8) (key2 - 0x25)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f3 = 1;
        }
        else
          if ((trackPoints[D_801C707A].f1 == 0x0) && (((u8) (key2 - 0x20)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f4 = 1;
        }
        if (!func_801A4108(D_801C707A))
        {
          return 0;
        }
        if (f3)
        {
          return (func_801A4108(D_801CA13D)) ? (3) : (1);
        }
        if (f4)
        {
          return (func_801A4108(D_801CA13D)) ? (3) : (2);
        }
        return 3;
      }
      else
        if (((s8) key0) == 0x2b)
      {
        u8 f2;
        if ((trackPoints[D_801C6BB8].f1 == 0x3c) && (((u8) (key1 - 0x20)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C6BB8].f1 == 0x0) && (((u8) (key1 - 0x25)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f2 = 1;
        }
        if (!func_801A4108(D_801C6BB8))
        {
          return 0;
        }
        if (f1)
        {
          return (func_801A4108(D_801C7AB9)) ? (3) : (1);
        }
        if (f2)
        {
          return (func_801A4108(D_801C7AB9)) ? (3) : (2);
        }
        return 3;
      }
      else
        if (((s8) key0) == 0x2c)
      {
        u8 f4;
        if ((trackPoints[D_801C707A].f1 == 0x3c) && (((u8) (key2 - 0x1b)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f3 = 1;
        }
        else
          if ((trackPoints[D_801C707A].f1 == 0x0) && (((u8) (key2 - 0x16)) < 5))
        {
          func_801C3634(D_801C707A, &sp10, &D_801CA13D);
          if (D_801C6BB8 != trackInfo->b2)
          {
            if ((trackPoints[D_801C6BB8].x == trackPoints[D_801CA13D].x) && (trackPoints[D_801C6BB8].y == trackPoints[D_801CA13D].y))
            {
              D_801CA13D = sp10;
            }
          }
          f4 = 1;
        }
        if (!func_801A4040(D_801C707A))
        {
          return 0;
        }
        if (f3)
        {
          return (func_801A4040(D_801CA13D)) ? (3) : (1);
        }
        if (f4)
        {
          return (func_801A4040(D_801CA13D)) ? (3) : (2);
        }
        return 3;
      }
      else
        if (((s8) key0) == 0x2d)
      {
        u8 f2;
        if ((trackPoints[D_801C6BB8].f1 == 0x3c) && (((u8) (key1 - 0x16)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f1 = 1;
        }
        else
          if ((trackPoints[D_801C6BB8].f1 == 0x0) && (((u8) (key1 - 0x1b)) < 5))
        {
          func_801C3634(D_801C6BB8, &D_801C7AB9, &sp10);
          if (D_801C707A != trackInfo->b2)
          {
            if ((trackPoints[D_801C707A].x == trackPoints[D_801C7AB9].x) && (trackPoints[D_801C707A].y == trackPoints[D_801C7AB9].y))
            {
              D_801C7AB9 = sp10;
            }
          }
          f2 = 1;
        }
        if (!func_801A4040(D_801C6BB8))
        {
          return 0;
        }
        if (!func_801A4040(D_801C707A))
        {
          return 0;
        }
        if (f1)
        {
          return (func_801A4040(D_801C7AB9)) ? (3) : (1);
        }
        if (f2)
        {
          return (func_801A4040(D_801C7AB9)) ? (3) : (2);
        }
        return 3;
      }
      return 0;
    }
  }
  else
    if (trackPoints[D_801CA130].f1 == 0x78)
  {
    u8 r2;
    if ((D_801C6BB8 == 0xFF) || (D_801C707A == 0xFF))
    {
      return 0;
    }
    {
      if (((u8) key0) < 5)
      {
        u8 r2;
        f1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4040(D_801C707A);
        if (f1 && r2)
        {
          return 2;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0x5)) < 5)
      {
        u8 r2;
        f1 = func_801A4108(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (f1 && r2)
        {
          return 2;
        }
        return 0;
      }
      else
        if (((u8) (key0 - 0xa)) < 12)
      {
        u8 r2;
        f1 = func_801A4040(D_801C6BB8);
        r2 = func_801A4108(D_801C707A);
        if (f1 && r2)
        {
          return 2;
        }
        return 0;
      }
      else
        if (((s8) key0) == 0x2a)
      {
        u8 r1;
        r1 = func_801A4108(D_801C707A);
        if ((D_801C6BB8 == trackInfo->b2) && r1)
        {
          return 2;
        }
        return 0;
      }
      else
        if (((s8) key0) == 0x2b)
      {
        return (func_801A4108(D_801C6BB8) && (D_801C707A == trackInfo->b2)) ? (2) : (0);
      }
      else
        if (((s8) key0) == 0x2c)
      {
        u8 r1;
        r1 = func_801A4040(D_801C707A);
        if ((D_801C6BB8 == trackInfo->b2) && r1)
        {
          return 2;
        }
        return 0;
      }
      else
        if (((s8) key0) == 0x2d)
      {
        return (func_801A4040(D_801C6BB8) && (D_801C707A == trackInfo->b2)) ? (2) : (0);
      }
      return 0;
    }
  }
  return 0;
}

