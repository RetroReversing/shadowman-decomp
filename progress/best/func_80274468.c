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

M2C_UNK func_802BA2B0(M2C_UNK, void *, void *);     /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_80274468(void) {
int __repair_literal;

    s8 temp_v1;

    temp_v1 = M2C_FIELD(D_8007AFF8, s8 *, 0x56);
__repair_literal = 2;

    if ((temp_v1 >= -1) && (temp_v1 >= __repair_literal) && (temp_v1 == 2)) {
        M2C_FIELD(D_8006A4FC, s32 *, 0x10) = 0;
        M2C_FIELD(D_8007AFF8, f32 *, 0xB0) = (f32) *(f32 *)0x214150;
    }
    if (M2C_FIELD(D_8007AFF8, u8 *, 0x40) != 0x38) {
        func_802BA2B0(1, D_8007AFF8, D_8006A4FC);
    }
}
