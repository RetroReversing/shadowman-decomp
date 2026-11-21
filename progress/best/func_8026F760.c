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

M2C_UNK func_80267F78(f32, s32, M2C_UNK, M2C_UNK);  /* extern */
f32 func_80272214(void);                       /* extern */
extern u8 D_212078[];
extern s32 D_8006A4FC;
extern void *D_8007AFF8;

s32 func_8026F760(void) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + D_212078), u8 *, 0x24) * 0x64;
    if (func_80272214() == *(f32 *)0x213F00) {
        return 0;
    }
    func_80267F78((f32) temp_s0, D_8006A4FC + 0x24, 0, -1);
    return 1;
}
