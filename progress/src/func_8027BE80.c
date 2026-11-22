/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (((struct { __typeof__(*(type_ptr)0) v; } *)((s8 *)(expr) + (offset)))->v)
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_80113AD0();                                /* extern */
M2C_UNK func_802776D8(u8, void *);                  /* extern */
extern u16 D_80052776;
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_8027BE80(void) {
    void **__base_D_8007AFF8;
    u16 temp_v1;

    __base_D_8007AFF8 = &D_8007AFF8;
    temp_v1 = M2C_FIELD((*__base_D_8007AFF8), u16 *, 0xA0) - D_80052776;
    M2C_FIELD((*__base_D_8007AFF8), u16 *, 0xA0) = temp_v1;
    if ((temp_v1 << 0x10) <= 0) {
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x70) = (f32) M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xB0);
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x74) = (f32) M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xB4);
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x78) = (f32) M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xB8);
        func_802776D8(M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x3B), (*__base_D_8007AFF8));
        M2C_FIELD((*__base_D_8007AFF8), u16 *, 0xA0) = 0xFU;
        M2C_FIELD((*__base_D_8007AFF8), u16 *, 0xA0) = (u16) (M2C_FIELD((*__base_D_8007AFF8), u16 *, 0xA0) + (func_80113AD0() % 31));
        M2C_FIELD(D_8006A4FC, f32 *, 0x10) = (f32) *(f32 *)0x214614;
    }
    if ((M2C_FIELD(D_8006A4FC, f32 *, 0x28) - *(f32 *)0x214618) < M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xB4)) {
        M2C_FIELD(D_8006A4FC, f32 *, 0x10) = (f32) *(f32 *)0x21461C;
    }
}
