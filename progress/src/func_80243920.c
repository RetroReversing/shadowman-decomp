extern unsigned char D_8002D4A0;
extern int func_80245684(void *);
extern void func_80245614(void *);
int func_80243920(unsigned *arg0) {
    switch (arg0[2]) {
    case 0:
        break;
    case 1:
        if (func_80245684(arg0) != 0) {
            D_8002D4A0 = 7;
            arg0[2] = 3;
        }
        break;
    case 2:
        break;
    case 3:
        func_80245614(arg0);
        break;
    }
    return 1;
}
