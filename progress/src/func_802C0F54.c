extern void func_80109A1C(s32);
extern void func_80246F50(s32, s32);
extern void func_80268E6C(s32, s32);
extern void func_8026B618(s32, s32);
extern void func_802A6548(void *, s32);
extern void func_802C074C(s32, s32, s32);
typedef struct { s32 a; s32 b; } P2;
extern P2 D_80075508;
extern P2 D_80036B10;
typedef struct { s32 a; s32 b; s32 c; s32 d; s32 e; s32 f; u16 g; u16 h; } P3;
extern P3 D_8002DBD0;
typedef struct { s16 a; s16 b; s16 c; s16 d; s16 e; s16 f; } P4;
extern P4 D_80075F58;
extern char D_8007558C;

void func_802C0F54(s16 arg0) {
    if (D_80075508.b != 0) {
        func_80109A1C(D_80075508.b);
        D_80075508.b = 0;
        func_802A6548(&D_8007558C, 0x23);
    }
    if (D_80036B10.b != 0) {
        func_80109A1C(D_80036B10.b);
        D_80036B10.b = 0;
    }
    func_8026B618(1, 0);
    if (D_8002DBD0.b != 7) {
        func_80268E6C(4, -0x2710);
    }
    if (D_8002DBD0.f != -1) {
        D_80075F58.b = arg0;
        D_80075F58.f = *(u16 *)((char *)&D_8002DBD0 + 0x16);
    }
    func_80246F50(-1, 1);
    func_802C074C(-1, 1, 0x50);
}
