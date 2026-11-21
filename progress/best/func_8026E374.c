typedef struct { s32 a; s32 b; } T;
extern s32 D_80031114;
extern T D_80031118[];
extern u8 D_80075F21;
extern s32 D_80074BB0;
extern s32 D_8005E9CC;
extern void func_80109D80(s32);
extern void func_80275FB8(void);
extern void func_80251E40(void);
extern void func_802D1834(void);
extern void func_802D18FC(void);
extern void func_802D2B40(s32);

void func_8026E374(s32 arg0) {
    T *t;
    func_80109D80(arg0);
    if (D_80031114 != -1) {
        t = &D_80031118[arg0];
        D_80075F21 = ((u8 *)t)[7];
        if (D_80074BB0 == t->a) {
            func_80275FB8();
            if (D_80074BB0 == 10) {
                func_80251E40();
            }
            func_802D1834();
            func_802D18FC();
            D_80031114 = -1;
            func_802D2B40(t->b);
        } else {
            D_8005E9CC = t->a;
            D_80031114 = -1;
        }
    }
}
