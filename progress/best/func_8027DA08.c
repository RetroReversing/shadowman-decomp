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

extern void *D_8007AFF8;

void func_8027DA08(void) {
    s32 temp_a2;

    if (M2C_FIELD(D_8007AFF8, u8 *, 0x38) == 0xB) {
        if (M2C_FIELD(D_8007AFF8, s16 **, 0x10) == NULL) {
            M2C_FIELD(D_8007AFF8, s32 *, 0xC) = 0;
            M2C_FIELD(D_8007AFF8, u8 *, 0x38) = 0U;
            return;
        }
        M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x10000);
        temp_a2 = *M2C_FIELD(D_8007AFF8, s16 **, 0x10);
        if (temp_a2 == -1) {
            M2C_FIELD(D_8007AFF8, s16 *, 0xAA) = 1;
            return;
        }
        M2C_FIELD(D_8007AFF8, s16 *, 0x22) = temp_a2;
        M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (((M2C_FIELD(D_8007AFF8, s32 *, 0x44) & 0xBFFFFFFF) | 0x40) & ~8 & 0xFFFDFFFF);
    }
}
