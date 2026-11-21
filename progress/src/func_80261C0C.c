s32 func_80239398();
void *func_8023C3E0();
void func_8023C43C();
s32 func_80261408();
s32 func_8026E67C();
s32 func_802D0B28();
extern char D_229320[];
extern s32 D_8005EA0C;
extern s32 D_8005EA14;

typedef struct { u8 pad0[4]; f32 x, y, z; u8 pad10[0xE]; u16 h1E; u8 pad20[4]; s16 h24; } A;
typedef struct { u8 pad0[0xC]; f32 a, b; u8 pad14[0x10]; f32 x, y, z; u8 pad30[0x41]; u8 b71; u8 pad72[0xA]; u16 h7C; u8 pad7E[10]; s32 w88; } B;

s32 func_80261C0C(A *arg0, s32 arg1) {
    B *s0;
    s0 = func_8023C3E0();
    func_802D0B28(D_8005EA14, arg0->h24, 1);
    s0->b71 = *((u8 *)arg0 + 0x25);
    s0->h7C = arg0->h1E;
    s0->x = arg0->x;
    s0->y = arg0->y;
    s0->z = arg0->z;
    if (func_8026E67C(s0) != -1) {
        func_8023C43C(s0);
        return 0;
    }
    s0->a = *(s32 *)((u8 *)arg0 + 0x18);
    s0->b = *(s32 *)((u8 *)arg0 + 0x18);
    s0->w88 = func_80239398(*(s32 *)((D_8005EA0C * 4) + func_80261408()), s0, arg1, D_229320, 0x20000);
    return 1;
}
