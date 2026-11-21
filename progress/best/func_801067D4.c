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

M2C_UNK func_80103B98(s32);                         /* extern */
M2C_UNK func_80116D80(s32, M2C_UNK *, s32 *);   /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, s16 *, M2C_UNK);   /* extern */
M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_8004B44C;

void func_801067D4(s32 arg0) {
    char sp10[0x18];
    s32 sp28[2];
    M2C_UNK *sp30;
    M2C_UNK sp38;
    s32 sp3C;

    osCreateMesgQueue(sp10, &sp38, 1);
    sp28[1] = arg0;
    sp28[0] = 2;
    sp30 = sp10;
    func_80116EB0(&D_8004B44C, sp28, 1);
    func_80116D80(arg0, sp10, &sp3C);
    func_80103B98(sp3C);
}
