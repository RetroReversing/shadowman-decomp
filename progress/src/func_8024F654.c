extern int func_80109918(int, int, int);
extern void *func_8025BA08(void *, void *, int, int, int, void *);
extern char D_2068FC;
extern u8 D_8006A840;

int func_8024F654(void *arg0) {
    void *p = func_8025BA08((char *)arg0 + 0x24, (char *)arg0 + 0x18, 0x111, 0, 0, &D_2068FC);
    if (p != NULL) {
        func_80109918(*(int *)((char *)p + 8) + 0x24, 0x7F, 0x194);
        D_8006A840 = 0xCD;
        *(u16 *)((char *)arg0 + 0x7E) |= 0x1000;
        return 1;
    }
    return 0;
}
