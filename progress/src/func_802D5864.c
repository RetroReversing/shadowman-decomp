s32 func_802D5D18();
struct E { int a; int b; int c; int d; };
extern struct E D_8007C8B0[];
extern s32 D_8007C8F0;
extern s32 D_8007C8F8;

void func_802D5864(s32 arg0, s32 arg1) {
    s32 old;
    D_8007C8F8 = (D_8007C8F8 + 1) % 4;
    old = D_8007C8F0;
    D_8007C8F0 = (old + 1) % 4;
    D_8007C8B0[D_8007C8F8].a = arg1;
    D_8007C8B0[D_8007C8F8].b = arg0;
    D_8007C8B0[D_8007C8F8].c = 0;
    D_8007C8B0[D_8007C8F8].d = func_802D5D18(&D_8007C8B0[D_8007C8F8], arg1, old);
}
