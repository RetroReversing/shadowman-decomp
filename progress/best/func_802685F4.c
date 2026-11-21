struct O { char p[0x7E]; u16 f; char q[8]; s32 w; };
struct E { s32 a; s32 b; s32 c; };
extern struct E D_80044EB0[];
void func_80268668(void);

void func_802685F4(void) {
    s32 i = 0;
    struct E *e = D_80044EB0;
    do {
        struct O *o;
        if (*(s32 *)((char *)e + 0x1C) == -1) return;
        o = *(struct O **)((char *)e + 0x20);
        i++;
        if (o != 0 && o->w != 0) {
            if (o->f & 0x100) {
                func_80268668();
                return;
            }
        }
        e++;
    } while (i < 5);
}
