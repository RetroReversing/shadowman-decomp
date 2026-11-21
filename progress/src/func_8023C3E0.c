extern char *D_8006A4C0;
int func_801043F8(int, int, int);
void func_8011BA20(int, int, int);
char *func_8023C3E0(void) {
    char *r = D_8006A4C0;
    if (r != 0) {
        D_8006A4C0 = *(char **)(r + 0x88);
    } else {
        r = (char *)func_801043F8(0x8C, 2, 0);
    }
    func_8011BA20((int)r, 0, 0x8C);
    return r;
}
