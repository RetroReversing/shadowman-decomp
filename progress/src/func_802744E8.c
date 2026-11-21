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

M2C_UNK func_80109DB4(M2C_UNK);                     /* extern */
M2C_UNK func_802BA2B0(M2C_UNK, void *, s32);        /* extern */
extern s32 D_8006A4FC;
extern void *D_8007AFF8;

void func_802744E8(void) {
    if (!(M2C_FIELD(D_8007AFF8, s32 *, 0x44) & 0x200)) {
        if ((M2C_FIELD(D_8007AFF8, s16 *, 0x5A) <= 0) && (M2C_FIELD(D_8007AFF8, s32 *, 0x48) & 2)) {
            func_80109DB4(3);
        }
        if (M2C_FIELD(D_8007AFF8, u8 *, 0x40) != 0x38) {
            func_802BA2B0(2, D_8007AFF8, D_8006A4FC);
        }
        M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x200);
    }
}
