extern s32 func_80113AD0();
extern void func_8027003C();
extern void func_8027006C(void *);
extern s32 func_8027206C(s32, s32);
typedef struct { u8 pad0[0x1C]; f32 f1C; } A;
extern A *D_8006A4FC;
extern u8 *D_8007AFF8;

void func_8027CD30(void) {
    s32 r;
    f32 a, b;
    func_8027003C();
    r = func_80113AD0();
    a = *(f32 *)0x2146D4;
    b = *(f32 *)0x2146D8;
    D_8006A4FC->f1C = (f32)(r % 360);
    *(s16 *)(D_8007AFF8 + 0xA8) = 0x96;
    *(f32 *)(D_8007AFF8 + 0xB0) = a;
    *(f32 *)(D_8007AFF8 + 0xBC) = b;
    *(s16 *)(D_8007AFF8 + 0xAC) = 2;
    func_8027206C(0, 0);
    *(s16 *)(D_8007AFF8 + 0x90) = 0;
    *(s16 *)(D_8007AFF8 + 0x9E) = 5;
    *(u32 *)(D_8007AFF8 + 0x44) |= 0x20004;
    func_8027006C(D_8007AFF8);
}
