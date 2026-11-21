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

M2C_UNK func_80109318(M2C_UNK, void *, M2C_UNK);    /* extern */
M2C_UNK func_80255F90();                            /* extern */
M2C_UNK func_8026E82C(void *, M2C_UNK);             /* extern */
M2C_UNK func_8026E9C4(void *, M2C_UNK);             /* extern */

void func_80255F0C(void *arg0) {
    s32 temp_v1;
    s32 var_v1;
    void *temp_a0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    temp_a0 = M2C_FIELD(temp_s0, void **, 0x6C);
    if ((M2C_FIELD(temp_a0, u8 *, 0x14) == 0) && ((temp_v1 = M2C_FIELD(temp_a0, s32 *, 0), (temp_v1 == 1)) || (temp_v1 == 4))) {
        if (temp_v1 != 4) {
            M2C_FIELD(temp_a0, s32 *, 0x10) = 0;
        }
        var_v1 = 0xD;
        if (M2C_FIELD(temp_a0, s32 *, 0) == 4) {
            var_v1 = 2;
        }
        M2C_FIELD(temp_a0, s32 *, 0) = var_v1;
        if (M2C_FIELD(temp_s0, s32 *, 0x68) == 0) {
            func_8026E82C(temp_a0 + 4, 2);
            func_80255F90();
        } else {
            func_8026E9C4(temp_s0, 2);
            if (M2C_FIELD(arg0, s16 *, 0x14) == 0xF7) {
                func_80109318(0x18A, temp_s0 + 0x24, 0);
            }
        }
    }
}
