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

M2C_UNK func_80270090(M2C_UNK);                     /* extern */
f32 func_802701A4(f32, f32, s32, s32, f32, f64);    /* extern */
M2C_UNK func_80271F88(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_8006A4FC;
extern M2C_UNK D_80075568;
extern void *D_8007AFF8;

void func_8027F250(void) {
    if (func_802701A4(M2C_FIELD(&D_80075568, f32 *, 0x24), M2C_FIELD(&D_80075568, f32 *, 0x28), M2C_FIELD(&D_80075568, s32 *, 0x2C), M2C_FIELD(D_8006A4FC, s32 *, 0x24), M2C_FIELD(D_8006A4FC, f32 *, 0x28), (f64) *(f32 *)0x2148D4) != *(f32 *)0x2148D8) {
        func_80271F88(1, 0xDC);
        M2C_FIELD(D_8007AFF8, s16 *, 0x92) = 2;
        func_80270090(3);
    }
}
