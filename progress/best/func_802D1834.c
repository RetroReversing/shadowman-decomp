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

M2C_UNK func_8022265C();                            /* extern */
extern u32 D_8005E9D4;
extern s32 D_8007BEF0;

void func_802D1834(void) {
    s32 var_s0;
    u32 var_s3;
    void *temp_v0;

    var_s3 = 0;
    var_s0 = 0;
    do {
        temp_v0 = M2C_FIELD((var_s0 + D_8007BEF0), void **, 0x20);
        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u8 *, 0x3E) == 3)) {
            do {
                func_8022265C();
            } while (M2C_FIELD(M2C_FIELD((var_s0 + D_8007BEF0), void **, 0x20), u8 *, 0x3E) == 3);
        }
        var_s3 += 1;
        var_s0 += 0x28;
    } while ((u32) D_8005E9D4 >= var_s3);
}
