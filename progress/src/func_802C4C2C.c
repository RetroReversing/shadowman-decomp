s32 func_80108AAC();
s32 func_80108B30();
s32 func_8023DF7C();
s32 func_80268AF8();
s32 func_80268E6C();
extern char D_80075518[];
extern char D_80075568[];

void func_802C4C2C(void) {
    s32 snd;
    if (func_80108B30() == 0) {
        switch (func_80268AF8(0)) {
        case 0x1388:
            snd = 0x56;
            break;
        case 0x1770:
            snd = 0x57;
            break;
        case 0x1B58:
            snd = 0x58;
            break;
        case 0x1F40:
            snd = 0x59;
            break;
        case 0x2328:
            snd = 0x5A;
            break;
        default:
            goto tail;
        }
        func_80108AAC(snd, 0x3F, 0x7FFF);
tail:
        func_8023DF7C(D_80075568, D_80075518, 0, 0xA, 0x28, 2);
        func_80268E6C(0, 0x3E8);
    }
}
