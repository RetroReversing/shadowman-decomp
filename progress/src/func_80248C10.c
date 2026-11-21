typedef struct { char pad[0x50]; unsigned char b50; char pad2; short h52; } S;
extern S *D_8007BD48;
void func_8026E4CC(int, int);
void func_80248210(void *);
void func_80248C10(int *arg0) {
    S *p = D_8007BD48;
    if (p != 0) {
        switch (p->h52) {
        case 4:
            if (p->b50 != 10) return;
        case 10:
            func_8026E4CC(arg0[2], 0);
            func_80248210(arg0);
        }
    }
}
