extern s32 func_8022B588(void *);
extern s32 func_80116EB0(void *, void *, s32);
extern s32 func_80116D80(void *, void *, s32);
extern char D_80059738[];
extern char D_8007DC30[];

void func_802DAE88(void) {
    s32 sp10;
    char *p;
    s32 pad[4];
    s32 sp28[2];

    p = D_8007DC30;
    if (func_8022B588(p) != 0) {
        sp10 = 0;
    } else {
        sp10 = 1;
    }
    func_80116EB0(D_80059738, &sp10, 1);
    func_80116D80(D_8007DC30, sp28, 1);
}
