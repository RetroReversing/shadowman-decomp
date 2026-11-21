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

f32 func_802701A4(f32, f32, s32, s32, s32, f32, f32, f32); /* extern */
M2C_UNK func_8029224C();                            /* extern */
extern s32 D_80036944;
extern void *D_8006A4FC;

s32 func_80272538(s32 arg0) {
    s32 var_v0;
    void *temp_v0;

    arg0 &= 0xFF;
    func_8029224C();
    temp_v0 = (arg0 * 0x34) + D_80036944;
    return (func_802701A4(M2C_FIELD(temp_v0, const f32 *, 4), M2C_FIELD(temp_v0, const f32 *, 8), D_80036944, M2C_FIELD(temp_v0, const s32 *, 0xC), M2C_FIELD(D_8006A4FC, const s32 *, 0x24), M2C_FIELD(D_8006A4FC, const f32 *, 0x28), M2C_FIELD(D_8006A4FC, const f32 *, 0x2C), M2C_FIELD(temp_v0, const f32 *, 0x10)) != 0.0f) ? 1 : 0;
}
