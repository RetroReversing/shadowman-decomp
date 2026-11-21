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

extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_80273898(void) {
    s32 __repair_store_0;
    s32 __repair_store_1;
    s32 __repair_store_2;
    __repair_store_0 = (s32) M2C_FIELD(D_8007AFF8, s32 *, 0xFC);
    __repair_store_1 = (s32) M2C_FIELD(D_8007AFF8, s32 *, 0x100);
    __repair_store_2 = (s32) M2C_FIELD(D_8007AFF8, s32 *, 0x104);
    M2C_FIELD(D_8006A4FC, s32 *, 0x24) = __repair_store_0;
    M2C_FIELD(D_8006A4FC, s32 *, 0x28) = __repair_store_1;
    M2C_FIELD(D_8006A4FC, s32 *, 0x2C) = __repair_store_2;
}
