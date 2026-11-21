extern int func_80261408(void);
extern int func_80260B50(void);
extern void func_80242ED8(void);
extern void func_80242F60(void);
extern void func_80242FD8(void);
extern int D_8002D480;
extern int D_8002D484;

int func_802429C0(void) {
    if (func_80261408() != 0) {
        if (func_80260B50() != 0) {
            D_8002D480 = 0;
            D_8002D484 = 0;
            func_80242ED8();
            func_80242F60();
            func_80242FD8();
            return 1;
        }
    }
    return 0;
}
