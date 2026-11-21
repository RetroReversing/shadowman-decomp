typedef struct { s32 x; f32 y; s32 z; } V;
typedef struct { u8 pad0[0x66]; u8 f66; u8 pad1[0x144-0x67]; V v; } B;
typedef struct { u8 pad0[0x10C]; s32 f10c; } A;
extern A *D_8007AFF8;
extern B *D_8007B0C0;
s32 func_8010E8F0(V *, V *, f32);
void func_8023E724(s32, s32, V *, V *);

void func_80278DA0(void) {
    V in;
    V out;
    in.x = 0;
    in.z = 0;
    *(f32 *)&in.y = *(f32 *)0x214378;
    func_8023E724(D_8007AFF8->f10c, 0x1B, &in, &out);
    if (D_8007B0C0->f66 == 0) {
        if ((u8)func_8010E8F0(&out, &D_8007B0C0->v, 30.000002f)) {
            D_8007B0C0->f66 = 1;
        }
    }
    D_8007B0C0->v = out;
}
