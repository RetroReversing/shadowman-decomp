/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

extern int D_8006A588;
extern float D_8006A594;
s32 func_8010B74C();
s32 func_802403D4();
extern char D_212078[];
extern void *D_8006A4FC;
extern char D_8006A510[];
extern void *D_8007AFF8;

s32 func_8010B5DC(void) {
    char *__base_D_212078;
    s32 sp10;
    f32 sp14;
    s32 sp18;
    s32 sp20;
    f64 sp24;
    s32 temp_a3;
    f32 temp_fv1;

    temp_a3 = M2C_FIELD(D_8006A4FC, const s32 *, 0x24);
    sp10 = temp_a3;
    sp14 = M2C_FIELD(D_8006A4FC, const f32 *, 0x28);
    sp18 = M2C_FIELD(D_8006A4FC, const s32 *, 0x2C);
    __base_D_212078 = D_212078;
    sp14 += M2C_FIELD(((M2C_FIELD(D_8007AFF8, const u8 *, 0x40) * 0x6C) + __base_D_212078), f32 *, 0x38);
    sp24 = (f64) sp18;
    M2C_FIELD(D_8006A4FC, f32 *, 0x10) -= *(f32 *)0x101F5C;
    sp20 = sp10;
    func_802403D4(&sp10, &sp20, 0x3F800000, temp_a3);
    if (D_8006A588 != 0) {
        M2C_FIELD(D_8007AFF8, s32 *, 0xDC) = (s32) (M2C_FIELD(M2C_FIELD(D_8006A510, void **, 0x8C), s32 *, 0x1C) + (M2C_FIELD(M2C_FIELD(D_8006A510, void **, 0x90), u16 *, 8) * 0x10));
        M2C_FIELD(D_8007AFF8, f32 *, 0xD8) = (f32) D_8006A594;
        M2C_FIELD(D_8007AFF8, s32 *, 0x44) |= 0x40000;
        M2C_FIELD(D_8007AFF8, s16 *, 0xE0) = (s16) M2C_FIELD(M2C_FIELD(D_8006A510, void **, 0x90), u8 *, 2);
    }
    temp_fv1 = M2C_FIELD(((M2C_FIELD(D_8007AFF8, const u8 *, 0x40) * 0x6C) + __base_D_212078), f32 *, 0x30);
    if (((M2C_FIELD(D_8006A4FC, const f32 *, 0x28) + M2C_FIELD(D_8006A4FC, const f32 *, 0x10)) - temp_fv1) < D_8006A594) {
        M2C_FIELD(D_8006A4FC, f32 *, 0x10) = 0.0f;
        M2C_FIELD(D_8006A4FC, f32 *, 0x28) = (f32) (D_8006A594 + temp_fv1);
        return 1;
    }
    return func_8010B74C();
}
