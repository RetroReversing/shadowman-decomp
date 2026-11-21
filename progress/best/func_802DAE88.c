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

M2C_UNK func_80116D80(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
s32 func_8022B588(M2C_UNK *);                       /* extern */
M2C_UNK func_802DAEB4();                            /* extern */
extern M2C_UNK D_80059738;
extern M2C_UNK D_8007DC30;

void func_802DAE88(void) {
    s32 sp10;
    M2C_UNK *sp14;
    M2C_UNK sp28;

    sp14 = &D_8007DC30;
    if (func_8022B588(&D_8007DC30) != 0) {
        func_802DAEB4();
        return;
    }
    sp10 = 1;
    /*__repair_pointer_balance*/if ((unsigned long)sp14 & 0x100) {
func_80116EB0(&D_80059738, &sp10, 1);
} else {
func_80116EB0(&D_80059738, &sp10, 1);
}
    func_80116D80(&D_8007DC30, &sp28, 1);
}
