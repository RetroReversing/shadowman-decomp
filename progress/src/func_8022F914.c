extern int D_80052764;
void func_8022F7D0(void *, int);
void func_8022F7F8(void *);
void func_8022F914(void *arg0) {
    unsigned short f = *(unsigned short *)((char *)arg0 + 6);
    if (!(f & 2)) {
        if (f & 1) {
            func_8022F7F8(arg0);
        } else {
            func_8022F7D0(arg0, 0);
        }
        *(int *)((char *)arg0 + 0x1C) = D_80052764;
    }
}
