extern void func_8023DF7C(void *, void *, s32, s32, s32, s32);
extern void func_802C71E4(void);
extern void func_802CC190(void);
typedef struct { s32 a; s32 b; f32 c; } S30E40;
typedef struct { u8 pad[0x10]; f32 f; } S568;
typedef struct { u8 pad[0x2E]; s16 h; } S518;
extern s32 D_8002D420;
extern S30E40 D_80030E40;
extern f32 D_800458A8;
extern S518 D_80075518;
extern S568 D_80075568;

void func_802C75E4(void) {
    if (D_80075518.h == 0) {
        D_80030E40.a = 0;
    }
    if (D_80075568.f <= 0.0f) {
        if (D_80075518.h >= 7) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x93, 0xA, 0x28, 2);
        }
    }
    if (D_80030E40.a >= 0x19) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x93, 0xA, 0x4B, 2);
    }
    if (D_8002D420 & 0x80) {
        D_80030E40.c = D_800458A8;
    }
    func_802C71E4();
    func_802CC190();
}
