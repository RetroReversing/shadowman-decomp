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
f32 func_802712B0(f32, f32);                        /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;

s32 func_80271304(f32 arg0, s32 arg1) {

    if (arg0 <= func_802712B0(M2C_FIELD(D_8006A4FC, f32 *, 0x1C), (f32) M2C_FIELD(D_8007AFF8, u16 *, 0x2C))) {
        func_80270090(arg1 & 0xFF);
        return 1;
    }
    return 0;
}
