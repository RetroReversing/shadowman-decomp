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

M2C_UNK func_80105CAC();                            /* extern */
M2C_UNK func_80105D30();                            /* extern */
M2C_UNK func_80105E18();                            /* extern */
M2C_UNK func_80105EB0();                            /* extern */
M2C_UNK func_80106184();                            /* extern */
M2C_UNK func_80106190();                            /* extern */
M2C_UNK func_80116D80(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
extern M2C_UNK D_8004AECC;

void func_801060D0(void) {
int __repair_literal;

    s32 sp10;

    do { func_80116D80(&D_8004AECC, &sp10, 1); } while (0);
    if (sp10 != 1) {
__repair_literal = 2;

        if (sp10 < __repair_literal) {
            if (sp10 != 0) {
                func_80106184();
                return;
            }
            func_80105EB0();
            func_80106190();
            return;
        }
        if (sp10 != 2) {
            if (sp10 != 3) {
                func_80106184();
                return;
            }
            func_80105D30();
            func_80106190();
            return;
        }
        func_80105CAC();
        func_80106190();
        return;
    }
    func_80105E18();
    func_80106190();
}
