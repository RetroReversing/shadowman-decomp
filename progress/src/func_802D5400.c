typedef struct { char pad[0x64]; s32 f64; char pad2[0x18]; s32 f80; char pad3[4]; s32 f88; } Obj;
typedef struct { char pad[8]; Obj *p8; char pad2[8]; } R;
s32 func_80103B98(s32);
s32 func_8025BF10(s32);
extern R D_80045930[];

void *func_802D5400(char *arg0) {
    s32 t = *(s32 *)(arg0 + 4);
    if (t == 3 || t == 5 || t == 0xF || t == 0x13 || t == 0x12 || t == 0xD) {
        R *s0 = D_80045930;
        R *s1 = &s0[t];
        if (s1->p8 != 0) {
            s0 += 5;
            if (t == 5) {
                func_80103B98(s0->p8->f64);
                func_80103B98(s0->p8->f80);
                s0->p8->f64 = 0;
                s0->p8->f80 = 0;
            }
            func_8025BF10(s1->p8->f88);
            s1->p8 = 0;
        }
    }
    return arg0 + 8;
}
