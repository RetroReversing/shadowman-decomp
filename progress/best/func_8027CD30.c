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

s32 func_80113AD0();                                /* extern */
M2C_UNK func_8027003C();                            /* extern */
M2C_UNK func_8027006C(void *, M2C_UNK);             /* extern */
M2C_UNK func_8027206C(M2C_UNK, M2C_UNK, void **, s32); /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_8027CD30(void) {
    s32 temp_ret;

    func_8027003C();
    temp_ret = func_80113AD0();
    M2C_FIELD(D_8006A4FC, f32 *, 0x1C) = (f32) (temp_ret % 360);
    M2C_FIELD(D_8007AFF8, s16 *, 0xA8) = 0x96;
    M2C_FIELD(D_8007AFF8, f32 *, 0xB0) = (f32) *(f32 *)0x2146D4;
    M2C_FIELD(D_8007AFF8, f32 *, 0xBC) = (f32) *(f32 *)0x2146D8;
    M2C_FIELD(D_8007AFF8, s16 *, 0xAC) = 2;
    func_8027206C(0, 0, &D_8006A4FC, MULT_HI(temp_ret, 0xB60B60B7));
    M2C_FIELD(D_8007AFF8, s16 *, 0x90) = 0;
    M2C_FIELD(D_8007AFF8, s16 *, 0x9E) = 5;
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x20004);
    func_8027006C(D_8007AFF8, 0x20004);
}
