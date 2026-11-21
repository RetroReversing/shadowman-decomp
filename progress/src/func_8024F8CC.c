typedef struct { char pad[0x71]; s8 k; } E_;
typedef struct { char pad[8]; E_ *e; } O_;
void func_8026E26C(s32);
void func_80248210(void *);

void func_8024F8CC(O_ *arg0) {
    s8 k = arg0->e->k;
    if (k == 1) {
        func_8026E26C(0x9B);
    } else if (k == 9) {
        func_8026E26C(0x9C);
    }
    func_80248210(arg0);
}
