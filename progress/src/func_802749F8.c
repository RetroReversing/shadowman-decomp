void func_80274A3C(void);

void func_802749F8(int *arg0) {
    if (!(arg0[0x12] & 0x100)) {
        arg0[0x11] |= 0x10000000;
        arg0[0x11] |= 0x10000;
    } else {
        func_80274A3C();
    }
}
