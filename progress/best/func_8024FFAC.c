extern s32 D_8002DC88;
extern f32 D_80074BC0;
extern void func_80254840(void *, f32);
typedef struct { u8 pad[0x1C]; f32 y; } A;
typedef struct { u8 pad[4]; f32 y; } B;

void func_8024FFAC(void *arg0) {
    A *s0 = *(A **)((u8 *)arg0 + 8);
    B *s1 = *(B **)((u8 *)s0 + 0x6C);
    if (D_8002DC88 != 0) {
        func_80254840(s0, 90000.0f);
        if (s0->y < s1->y + 3.0f) {
            s0->y += D_80074BC0 * 0.5f;
        }
    } else {
        s1->y = s0->y;
    }
}
