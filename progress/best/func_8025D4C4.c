typedef struct N { struct N *next; } N;
void func_8025BF58(N *);
extern s32 D_80052770[];
extern N **D_80074BA4;
extern N **D_80074BA8;

void func_8025D4C4(void) {
    N *n;
    N *a;
    N **t;
    if (D_80052770[1] != 0) {
        n = (N *)D_80074BA4;
        n = n->next;
        if (n != 0) {
            if (n->next != 0) {
                a = n;
                do {
                    n = a->next;
                    func_8025BF58(a);
                    a = n;
                } while (n->next != 0);
            }
        }
        t = D_80074BA4;
        D_80074BA4 = D_80074BA8;
        D_80074BA8 = t;
    }
}
