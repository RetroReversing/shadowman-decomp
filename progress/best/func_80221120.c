s16 func_80221120(u8 *arg0, s32 arg1, u8 *arg2) {
    s32 sum = 0;
    s32 c;

    while (arg1-- != 0) {
        c = *arg2++;
        if (c == 0 || c == 10) {
            break;
        }
        sum += arg0[c - 0x1F] + 1;
    }
    return sum;
}
