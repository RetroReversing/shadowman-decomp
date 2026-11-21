typedef struct { s32 x, y, z; } V;
typedef struct { s32 f0; s32 pad[2]; V v; s32 f18; } B;
typedef struct { char pad[0x24]; V v; char pad2[0x3C]; B *f6c; } A;
extern A *D_80072CAC;
extern s32 *D_80072D10;
extern s32 D_80074BB0;
extern s8 D_80075F21;

void func_80250DC4(void) {
    if ((((u32)(D_80074BB0 - 6) < 3U) || (D_80074BB0 == 0xA)) && (D_80075F21 == 1)) {
        s32 *p = D_80072D10;
        A *a = D_80072CAC;
        *p = 0;
        if (a != NULL) {
            B *b = a->f6c;
            b->f18 = 0;
            b->f0 = 0;
            a->v = b->v;
        }
    }
}
