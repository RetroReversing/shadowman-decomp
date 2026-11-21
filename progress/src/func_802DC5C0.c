typedef struct { char pad[4]; int a; int b; char pad2[0x59]; char c; } S;
int func_802DED94(void *);
int func_80115120(int, int, int, int, int);

void func_802DC5C0(S *arg0, int arg1, int arg2, char arg3) {
    int i;
    arg0->c = arg3;
    if (func_802DED94(arg0) == 0) {
        i = 0;
        arg1 = arg1 * 8;
        do {
            if (func_80115120(arg0->a, arg0->b, (arg1 + i) & 0xFFFF, arg2, 0) != 0) break;
            i++;
        } while (i < 8);
        arg0->c = 0;
        func_802DED94(arg0);
    }
}
