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

s32 func_80272100();
extern char D_212078[];
extern void *D_8007AFF8;

s32 func_80274204(u8 arg0) {
    void **__base_D_8007AFF8;
    __base_D_8007AFF8 = &D_8007AFF8;
    if (!(M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) & 0x2000)) {
        M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x5A) = (u16) M2C_FIELD(((M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x40) * 0x6C) + D_212078), u16 *, 6);
    }
    M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x54) = 0xA;
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) |= 0x2000;
    return func_80272100(arg0 & 0xFF, (*__base_D_8007AFF8), __base_D_8007AFF8, arg0) & 0xFF;
}
