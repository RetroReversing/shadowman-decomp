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

M2C_UNK func_80270090(s32);                         /* extern */
M2C_UNK func_80270E0C(f32);                         /* extern */
f32 func_802712B0(f32, f32);                        /* extern */
s32 func_8027D9F8();                                /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;

s32 func_8027D988(s32 arg0) {
    if (!(func_802712B0(M2C_FIELD(D_8006A4FC, f32 *, 0x1C), (f32) M2C_FIELD(D_8007AFF8, u16 *, 0x2C)) < *(f32 *)0x21475C)) {
        func_80270E0C(*(f32 *)0x214760);
        return func_8027D9F8(arg0);
    }
    func_80270090(arg0 & 0xFF);
    return 1;
}
