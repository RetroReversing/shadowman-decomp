extern int D_80069738;
void func_80237470(void *);
int func_80236B20(void *);
void func_80237054(void *);
void func_80237514(void *arg0) {
    if (*(int *)((char *)arg0 + 0x30) != D_80069738) {
        func_80237470(arg0);
    } else if (func_80236B20(arg0)) {
        func_80237054(arg0);
    }
}
