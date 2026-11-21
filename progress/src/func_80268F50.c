extern u8 D_8007DB7E;
extern s32 D_800458F0;
extern u8 func_8022DEA0(void);
extern void func_80269CE4(void);
extern void func_8026A1F8(void *);
extern void func_8026A38C(void *);
extern void func_8026A420(void *);
extern void func_8026A4B4(void *);
extern void func_8026A548(void *);
extern void func_80268C2C(void);

s32 func_80268F50(void *arg0) {
    if (D_8007DB7E == 0 && D_800458F0 == 0 && func_8022DEA0() == 0) {
        func_80269CE4();
        func_8026A1F8(arg0);
        func_8026A38C(arg0);
        func_8026A420(arg0);
        func_8026A4B4(arg0);
        func_8026A548(arg0);
        func_80268C2C();
        return 1;
    }
    return 0;
}
