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

M2C_UNK func_80270E0C(f32);                         /* extern */
M2C_UNK func_802712B0(f32, f32);                    /* extern */
f32 func_80272260();                                /* extern */
M2C_UNK func_802776D8(u8);                          /* extern */
extern void *D_8006A4FC;
extern M2C_UNK D_80075568;
extern void *D_8007AFF8;

void func_802754B0(void) {
    void **__base_D_8007AFF8;
    f32 temp_fv0;

    temp_fv0 = func_80272260();
    if ((temp_fv0 < *(f32 *)0x214260) || (*(f32 *)0x214264 < temp_fv0)) {
        __base_D_8007AFF8 = &D_8007AFF8;
        M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) = (s32) (M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) | 0x40);
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x70) = (f32) M2C_FIELD(&D_80075568, f32 *, 0x24);
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x74) = (f32) M2C_FIELD(&D_80075568, f32 *, 0x28);
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x78) = (f32) M2C_FIELD(&D_80075568, f32 *, 0x2C);
        func_802776D8(M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x3B));
        func_802712B0(M2C_FIELD(D_8006A4FC, f32 *, 0x1C), (f32) M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x2C));
        func_80270E0C((f32) M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x5C));
    }
}
