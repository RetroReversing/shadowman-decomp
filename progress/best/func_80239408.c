typedef struct S { struct S *next; s32 b; } S;
extern void *func_801043F8(s32, s32, s32);
extern S *D_800698B4;

void func_80239408(void) {
    S *p;
    if (D_800698B4 != NULL) {
        D_800698B4 = D_800698B4->next;
        return;
    }
    p = func_801043F8(0x1C, 2, 0);
    p->next = 0;
    p->b = 0;
}
