typedef struct { char pad[0x24]; f32 a; f32 b; s32 c; } A;
typedef struct { char pad[0x24]; s32 a; f32 b; f32 c; } B;
f32 func_802701A4(f32, f32, s32, s32, f32, f32, f32);
s32 func_80271F88(s32, s32);
void func_80270090(u8);
extern A D_80075568;
extern B *D_8006A4FC;
extern char *D_8007AFF8;

void func_8027F250(void) {
    A *p = &D_80075568;
    B *q = D_8006A4FC;
    if (func_802701A4(p->a, p->b, p->c, q->a, q->b, q->c, *(f32*)0x2148D4) != *(f32*)0x2148D8) {
        func_80271F88(1, 0xDC);
        *(s16*)(D_8007AFF8 + 0x92) = 2;
        func_80270090(3);
    }
}
