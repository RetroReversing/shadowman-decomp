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

M2C_UNK func_8025BF58(void);                   /* extern */
extern M2C_UNK D_80052770;
extern M2C_UNK **D_80074BA4;
extern M2C_UNK **D_80074BA8;

void func_8025D4C4(void) {
    M2C_UNK **temp_s0_2;
    M2C_UNK *temp_a0;
    
    M2C_UNK *var_a0;

    if (M2C_FIELD(&D_80052770, s32 *, 4) != 0) {
        temp_a0 = *D_80074BA4;
        if (temp_a0 != NULL) {
            if (*temp_a0 != NULL) {
                var_a0 = temp_a0;
                do {
                    temp_a0 = *var_a0;
                    func_8025BF58();
                    var_a0 = temp_a0;
                } while (*temp_a0 != NULL);
            }
        }
        temp_s0_2 = D_80074BA4;
        D_80074BA4 = D_80074BA8;
        D_80074BA8 = temp_s0_2;
    }
}
