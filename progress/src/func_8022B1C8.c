extern f32 func_80113BE0(f32);
extern s32 func_80116EB0(void *, void *, s32);
extern u8 D_8002D1C0[];
extern u8 D_8005901C[];
extern struct { u8 pad[0x2E]; s8 a; u8 pad2; s16 b; u8 pad3[0x6]; f32 f38, f3c, f40, f44, f48; } D_80059738;
extern u16 D_80075534;

void func_8022B1C8(void *arg0) {
    f32 a, b, c, d;
    if (!(D_80075534 & 4)) {
        a = *(f32 *)((u8 *)arg0 + 0xC);
        D_80059738.f38 = a;
        b = *(f32 *)((u8 *)arg0 + 0x10);
        D_80059738.f3c = b;
        c = *(f32 *)((u8 *)arg0 + 0x14);
        D_80059738.f40 = c;
        if (!(b <= c)) c = b;
        c = a / c;
        D_80059738.a = 0;
        d = *(f32 *)0x201E50 / c;
        D_80059738.f44 = d;
        D_80059738.f48 = d;
        D_80059738.b = (s32)(D_80059738.f40 - func_80113BE0(d) * D_80059738.f40);
        func_80116EB0(D_8005901C, D_8002D1C0, 1);
    }
}
