typedef struct N { char pad[0x34]; struct N *next; } N;
typedef struct H { int pad; N *head; N *tail; } H;
int func_80229AAC(H *a) {
    int n = 1;
    N *p;
    for (p = a->head; p != 0 && p != a->tail; p = p->next) {
        n++;
    }
    return n;
}
