typedef struct N { struct N *next; int pad; struct E *e; } N;
typedef struct L { N *head; } L;
extern L *D_8002D498;
extern char *D_8006A4FC;
extern signed char D_dummy;
extern int func_80231D44(float, float, int, void *);
unsigned short func_80275C80(unsigned short arg0) {
    N *n;
    if (D_8002D498 != 0) {
        for (n = D_8002D498->head; n != 0; n = n->next) {
            char *e = (char *)n->e;
            if (e != 0 && *(short *)(e + 0x10) == arg0) {
                char *a = *(char **)(e + 0x14);
                char *p = D_8006A4FC;
                if (*(int *)(a + 0xC) == *(signed char *)(p + 0x71)) {
                    if (func_80231D44(*(float *)(p + 0x24), *(float *)(p + 0x28) + 70.0f, *(int *)(p + 0x2C), a + 0x10)) {
                        return *(unsigned short *)(e + 0xC);
                    }
                }
            }
        }
    }
    return 0xFFFF;
}
