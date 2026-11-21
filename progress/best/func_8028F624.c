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

M2C_UNK func_802403D4(M2C_UNK32 *, M2C_UNK32 *, f32, M2C_UNK32); /* extern */
M2C_UNK func_8028F764(void *, M2C_UNK *);           /* extern */
extern M2C_UNK D_212078;
extern void *D_8006A4FC;
extern M2C_UNK D_8006A510;
extern void *D_8007AFF8;

void func_8028F624(s32 arg0, f32 arg1, M2C_UNK arg2) {
int *__repair_home0 = &arg0;

    M2C_UNK32 sp10;
    f32 sp14;
    M2C_UNK32 sp18;
    M2C_UNK32 sp20;
    f32 sp24;
    M2C_UNK32 sp28;
    M2C_UNK32 temp_a3;

    temp_a3 = M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x24);
    sp10 = temp_a3;
    sp14 = M2C_FIELD(D_8006A4FC, f32 *, 0x28);
    sp18 = M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x2C);
    sp20 = sp10;
    sp14 += M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + &D_212078), f32 *, 0x38);
    sp28 = sp18;
    sp24 = arg1 - *(f32 *)0x2155F4;
    do { func_802403D4(&sp10, &sp20, 1.0f, temp_a3); } while (0);
    if (M2C_FIELD(&D_8006A510, s32 *, 0x78) != 0) {
        M2C_FIELD(D_8007AFF8, s32 *, 0xDC) = (s32) (M2C_FIELD(M2C_FIELD(&D_8006A510, void **, 0x8C), s32 *, 0x1C) + (M2C_FIELD(M2C_FIELD(&D_8006A510, void **, 0x90), u16 *, 8) * 0x10));
        M2C_FIELD(D_8007AFF8, f32 *, 0xD8) = (f32) M2C_FIELD(&D_8006A510, f32 *, 0x84);
        M2C_FIELD(D_8007AFF8, s16 *, 0xE0) = (s16) M2C_FIELD(M2C_FIELD(&D_8006A510, void **, 0x90), u8 *, 2);
        func_8028F764(D_8007AFF8, &D_8006A510);
        return;
    }
    M2C_FIELD(D_8007AFF8, s32 *, 0xDC) = 0;
    M2C_FIELD(D_8007AFF8, f32 *, 0xD8) = (f32) *(f32 *)0x2155F8;
}
