extern int D_80074C10;
typedef struct { char pad[0x28]; int *p; char pad2[0xE]; unsigned short n; } S;
void func_8025DD44(S *s) {
    unsigned i;
    int *q = s->p;
    for (i = 0; i < s->n; i++) {
        q[1] = D_80074C10;
        q += 2;
    }
}
