/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_8026FCC4(M2C_UNK32, f32, M2C_UNK32, M2C_UNK32, f32, M2C_UNK32, f32); /* extern */
s32 func_8028DEB4();                                /* extern */
extern M2C_UNK D_212078;
extern void *D_8006A4FC;
extern M2C_UNK D_80075568;
extern void *D_8007AFF8;

s32 func_8028DD98(f32 arg1) {
    M2C_UNK32 sp20;
    f32 sp24;
    M2C_UNK32 sp28;
    M2C_UNK32 sp30;
    f32 sp34;
    M2C_UNK32 sp38;
    f32 temp_fv0f;

    if (arg1 == 0.0f) {
        return func_8028DEB4();
    }
    temp_fv0f = *(f32 *)0x2154E4;
    if (M2C_FIELD(D_8007AFF8, f32 *, 0x6C) != temp_fv0f) {
        M2C_FIELD(D_8007AFF8, f32 *, 0x6C) = temp_fv0f;
        M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) & ~0x400);
    }
    sp30 = M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x24);
    sp38 = M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x2C);
    sp34 = M2C_FIELD(&D_80075568, f32 *, 0x28) + *(f32 *)0x2154E8;
    sp20 = M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x24);
    sp24 = M2C_FIELD(D_8006A4FC, f32 *, 0x28) + M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + &D_212078), f32 *, 0x30) + *(f32 *)0x2154EC;
    sp28 = M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x2C);
    func_8026FCC4(sp30, sp34, sp38, sp20, sp24, sp28, *(f32 *)0x2154F0);
    return 0;
}
