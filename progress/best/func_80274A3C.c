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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_80274A3C(void *arg0) {
    s32 __repair_store_0;
    s32 __repair_store_1;
    M2C_FIELD(arg0, s32 *, 0x44) &= 0xEFFFFFFF & 0xFFFEFFFF;
    __repair_store_0 = (s32) ((M2C_FIELD(arg0, s32 *, 0x48) & ~0x80) | 0x100);
    __repair_store_1 = (s32) (((M2C_FIELD(arg0, s32 *, 0x44) | 2) & ~0x10) | 0x08000000);
    M2C_FIELD(arg0, s32 *, 0x48) = __repair_store_0;
    M2C_FIELD(arg0, s32 *, 0x44) = __repair_store_1;
}
