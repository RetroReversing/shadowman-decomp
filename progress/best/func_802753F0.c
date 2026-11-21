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

s32 func_80276148();                                /* extern */
extern void *D_8007AFF8;

void func_802753F0(void) {
    void **__base_D_8007AFF8;
    __base_D_8007AFF8 = &D_8007AFF8;
    if (!(M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x48) & 0x1000)) {
        if ((u32) (func_80276148() & 0xFFFF) >= 9U) {
            M2C_FIELD((*__base_D_8007AFF8), s32 *, 0xC) = 0;
        }
        M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x54) = 0xA;
        M2C_FIELD((*__base_D_8007AFF8), s32 *, 0xC) = 0;
        M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x22) = -1;
        M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x10) = 0;
        M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x4F) = 0;
    }
}
