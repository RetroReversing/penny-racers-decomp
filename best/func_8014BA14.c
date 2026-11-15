u8 func_8014BA14(u16 arg0) {s32 v=0;
switch(arg0) {
case 0xD:v=1;break;
case 0x115 ... 0x118:v=1;break;
case 0x409:v=1;break;
case 0x506 ... 0x507:v=1;break;
case 0x612 ... 0x614:v=1;break;
case 0x70E:v=1;break;
case 0x2FFF: case 0x4FFF:v=2;break;
}return v;}
