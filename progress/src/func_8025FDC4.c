struct E { char p[8]; s16 h; char q[0x2a]; };
extern struct E D_209890[];
extern s32 D_80074BB0;
extern u8 D_80074C32;

void func_8025FDC4(void) {
    if (D_209890[D_80074BB0].h == 0) {
        D_80074C32 = 1;
    } else {
        D_80074C32 = 2;
    }
    if ((u32)(D_80074BB0 - 4) >= 0xC) {
        D_80074C32 |= 4;
    }
}
