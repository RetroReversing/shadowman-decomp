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

M2C_UNK func_80109318(s16, void *, M2C_UNK);        /* extern */

void func_802A64B0(void *arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = (M2C_FIELD(arg0, s32 *, 0x44) * 0x50) + M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8) + (arg1 * 4);
    if (M2C_FIELD(temp_a0, s32 *, 0x34) != -1) {
        func_80109318(M2C_FIELD(temp_a0, s16 *, 0x36), arg0 + 0x54, 0);
    }
}
