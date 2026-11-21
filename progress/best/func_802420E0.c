typedef struct { char pad[0xC]; s8 f; } S;
extern int D_8005E90C;
extern char D_8006A710[];
s8 func_8023646C();
s32 func_8023648C();

void func_802420E0(s32 arg0) {
    s32 *p;
    s32 t2;
    s32 t0;
    s32 t1;
    s32 v;
    s8 t;

    t0 = func_8023648C() - 1;
    v = t0;
    if ((t0 & 0xFFFF) != 0xFFFF) {
        do {
            t = func_8023646C(arg0);
            t2 = t & 0xFF;
            ((S *)(D_8006A710 + t2))->f = func_8023646C(arg0);
            t1 = v - 1;
            v = t1;
            p = (s32 *)((t2 * 0x10) + D_8005E90C);
            *p |= 0x800000;
        } while ((t1 & 0xFFFF) != 0xFFFF);
    }
}
