typedef struct { s8 a, b, c; } T3;
extern T3 D_2D70E0;
extern u8 D_8007DC06;
extern void func_8022953C(void *);
extern s32 func_80229AAC(s32);

void func_802DAB7C(void *arg0) {
    T3 buf = D_2D70E0;
    u8 i = func_80229AAC(*(s32 *)((u8 *)arg0 + 0x28)) - 1;
    D_8007DC06 = ((s8 *)&buf)[i];
    func_8022953C(arg0);
}
