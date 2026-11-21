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

M2C_UNK func_802403F8(M2C_UNK32 *, M2C_UNK32 *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8026F8E8(M2C_UNK32, f32, M2C_UNK32, M2C_UNK32, f32, M2C_UNK32, s32, s32, s32); /* extern */
M2C_UNK func_8028C1F4(M2C_UNK *, void *);           /* extern */
extern M2C_UNK D_212078;
extern void *D_8006A4FC;
extern M2C_UNK D_8006A510;
extern void *D_8007AFF8;

void func_8028C0E8(void) {
    M2C_UNK32 sp28;
    f32 sp2C;
    M2C_UNK32 sp30;
    M2C_UNK32 sp38;
    f32 sp3C;
    M2C_UNK32 sp40;
    M2C_UNK32 temp_fv1;
    M2C_UNK32 temp_fv1f;
    f32 temp_fv0;

    temp_fv1f = M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x24);
    sp38 = temp_fv1f;
    temp_fv0 = M2C_FIELD(D_8006A4FC, f32 *, 0x28) + *(f32 *)0x215338;
    sp3C = temp_fv0;
    temp_fv1 = M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x2C);
    temp_fv1f = temp_fv1f;
    sp40 = temp_fv1;
    sp30 = temp_fv1;
    sp2C = temp_fv0 + *(f32 *)0x21533C;
    func_802403F8(&sp38, &temp_fv1f, 0x41200000, 1);
    do { func_8026F8E8(sp38, sp3C, sp40, temp_fv1f, sp2C, sp30, 0xFF, 0, 0xFF); } while (0);
    if ((M2C_FIELD(&D_8006A510, s32 *, 0x78) == 1) && (M2C_FIELD(&D_8006A510, f32 *, 0x84) > 0.0f)) {
        func_8028C1F4(&D_212078, D_8007AFF8);
        return;
    }
    M2C_FIELD(D_8007AFF8, f32 *, 0xB0) = (f32) *(f32 *)0x215340;
}
