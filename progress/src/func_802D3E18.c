typedef struct { s16 a; s16 b; s16 c; char pad2[0x2E]; s32 f34; } Q;
typedef struct { char pad[8]; void *p8; Q *pC; s32 f10; } R;
typedef struct { s32 f0; s32 f4; s32 f8; s32 fC; s32 f10; } A;
s32 func_8023DF7C(void *, void *, s32, s32, s32, s32);
extern R D_80045930[];

A *func_802D3E18(A *arg0) {
    D_80045930[arg0->f4].pC->f34 = arg0->f10;
    D_80045930[arg0->f4].pC->c = -1;
    D_80045930[arg0->f4].pC->b = -1;
    D_80045930[arg0->f4].pC->a = -1;
    func_8023DF7C(D_80045930[arg0->f4].p8, D_80045930[arg0->f4].pC, arg0->f8, 0xA, arg0->fC, 2);
    return arg0 + 1;
}
