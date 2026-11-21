s32 func_80233D40(s32);
extern s32 D_8005E9FC;

void func_802D170C(s32 *arg0, s32 arg1) {
    do {
        arg1 -= 1;
        arg0[1] = func_80233D40(D_8005E9FC);
        arg0 += 2;
    } while (arg1 != 0);
}
