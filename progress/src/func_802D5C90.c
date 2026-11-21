extern int D_80045C80[];
int func_8011BF70(int, int);

unsigned func_802D5C90(int arg0, int arg1) {
    unsigned r = 0;
    unsigned i = 0;
    int *p = D_80045C80;
    do {
        if (func_8011BF70(arg0, p[0]) == 0) {
            p[1] = arg1;
            r = 1;
        }
        i++;
        p += 2;
    } while (i < 0x4B && r == 0);
    return r;
}
