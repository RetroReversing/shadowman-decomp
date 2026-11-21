extern void func_80227064(int, int, void *);
void func_8022702C(int arg0, int arg1, ...) {
int *__repair_home1 = &arg1;

    char *ap;
    ap = (char *)__builtin_next_arg((*__repair_home1));
    func_80227064(arg0, (*__repair_home1), &ap);
    ap = 0;
}
