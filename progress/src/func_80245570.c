typedef struct { int pad0[2]; int state; struct { char pad[0x6C]; struct { char p[0x38]; unsigned char b; char q[11]; unsigned flags; } *e; } *c; } S;
int func_80245684(S *);
void func_80245614(S *);
void func_802D2B40(int);
int func_80245570(S *a) {
    switch ((unsigned)a->state) {
    case 1:
        if (func_80245684(a) != 0) {
            if (a->c->e->flags & 0x10010000) {
                if (a->c->e->b == 0) {
                    func_802D2B40(8);
                }
            }
            a->state = 3;
        }
        break;
    case 0:
        break;
    case 2:
        break;
    case 3:
        func_80245614(a);
        break;
    }
    return 1;
}
