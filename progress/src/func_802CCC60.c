typedef struct { char pad0[0x16]; s16 f16; } T518;
typedef struct { char pad0[0xC]; f32 x, y, z; } T568;
extern T518 D_80075518;
extern T568 D_80075568;
extern s32 D_80072BD8;
extern s32 D_80072C18;
void func_8023E724(T518 *, s32, s32 *, f32 *);

void func_802CCC60(void) {
    s32 zero[3];
    f32 a[3];
    f32 b[3];
    f32 s;
    if (D_80075518.f16 >= 0x65) {
        zero[0] = 0;
        zero[1] = 0;
        zero[2] = 0;
        func_8023E724(&D_80075518, D_80072C18, zero, b);
        func_8023E724(&D_80075518, D_80072BD8, zero, a);
        s = *(f32 *)0x218764;
        D_80075568.x += (b[0] - a[0]) * s;
        D_80075568.y += (b[1] - a[1]) * s;
        D_80075568.z += (b[2] - a[2]) * s;
    }
}
