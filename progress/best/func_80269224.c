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

M2C_UNK func_8026A5E8(f32, f32, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK D_80075AA8;

void func_80269224(void) {
    func_8026A5E8(M2C_FIELD(&D_80075AA8, f32 *, 0), M2C_FIELD(&D_80075AA8, f32 *, 4), &D_80075AA8, &D_80075AA8, 0x40, 0x40, *M2C_FIELD(&D_80075AA8, s32 **, 0x10) + 0x200, *M2C_FIELD(&D_80075AA8, s32 **, 0x10), (s32) M2C_FIELD(&D_80075AA8, u8 *, 0x6B));
}
