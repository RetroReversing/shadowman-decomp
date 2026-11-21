typedef struct N { struct N *next; struct N *prev; char *owner; } N;
extern N **D_80030C5C;

void func_8027363C(N *a, s32 i) {
    N *p = a->prev;
    N *n = a->next;
    char *o = a->owner;
    N *h = D_80030C5C[i];
    p->next = n;
    a->next->prev = a->prev;
    a->next = h->next;
    a->prev = h;
    h->next->prev = a;
    h->next = a;
    o[0x71] = i;
}
