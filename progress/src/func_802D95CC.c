typedef struct {
    char pad0[0x3E4];
    s32 f3E4;
    char pad1[4];
    u8 f3EC;
    u8 f3ED;
    u8 f3EE;
    u8 f3EF;
} S;
typedef struct { char pad[0x28]; struct { s32 pad[2]; s32 f8; } *p; } A;
s32 func_80229AD8(void *, s32);
extern S D_8007DC30;

void func_802D95CC(A *arg0, s32 arg1) {
    s32 v;

    v = D_8007DC30.f3ED;
    D_8007DC30.f3E4 = arg1;
    if (D_8007DC30.f3EC != 0) {
        v += D_8007DC30.f3EF;
    }
    arg0->p->f8 = func_80229AD8(arg0->p, v);
}
