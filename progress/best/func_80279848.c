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

M2C_UNK func_802798C0(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_8007AFF8;

void func_80279848(void) {
    M2C_UNK var_a0;
    u16 temp_v0;

    if (M2C_FIELD(D_8007AFF8, u8 *, 0x38) == 0) {
        temp_v0 = (M2C_FIELD(D_8007AFF8, u16 *, 0x90) + 1) & 1;
        M2C_FIELD(D_8007AFF8, u16 *, 0x90) = temp_v0;
        var_a0 = 3;
        if (temp_v0 == 0) {
            var_a0 = 5;
        }
        func_802798C0(var_a0, 0x32);
    }
    if (M2C_FIELD(D_8007AFF8, u8 *, 0x38) == 1) {
        func_802798C0(5, 0x32);
        func_802798C0(3, 0x32);
    }
}
