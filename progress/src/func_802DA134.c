extern void func_8011BA20(char *, int, int);
extern char func_802DA048(int);

void func_802DA134(unsigned char *arg0, char *arg1) {
    unsigned char c;
    func_8011BA20(arg1, 0, 0x10);
    while ((c = *arg0++) != 0) {
        *arg1++ = func_802DA048(c);
    }
    *arg1 = 0;
}
