u16 func_802DEC54(u8 *p, s32 n) {
    int sum;
    s32 i;
    for (i = sum = 0; i < n; i++) {
        sum += *p++;
        sum &= 0xFFFF;
    }
    return sum;
}
