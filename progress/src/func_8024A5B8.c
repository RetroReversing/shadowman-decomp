typedef struct { int state; int handle; } Inner;
typedef struct { char pad[0x8]; int a; } Dummy;
extern int func_8026E2F4(int);
extern void func_8024ED8C(void *);
extern int func_80109918(void *, int, int);

void func_8024A5B8(void *arg0) {
    char *obj = *(char **)((char *)arg0 + 8);
    int *s = *(int **)(obj + 0x6C);
    if (s[0] == 0) {
        s[0] = *(short *)(obj + 0x7A) + 1;
        *(short *)(obj + 0x7A) = 0;
    }
    if (func_8026E2F4(0xA7) != 0) {
        switch (s[0]) {
        case 1:
            s[0] = 4;
            func_8024ED8C(arg0);
            s[1] = 0;
            break;
        case 2:
            s[0] = 4;
            func_8024ED8C(arg0);
            s[1] = func_80109918(obj + 0x24, 0x7F, -1);
            break;
        case 3:
            s[0] = 4;
            func_8024ED8C(arg0);
            s[1] = func_80109918(obj + 0x24, 0x7F, 0x166);
            break;
        }
    }
}
