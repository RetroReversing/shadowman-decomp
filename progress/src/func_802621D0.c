typedef struct { s16 a; s8 b; s8 c; s8 d; s8 e; } E;
s8 func_8023646C(s32);
s16 func_8023648C(s32);
extern u32 D_80074CF0;
extern E D_80074E18[];

void func_802621D0(s32 arg0, u32 arg1) {
    D_80074CF0 = 0;
    if (arg1 != 0) {
        do {
            D_80074E18[D_80074CF0].a = func_8023648C(arg0);
            D_80074E18[D_80074CF0].b = func_8023646C(arg0);
            D_80074E18[D_80074CF0].c = func_8023646C(arg0);
            D_80074E18[D_80074CF0].d = func_8023646C(arg0);
            D_80074CF0++;
        } while (D_80074CF0 < arg1);
    }
}
