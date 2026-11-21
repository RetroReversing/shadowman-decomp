/* identical to func_80237570 (matched), with its names changed by decompdecomp */
extern void *D_80069738;
void func_80237470(void *);
void func_80236DB8(void *);
int func_80236B20(void *);
void func_80237054(void *);
void func_802375D4(char *a) {
    if (*(void **)(a + 0x30) != D_80069738) {
        func_80237470(a);
    } else {
        func_80236DB8(a);
        if (func_80236B20(a)) {
            func_80237054(a);
        }
    }
}
