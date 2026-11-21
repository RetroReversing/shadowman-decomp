extern int func_80245684(void *);
extern void func_80245614(void *);
extern void func_8026E4CC(void *, int);
extern void func_80107D8C(int, int, int, int);
extern void func_80109318(int, void *, int);
extern void func_8023AFD0(void *, int);

int func_802434E0(void *arg0) {
    char *obj;
    int *p;
    switch (*(int *)((char *)arg0 + 8)) {
    case 1:
        if (func_80245684(arg0) != 0) {
            obj = *(char **)((char *)arg0 + 0xC);
            p = *(int **)(obj + 0x68);
            if (p != 0) {
                p[3] = 2;
                func_8026E4CC(obj, 0x7F);
            }
            switch (*(short *)(*(char **)(obj + 0x88) + 0x14)) {
            case 0x174:
                func_80109318(-1, obj + 0x24, 0);
                break;
            case 0x1AB:
                func_80107D8C(0, 0xB, 1, 0x7F);
                func_80109318(0x15A, obj + 0x24, 0);
                break;
            }
            func_8023AFD0(obj, 0);
            *(int *)((char *)arg0 + 8) = 3;
        }
        break;
    case 0:
    case 2:
        break;
    case 3:
        func_80245614(arg0);
        break;
    }
    return 1;
}
