s32 func_80108B30(void);
s32 func_80113AD0(void);
void func_80108AAC(s32, s32, s32);

void func_80248C84(void) {
    s32 r;
    if (func_80108B30() == 0) {
        s32 x = func_80113AD0();
        r = x - (x / 3) * 3;
        switch (r) {
        case 0:
            func_80108AAC(0x1A, 0x3F, 0x7FFF);
            break;
        case 1:
            func_80108AAC(0x1B, 0x3F, 0x7FFF);
            break;
        case 2:
            func_80108AAC(0x1C, 0x3F, 0x7FFF);
            break;
        }
    }
}
