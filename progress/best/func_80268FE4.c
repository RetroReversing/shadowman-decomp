typedef struct { char pad[4]; char *q; } Q;
typedef struct { f32 x, y; char pad[8]; Q *q; char pad2[0x54]; s32 n; } S;
extern S D_80075AA8;
extern s32 D_8002C240;
extern char D_800756A0[];
void func_802691D0(void);
void func_802692DC(void);
void func_80269894(void);
void func_8026A5E8(f32, f32, s32, s32, char *, char *, s32);

s32 func_80268FE4(void) {
    S *p;
    f32 t, c;
    func_802691D0();
    func_802692DC();
    func_80269894();
    p = &D_80075AA8;
    t = (f32)p->n * *(f32 *)0x20E1F0;
    c = *(f32 *)0x20E1F4;
    if (c <= t) {
        func_8026A5E8(p->x, p->y, 0x40, 0x40, p->q->q + 0x200, D_800756A0 + (D_8002C240 << 9), ((s32)(t - c) | 0x80000000) & 0xFF);
        return 1;
    }
    return (u8)(s32)t;
}
