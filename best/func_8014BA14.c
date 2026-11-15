s32 func_8014BA14(s32 arg0) {
    s32 v = 0;

    switch (arg0 & 0xFFFF) {
    case 0xD:
    case 0x115:
    case 0x116:
    case 0x117:
    case 0x118:
    case 0x409:
    case 0x506:
    case 0x507:
    case 0x612:
    case 0x613:
    case 0x614:
    case 0x70E:
        v = 1;
        break;
    case 0x2FFF:
    case 0x4FFF:
        v = 2;
        break;
    }
    return v & 0xFF;
}
