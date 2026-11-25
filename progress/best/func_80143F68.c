extern int D_80168BB0;
extern short D_8006F9E8;
void func_80214860(void);
void func_80214260(void);
void func_802144DC(void);
void func_801E0D38(void);
void func_8015B82C(void);
void func_80205FB0(void);
void func_80206104(void);
void func_80206770(void);
void func_80206830(void);
void func_80206F20(void);
void func_80207014(void);
void func_80207EC0(void);
void func_80208374(void);
void func_8020C7A0(void);
void func_8020C948(void);
void func_8020E7D0(void);
void func_8020EE10(void);
void func_80211FD0(void);
void func_80212350(void);
void func_80210050(void);
void func_80210784(void);
void func_80212360(void);
void func_802124B0(void);
void func_80214A50(void);
void func_80214B84(void);
void func_80215700(void);
void func_80215800(void);
void func_80217660(void);
void func_802178AC(void);
void func_80218840(void);
void func_80218FBC(void);
unsigned long long func_80143F68(void)
{
  func_80214860();
  switch (D_80168BB0)
  {
    case 0:
      func_80214260();
      D_80168BB0 = 0x23;
      func_802144DC();
      break;

    case 1:
      func_801E0D38();
      D_80168BB0 = 0x33;
      break;

    case 2:
      func_8015B82C();
      D_80168BB0 = 0x29;
      break;

    case 3:
      func_80205FB0();
      D_80168BB0 = 1;
      func_80206104();
      break;

    case 4:
      func_80206770();
      D_80168BB0 = 3;
      func_80206830();
      break;

    case 5:
      func_80206F20();
      D_80168BB0 = 5;
      func_80207014();
      break;

    case 6:
      func_80207EC0();
      D_80168BB0 = 7;
      func_80208374();
      break;

    case 7:
      func_8020C7A0();
      D_80168BB0 = 0xD;
      func_8020C948();
      break;

    case 8:
      D_80168BB0 = 0xF;
      break;

    case 9:
      func_8020E7D0();
      D_80168BB0 = 0x11;
      func_8020EE10();
      break;

    case 10:
      func_80211FD0();
      D_8006F9E8 = 0x14;
      break;

    case 11:
      func_80212350();
      break;

    case 12:
      func_80210050();
      D_80168BB0 = 0x13;
      func_80210784();
      break;

    case 13:
      D_80168BB0 = 0x15;
      break;

    case 14:
      D_80168BB0 = 0xB;
      break;

    case 15:
      func_80212360();
      D_80168BB0 = 0x1D;
      func_802124B0();
      break;

    case 16:
      func_80214A50();
      D_80168BB0 = 0x27;
      func_80214B84();
      break;

    case 17:
      func_80215700();
      D_80168BB0 = 0x2B;
      func_80215800();
      break;

    case 18:
      if (1)
    {
      func_80217660();
      D_80168BB0 = 0x2B;
      func_802178AC();
    }
      break;

    case 19:
      func_80218840();
      D_80168BB0 = 0x2F;
      break;

    case 0x33:
      func_80218FBC();
      D_80168BB0 = 0x31;
      break;

    default:
      break;

  }

}

