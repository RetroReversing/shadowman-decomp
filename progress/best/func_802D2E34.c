int func_8026E2F4(int);
int func_802D2E34(int *arg0) {
    while (*arg0 != 0) {
        if (*arg0 > 0) {
            if (func_8026E2F4(*arg0) == 0) return 0;
        } else {
            if (func_8026E2F4(~*arg0) != 0) return 0;
        }
        arg0++;
    }
    return 1;
}
