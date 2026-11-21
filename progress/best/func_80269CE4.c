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

M2C_UNK func_80268AC0(M2C_UNK, u8);                 /* extern */
M2C_UNK func_80269D10(M2C_UNK);                     /* extern */
M2C_UNK func_80269D34(M2C_UNK);                     /* extern */
extern s32 D_80075AA4;
extern s32 D_80075B3C;
extern u8 D_8007DB84;

void func_80269CE4(void) {
    s32 *__base_D_80075AA4;
    if (D_80075B3C > 0) {
        func_80269D10(1);
        return;
    }
    func_80268AC0(1, D_8007DB84);
    __base_D_80075AA4 = &D_80075AA4;
    if ((*__base_D_80075AA4) > 0) {
        func_80269D34(2);
        return;
    }
    /*__repair_pointer_balance*/if ((unsigned long)__base_D_80075AA4 & 0x100) {
func_80268AC0(2, 1U);
} else {
func_80268AC0(2, 1U);
}
    D_80075B3C = 0;
    (*__base_D_80075AA4) = 0;
}
