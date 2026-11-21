typedef struct { char pad[0x16]; s16 a; s32 b; } S;
s32 func_802393D4();
extern s32 D_80074BA0;
extern s32 D_80074BA8;

void func_8025BF10(S *arg0) {
    s32 v;
    arg0->a = 0x10;
    if (arg0->b == 1) {
        v = D_80074BA0;
    } else {
        v = D_80074BA8;
    }
    func_802393D4(arg0, v);
}
