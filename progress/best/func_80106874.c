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

M2C_UNK func_80116D80(M2C_UNK *, void **, M2C_UNK); /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, s16 *, M2C_UNK);   /* extern */
M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_8004B44C;

s32 func_80106874(s32 arg0) {
    u8 sp10[0x18];
    s32 sp28[2];
    M2C_UNK *sp30;
    s32 sp38;
    s32 sp3C;
    void *sp40;
    M2C_UNK *sp44;
    M2C_UNK sp48;
    void *sp4C;
    void *sp50;

    osCreateMesgQueue(sp10, &sp48, 1);
    sp28[1] = arg0;
    sp28[0] = 2;
    sp30 = sp10;
    func_80116EB0(&D_8004B44C, sp28, 1);
    func_80116D80(sp10, &sp4C, 1);
    sp38 = 3;
    sp44 = sp10;
    sp40 = sp4C;
    sp3C = M2C_FIELD(sp4C, u16 *, 6) << 0xC;
    M2C_FIELD(sp4C, s32 *, 8) = 0;
    func_80116EB0(&D_8004B44C, &sp38, 1);
    func_80116D80(sp10, &sp50, 1);
    return (s32) sp50;
}
