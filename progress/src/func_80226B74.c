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

M2C_UNK func_80225CD0();                            /* extern */
extern M2C_UNK D_80059410;
extern void *D_8005EA2C;

void func_80226B74(void) {
    M2C_FIELD(D_8005EA2C, f32 *, 0x60) = (f32) (M2C_FIELD(D_8005EA2C, f32 *, 0x60) - M2C_FIELD(&D_80059410, f32 *, 0));
    M2C_FIELD(D_8005EA2C, f32 *, 0x64) = (f32) (M2C_FIELD(D_8005EA2C, f32 *, 0x64) - M2C_FIELD(&D_80059410, f32 *, 4));
    M2C_FIELD(D_8005EA2C, f32 *, 0x68) = (f32) (M2C_FIELD(D_8005EA2C, f32 *, 0x68) - M2C_FIELD(&D_80059410, f32 *, 8));
    func_80225CD0();
}
