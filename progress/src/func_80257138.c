typedef struct N { struct N *next; struct N *prev; char *obj; char pad[8]; short idx; } N;
typedef struct E { char pad[0x18]; u16 flags; char pad2[0x2C-0x1A]; } E;
extern E D_203A10[];
extern N **D_80030C58;

void func_80257138(N *n, s32 arg1) {
    N *h;
    char *o = n->obj;
    if (!(D_203A10[n->idx].flags & 0x40)) {
        h = D_80030C58[arg1];
        n->prev->next = n->next;
        n->next->prev = n->prev;
        n->next = h->next;
        n->prev = h;
        h->next->prev = n;
        h->next = n;
    }
    o[0x71] = arg1;
}
