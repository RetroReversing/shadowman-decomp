s32 func_80113AD0(void);

s32 func_80267AF4(void) {
    s32 r;
    switch (func_80113AD0() % 5) {
    case 0:
    default:
        r = 0x4F;
        break;
    case 1:
        r = 0xAC;
        break;
    case 2:
        r = 0xAD;
        break;
    case 3:
        r = 0xAE;
        break;
    case 4:
        r = 0xAF;
        break;
    }
    return r;
}
