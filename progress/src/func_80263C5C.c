typedef struct E { s32 a; s16 b; s16 pad; s32 c; } E;
s32 func_80230EC0();
void func_80263C5C(E *e) {
    while (e->a != 0) {
        e->c = func_80230EC0(e->a, e->b);
        e++;
    }
}
